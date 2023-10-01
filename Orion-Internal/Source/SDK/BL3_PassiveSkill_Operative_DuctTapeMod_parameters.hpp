#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_DuctTapeMod_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672
struct UPassiveSkill_Operative_DuctTapeMod_C_GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672
struct UPassiveSkill_Operative_DuctTapeMod_C_GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.OnActivated
struct UPassiveSkill_Operative_DuctTapeMod_C_OnActivated_Params
{
};

// Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.DuctTape_OnWeaponReloadEnded
struct UPassiveSkill_Operative_DuctTapeMod_C_DuctTape_OnWeaponReloadEnded_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.DuctTape_OnWeaponUsed
struct UPassiveSkill_Operative_DuctTapeMod_C_DuctTape_OnWeaponUsed_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod
struct UPassiveSkill_Operative_DuctTapeMod_C_ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
