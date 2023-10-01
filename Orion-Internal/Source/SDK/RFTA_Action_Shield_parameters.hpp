#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Shield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Shield.Action_Shield_C.ShieldBreak
struct UAction_Shield_C_ShieldBreak_Params
{
};

// Function Action_Shield.Action_Shield_C.GetShieldMax
struct UAction_Shield_C_GetShieldMax_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Shield.Action_Shield_C.OnRep_ShieldValue
struct UAction_Shield_C_OnRep_ShieldValue_Params
{
};

// Function Action_Shield.Action_Shield_C.GetShieldPct
struct UAction_Shield_C_GetShieldPct_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Shield.Action_Shield_C.ApplyShieldDelta
struct UAction_Shield_C_ApplyShieldDelta_Params
{
	struct FDamageInfo                                 DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Action_Shield.Action_Shield_C.PlayVFX
struct UAction_Shield_C_PlayVFX_Params
{
	class UParticleSystem**                            EmitterTemplate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      AttachPointName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Shield.Action_Shield_C.DamageShieldMaterialAmount
struct UAction_Shield_C_DamageShieldMaterialAmount_Params
{
	float*                                             amt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Shield.Action_Shield_C.PlaySound
struct UAction_Shield_C_PlaySound_Params
{
	class USoundBase**                                 Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              StoreSound;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Shield.Action_Shield_C.SetShieldAmount
struct UAction_Shield_C_SetShieldAmount_Params
{
	float*                                             amt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Shield.Action_Shield_C.FilterIncomingDamage
struct UAction_Shield_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Shield.Action_Shield_C.OnActionStart
struct UAction_Shield_C_OnActionStart_Params
{
};

// Function Action_Shield.Action_Shield_C.OnActionStop
struct UAction_Shield_C_OnActionStop_Params
{
};

// Function Action_Shield.Action_Shield_C.ClientShieldHit
struct UAction_Shield_C_ClientShieldHit_Params
{
};

// Function Action_Shield.Action_Shield_C.ExecuteUbergraph_Action_Shield
struct UAction_Shield_C_ExecuteUbergraph_Action_Shield_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Shield.Action_Shield_C.OnShieldEmpty__DelegateSignature
struct UAction_Shield_C_OnShieldEmpty__DelegateSignature_Params
{
	float*                                             MinDuration;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             MaxDuration;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Shield.Action_Shield_C.OnHit__DelegateSignature
struct UAction_Shield_C_OnHit__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
