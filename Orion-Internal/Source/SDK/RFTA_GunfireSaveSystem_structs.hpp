#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Basic.hpp"
#include "RFTA_Engine_classes.hpp"
#include "RFTA_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GunfireSaveSystem.EPersistenceSaveResult
enum class EPersistenceSaveResult : uint8_t
{
	Success                        = 0,
	Disabled                       = 1,
	Busy                           = 2,
	Unknown                        = 3,
	EPersistenceSaveResult_MAX     = 4
};


// Enum GunfireSaveSystem.EPersistenceLoadResult
enum class EPersistenceLoadResult : uint8_t
{
	Success                        = 0,
	DoesNotExist                   = 1,
	Corrupt                        = 2,
	TooNew                         = 3,
	Unknown                        = 4,
	EPersistenceLoadResult_MAX     = 5
};


// Enum GunfireSaveSystem.EPersistenceHasResult
enum class EPersistenceHasResult : uint8_t
{
	Empty                          = 0,
	Exists                         = 1,
	Corrupt                        = 2,
	Unknown                        = 3,
	EPersistenceHasResult_MAX      = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GunfireSaveSystem.PersistenceKey
// 0x0010
struct FPersistenceKey
{
	struct FName                                       ContainerKey;                                             // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           PersistentID;                                             // 0x0008(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireSaveSystem.PersistentReference
// 0x0018
struct FPersistentReference
{
	struct FPersistenceKey                             Key;                                                      // 0x0000(0x0010) (SaveGame, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class AActor*                                      CachedActor;                                              // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// ScriptStruct GunfireSaveSystem.PersistenceBlob
// 0x0010
struct FPersistenceBlob
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GunfireSaveSystem.SaveGameUserSetting
// 0x0020
struct FSaveGameUserSetting
{
	class FString                                      Key;                                                      // 0x0000(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      Value;                                                    // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireSaveSystem.SaveGameAchievementProgress
// 0x0014
struct FSaveGameAchievementProgress
{
	struct FName                                       AchievementId;                                            // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                    // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
