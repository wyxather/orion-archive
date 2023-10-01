#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_PrefabricatorRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrefabricatorRuntime.PrefabActor.SavePrefab
struct APrefabActor_SavePrefab_Params
{
};

// Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
struct APrefabActor_RandomizeSeed_Params
{
	struct FRandomStream*                              InRandom;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool*                                              bRecursive;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PrefabricatorRuntime.PrefabActor.LoadPrefab
struct APrefabActor_LoadPrefab_Params
{
};

// Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
struct APrefabActor_IsPrefabOutdated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
struct APrefabActor_GetPrefabAsset_Params
{
	class UPrefabricatorAsset*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PrefabricatorRuntime.PrefabRandomizer.Randomize
struct APrefabRandomizer_Randomize_Params
{
	int*                                               InSeed;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
struct UPrefabricatorEventListener_PostSpawn_Params
{
	class APrefabActor**                               Prefab;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
struct UPrefabricatorBlueprintLibrary_SpawnPrefab_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrefabricatorAssetInterface**               Prefab;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform*                                 Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int*                                               Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APrefabActor*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
struct UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Params
{
	class AActor**                                     Prefab;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              AttachedActors;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
