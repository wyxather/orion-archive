#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include <unordered_set>
#include <string>
#include <vector>

namespace SDK
{
template <typename T, typename K>
constexpr auto Cast(K* object) noexcept
{
	return static_cast<T*>(object);
}

template <typename T>
constexpr auto GetVFunction(const void *instance, std::size_t index) noexcept -> T
{
	const auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<T>(vtable[index]);
}

class FNameEntry
{
public:
	[[nodiscard]] constexpr auto GetAnsiName() const noexcept
	{
		return AnsiName;
	}

	[[nodiscard]] constexpr auto GetWideName() const noexcept
	{
		return WideName;
	}

private:
	class FNameEntry* HashNext; //0x0000
	int32_t Index; //0x0008

	union //0x000C
	{
		char AnsiName[2048];
		wchar_t WideName[1024];
	};
};

class TNameEntryArray
{
	enum
	{
		ElementsPerChunk = 16 * 1024,
		ChunkTableSize = (4 * 1024 * 1024 + ElementsPerChunk - 1) / ElementsPerChunk
	};

	[[nodiscard]] constexpr auto GetItemPtr(std::size_t Index) const noexcept
	{
		const auto ChunkIndex = Index / ElementsPerChunk;
		const auto WithinChunkIndex = Index % ElementsPerChunk;
		return Chunks[ChunkIndex] + WithinChunkIndex;
	}

public:
	[[nodiscard]] constexpr auto Num() const noexcept
	{
		return NumElements;
	}

	[[nodiscard]] constexpr auto IsValidIndex(std::size_t Index) const noexcept
	{
		return Index >= 0 && Index < NumElements && GetById(Index);
	}

	[[nodiscard]] constexpr auto& operator[](std::size_t Index) const noexcept
	{
		return *GetItemPtr(Index);
	}

private:
	FNameEntry* const* Chunks[ChunkTableSize]; //0x0000
	int32_t NumElements; //0x0800
	int32_t NumChunks; //0x0804
}; //Size: 0x0808
static_assert(sizeof(TNameEntryArray) == 0x808);

struct FName
{
	static TNameEntryArray* GNames;

	[[nodiscard]] static constexpr auto& GetGlobalNames() noexcept
	{
		return *GNames;
	}

	[[nodiscard]] constexpr auto GetName() const noexcept
	{
		return GetGlobalNames()[ComparisonIndex]->GetAnsiName();
	}

	[[nodiscard]] constexpr auto operator==(const FName& other) const noexcept
	{
		return ComparisonIndex == other.ComparisonIndex;
	}

	std::int32_t ComparisonIndex;
	std::uint32_t Number;

	constexpr FName() noexcept :
		ComparisonIndex(0),
		Number(0)
	{
	}

	constexpr FName(std::int32_t i) noexcept :
		ComparisonIndex(i),
		Number(0)
	{
	}

	FName(const char* nameToFind) noexcept :
		ComparisonIndex(0),
		Number(0)
	{
		static std::unordered_set<std::int32_t> cache;

		for (auto i : cache) {
			if (!std::strcmp(GetGlobalNames()[i]->GetAnsiName(), nameToFind)) {
				ComparisonIndex = i;
				return;
			}
		}

		for (decltype(GetGlobalNames().Num()) i = 0, max = GetGlobalNames().Num(); i < max; ++i) {
			if (GetGlobalNames()[i] != nullptr) {
				if (!std::strcmp(GetGlobalNames()[i]->GetAnsiName(), nameToFind)) {
					cache.insert(i);
					ComparisonIndex = i;
					return;
				}
			}
		}
	}
}; //Size: 0x0008
static_assert(sizeof(FName) == 0x8);

class FUObjectItem
{
	enum class EInternalObjectFlags : std::int32_t
	{
		None = 0,
		ReachableInCluster = 1 << 23,
		ClusterRoot = 1 << 24,
		Native = 1 << 25,
		Async = 1 << 26,
		AsyncLoading = 1 << 27,
		Unreachable = 1 << 28,
		PendingKill = 1 << 29,
		RootSet = 1 << 30,
		GarbageCollectionKeepFlags = Native | Async | AsyncLoading,
		AllFlags = ReachableInCluster | ClusterRoot | Native | Async | AsyncLoading | Unreachable | PendingKill | RootSet,
	};

public:
	class UObject* Object; //0x0000
	int32_t Flags; //0x0008
	int32_t ClusterRootIndex; //0x000C
	int32_t SerialNumber; //0x0010
	char pad_0014[4]; //0x0014

