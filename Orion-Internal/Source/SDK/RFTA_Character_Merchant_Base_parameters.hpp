#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Merchant_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Merchant_Base.Character_Merchant_Base_C.GetItemSpawnTags
struct ACharacter_Merchant_Base_C_GetItemSpawnTags_Params
{
	TArray<struct FName>                               Tags;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Character_Merchant_Base.Character_Merchant_Base_C.GetLevel
struct ACharacter_Merchant_Base_C_GetLevel_Params
{
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Merchant_Base.Character_Merchant_Base_C.GetRandomSeed
struct ACharacter_Merchant_Base_C_GetRandomSeed_Params
{
	int                                                Seed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Merchant_Base.Character_Merchant_Base_C.Generate
struct ACharacter_Merchant_Base_C_Generate_Params
{
};

// Function Character_Merchant_Base.Character_Merchant_Base_C.OnLoaded_8FC16AA04430CE125AFE78B043C14005
struct ACharacter_Merchant_Base_C_OnLoaded_8FC16AA04430CE125AFE78B043C14005_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Merchant_Base.Character_Merchant_Base_C.OnLoaded_57B56CA34F9C75CB4271589095AF3F85
struct ACharacter_Merchant_Base_C_OnLoaded_57B56CA34F9C75CB4271589095AF3F85_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Merchant_Base.Character_Merchant_Base_C.LoadAndAdd
struct ACharacter_Merchant_Base_C_LoadAndAdd_Params
{
};

// Function Character_Merchant_Base.Character_Merchant_Base_C.ReceiveBeginPlay
struct ACharacter_Merchant_Base_C_ReceiveBeginPlay_Params
{
};

// Function Character_Merchant_Base.Character_Merchant_Base_C.RemovePreviousVendorOptions
struct ACharacter_Merchant_Base_C_RemovePreviousVendorOptions_Params
{
};

// Function Character_Merchant_Base.Character_Merchant_Base_C.ExecuteUbergraph_Character_Merchant_Base
struct ACharacter_Merchant_Base_C_ExecuteUbergraph_Character_Merchant_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
