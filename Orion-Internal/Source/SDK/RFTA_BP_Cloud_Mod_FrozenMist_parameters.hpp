#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Cloud_Mod_FrozenMist_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.TestDriftstone
struct ABP_Cloud_Mod_FrozenMist_C_TestDriftstone_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.StopActionOnCharacter
struct ABP_Cloud_Mod_FrozenMist_C_StopActionOnCharacter_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.DoActionToCharacter
struct ABP_Cloud_Mod_FrozenMist_C_DoActionToCharacter_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.AddFrostbiteStack
struct ABP_Cloud_Mod_FrozenMist_C_AddFrostbiteStack_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.SFX_Start
struct ABP_Cloud_Mod_FrozenMist_C_SFX_Start_Params
{
};

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.SFX_Stop
struct ABP_Cloud_Mod_FrozenMist_C_SFX_Stop_Params
{
};

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ReceiveBeginPlay
struct ABP_Cloud_Mod_FrozenMist_C_ReceiveBeginPlay_Params
{
};

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.DoAction
struct ABP_Cloud_Mod_FrozenMist_C_DoAction_Params
{
	class ACharacterGunfire**                          TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionComponent**                           ActionComp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.StopAction
struct ABP_Cloud_Mod_FrozenMist_C_StopAction_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.MulticastFadeOut
struct ABP_Cloud_Mod_FrozenMist_C_MulticastFadeOut_Params
{
};

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ReceiveTick
struct ABP_Cloud_Mod_FrozenMist_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ExecuteUbergraph_BP_Cloud_Mod_FrozenMist
struct ABP_Cloud_Mod_FrozenMist_C_ExecuteUbergraph_BP_Cloud_Mod_FrozenMist_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