	[[nodiscard]] constexpr auto IsUnreachable() const noexcept
	{
		return !!(Flags & static_cast<std::underlying_type_t<EInternalObjectFlags>>(EInternalObjectFlags::Unreachable));
	}

	[[nodiscard]] constexpr auto IsPendingKill() const noexcept
	{
		return !!(Flags & static_cast<std::underlying_type_t<EInternalObjectFlags>>(EInternalObjectFlags::PendingKill));
	}
}; //Size: 0x0018
static_assert(sizeof(FUObjectItem) == 0x18);

class FChunkedFixedUObjectArray
{
public:
	enum
	{
		NumElementsPerChunk = 64 * 1024
	};

	[[nodiscard]] constexpr auto Num() const noexcept
	{
		return NumElements;
	}

	[[nodiscard]] constexpr auto GetObjectPtr(std::size_t Index) const noexcept
	{
		const auto ChunkIndex = Index / NumElementsPerChunk;
		const auto WithinChunkIndex = Index % NumElementsPerChunk;
		return Objects[ChunkIndex] + WithinChunkIndex;
	}

	[[nodiscard]] constexpr auto& GetByIndex(std::size_t Index) const noexcept
	{
		return *GetObjectPtr(Index);
	}
private:
	class FUObjectItem* PreAllocatedObjects; //0x0008
	int32_t MaxElements; //0x0010
	int32_t NumElements; //0x0014
	int32_t MaxChunks; //0x0018
	int32_t NumChunks; //0x001C
}; //Size: 0x0020
static_assert(sizeof(FChunkedFixedUObjectArray) == 0x20);

class FUObjectArray
{
public:
	int32_t ObjFirstGCIndex; //0x0000
	int32_t ObjLastNonGCIndex; //0x0004
	int32_t MaxObjectsNotConsideredByGC; //0x0008
	bool OpenForDisregardForGC; //0x000C
	char pad_000D[3]; //0x000D
	class FChunkedFixedUObjectArray ObjObjects; //0x0010
}; //Size: 0x0030
static_assert(sizeof(FUObjectArray) == 0x30);

template<class T>
class TArray
{
	friend class FString;

	T* Data; //0x0000
	int32_t Count; //0x0008
	int32_t Max; //0x000C

public:
	constexpr TArray() noexcept : Data{ nullptr }, Count{ 0 }, Max{ 0 }
	{
	};

	[[nodiscard]] constexpr auto Num() const noexcept
	{
		return Count;
	};

	[[nodiscard]] constexpr auto& operator[](std::size_t i) noexcept
	{
		return Data[i];
	};

	[[nodiscard]] constexpr const auto& operator[](std::size_t i) const noexcept
	{
		return Data[i];
	};

	[[nodiscard]] constexpr auto IsValidIndex(std::size_t i) const noexcept
	{
		return i < Num();
	}
}; //Size: 0x0010
static_assert(sizeof(TArray<void>) == 0x10);

class FString : public TArray<wchar_t>
{
public:
	constexpr FString() noexcept 
	{
	};

	constexpr explicit FString(const wchar_t* other) noexcept
	{
		Max = Count = *other ? static_cast<std::int32_t>(std::wcslen(other)) + 1 : 0;
		if (Count)
			Data = const_cast<wchar_t*>(other);
	};

	[[nodiscard]] constexpr auto IsValid() const noexcept
	{
		return Data != nullptr;
	}

	[[nodiscard]] constexpr auto c_str() const noexcept
	{
		return Data;
	}

	[[nodiscard]] auto ToString() const noexcept
	{
		const auto length = std::wcslen(Data);
		std::string str(length, '\0');
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);
		return str;
	}
}; //Size: 0x0010
static_assert(sizeof(FString) == 0x10);

template<class TEnum>
class TEnumAsByte
{
public:
	constexpr TEnumAsByte() noexcept
	{
	}

