#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_PrefabricatorRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PrefabricatorRuntime.PrefabActor
// 0x0020 (0x0350 - 0x0330)
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                            PrefabComponent;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       LastUpdateID;                                             // 0x0338(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seed;                                                     // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabActor");
		return ptr;
	}


	void SavePrefab();
	void RandomizeSeed(struct FRandomStream* InRandom, bool* bRecursive);
	void LoadPrefab();
	bool IsPrefabOutdated();
	class UPrefabricatorAsset* GetPrefabAsset();
};


// Class PrefabricatorRuntime.ReplicablePrefabActor
// 0x0000 (0x0350 - 0x0350)
class AReplicablePrefabActor : public APrefabActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.ReplicablePrefabActor");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabComponent
// 0x0020 (0x0280 - 0x0260)
class UPrefabComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0260(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabComponent");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabRandomizer
// 0x0028 (0x0358 - 0x0330)
class APrefabRandomizer : public AActor
{
public:
	bool                                               bRandomizeOnBeginPlay;                                    // 0x0330(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	int                                                SeedOffset;                                               // 0x0334(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxBuildTimePerFrame;                                     // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x033C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabRandomizer");
		return ptr;
	}


	void Randomize(int* InSeed);
};


// Class PrefabricatorRuntime.PrefabricatorProperty
// 0x0020 (0x0048 - 0x0028)
class UPrefabricatorProperty : public UObject
{
public:
	class FString                                      PropertyName;                                             // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      ExportedValue;                                            // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorProperty");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorEventListener
// 0x0000 (0x0028 - 0x0028)
class UPrefabricatorEventListener : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorEventListener");
		return ptr;
	}


	void PostSpawn(class APrefabActor** Prefab);
};


// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// 0x0010 (0x0038 - 0x0028)
class UPrefabricatorAssetInterface : public UObject
{
public:
	class UClass*                                      EventListener;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReplicates;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetInterface");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAsset
// 0x0038 (0x0070 - 0x0038)
class UPrefabricatorAsset : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorActorData>             ActorData;                                                // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EComponentMobility>                    PrefabMobility;                                           // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FGuid                                       LastUpdateID;                                             // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UThumbnailInfo*                              ThumbnailInfo;                                            // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Version;                                                  // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAsset");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// 0x0018 (0x0050 - 0x0038)
class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorAssetCollectionItem>   Prefabs;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint32_t                                           Version;                                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetCollection");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// 0x0018 (0x0040 - 0x0028)
class UPrefabricatorAssetUserData : public UAssetUserData
{
public:
	TWeakObjectPtr<class APrefabActor>                 PrefabActor;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ItemID;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetUserData");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary");
		return ptr;
	}


	class APrefabActor* STATIC_SpawnPrefab(class UObject** WorldContextObject, class UPrefabricatorAssetInterface** Prefab, struct FTransform* Transform, int* Seed);
	void STATIC_GetAllAttachedActors(class AActor** Prefab, TArray<class AActor*>* AttachedActors);
};


// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// 0x0000 (0x0260 - 0x0260)
class UPrefabSeedLinkerComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabSeedLinkerComponent");
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabSeedLinker
// 0x0018 (0x0348 - 0x0330)
class APrefabSeedLinker : public AActor
{
public:
	TArray<TWeakObjectPtr<class APrefabActor>>         LinkedActors;                                             // 0x0330(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UPrefabSeedLinkerComponent*                  SeedLinkerComponent;                                      // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabSeedLinker");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