	constexpr TEnumAsByte(TEnum _value) noexcept :
		value(static_cast<std::uint8_t>(_value))
	{
	}

	constexpr explicit TEnumAsByte(std::int32_t _value) noexcept :
		value(static_cast<std::uint8_t>(_value))
	{
	}

	constexpr explicit TEnumAsByte(std::uint8_t _value) noexcept :
		value(_value)
	{
	}

	[[nodiscard]] constexpr operator TEnum() const noexcept
	{
		return (TEnum)value;
	}

	[[nodiscard]] constexpr TEnum GetValue() const noexcept
	{
		return (TEnum)value;
	}

private:
	std::uint8_t value;
};

#pragma push_macro("GetObject")
#undef GetObject
class FScriptInterface
{
private:
	class UObject *ObjectPointer; //0x0000
	void* InterfacePointer; //0x0008

public:
	[[nodiscard]] constexpr auto GetObject() const noexcept
	{
		return ObjectPointer;
	}

	[[nodiscard]] constexpr auto& GetObjectRef() noexcept
	{
		return ObjectPointer;
	}

	[[nodiscard]] constexpr auto GetInterface() const noexcept
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
}; //Size: 0x0010
static_assert(sizeof(FScriptInterface) == 0x10);
#pragma pop_macro("GetObject")

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	[[nodiscard]] constexpr auto operator->() const noexcept -> InterfaceType*
	{
		return reinterpret_cast<InterfaceType*>(GetInterface());
	}

	[[nodiscard]] constexpr InterfaceType& operator*() const noexcept
	{
		return *reinterpret_cast<InterfaceType*>(GetInterface());
	}

	[[nodiscard]] constexpr explicit operator bool() const noexcept
	{
		return GetInterface() != nullptr;
	}
};

class FTextData
{
public:
	char UnknownData[0x28];
	wchar_t* Name;
	__int32 Length;
};

struct FText
{
	FTextData* Data;
	char UnknownData[0x10];

	[[nodiscard]] constexpr auto Get() const noexcept -> wchar_t*
	{
		if (Data)
			return Data->Name;
		return nullptr;
	}
};

struct FScriptDelegate
{
	char UnknownData[0x14];
};

struct FScriptMulticastDelegate
{
	char UnknownData[0x10];
};

template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};

struct FWeakObjectPtr
{
public:
	[[nodiscard]] auto IsValid() const noexcept -> bool;
	[[nodiscard]] auto Get() const noexcept -> class UObject*;

	int32_t ObjectIndex; //0x0000
	int32_t ObjectSerialNumber; //0x0004
}; //Size: 0x0008
static_assert(sizeof(FWeakObjectPtr) == 0x8);

template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : private TWeakObjectPtrBase
{
public:
	constexpr auto Get() const noexcept -> T*
	{
		return reinterpret_cast<T*>(TWeakObjectPtrBase::Get());
	}

	[[nodiscard]] constexpr auto& operator*() const noexcept
	{
		return *Get();
	}

	[[nodiscard]] constexpr auto operator->() const noexcept
	{
		return Get();
	}

	[[nodiscard]] constexpr auto IsValid() const noexcept
	{
		return TWeakObjectPtrBase::IsValid();
	}
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	[[nodiscard]] constexpr operator T*() const noexcept
	{
		return TBASE::Get();
	}

	[[nodiscard]] constexpr operator const T*() const noexcept
	{
		return (const T*)TBASE::Get();
	}

	[[nodiscard]] constexpr explicit operator bool() const noexcept
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	std::int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FStringAssetReference_
{
	char UnknownData[0x10];
};

class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
{
};

template<typename ObjectType>
class TAssetPtr : FAssetPtr
{
};

struct FSoftObjectPath
{
	FName AssetPathName;
	FString SubPathString;
};

class FSoftObjectPtr : public TPersistentObjectPtr<FSoftObjectPath>
{
};

template<typename ObjectType>
class TSoftObjectPtr : FSoftObjectPtr
{
};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{
};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{
};

template<class TClass>
class TSubclassOf
{
public:
	constexpr TSubclassOf(class UClass* Class) noexcept
	{
		this->Class = Class;
	}

	[[nodiscard]] constexpr auto GetClass() noexcept
	{
		return Class;
	}

private:
	class UClass* Class;
};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
