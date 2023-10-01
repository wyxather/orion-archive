#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPEventHub_Gunner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_AutoBear_Ended__DelegateSignature
struct UBPEventHub_Gunner_C_IronBear_AutoBear_Ended__DelegateSignature_Params
{
	bool                                               HasValidChargeTarget;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ChargeTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_AutoBear_Started__DelegateSignature
struct UBPEventHub_Gunner_C_IronBear_AutoBear_Started__DelegateSignature_Params
{
};

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_DakkaTurret_Emptied__DelegateSignature
struct UBPEventHub_Gunner_C_IronBear_DakkaTurret_Emptied__DelegateSignature_Params
{
	class AActor*                                      ExitingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_DakkaTurret_Entered__DelegateSignature
struct UBPEventHub_Gunner_C_IronBear_DakkaTurret_Entered__DelegateSignature_Params
{
	class AActor*                                      EnteredActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_BubbleShield_StartRecharge__DelegateSignature
struct UBPEventHub_Gunner_C_IronBear_BubbleShield_StartRecharge__DelegateSignature_Params
{
};

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_BubbleShield_Depleted__DelegateSignature
struct UBPEventHub_Gunner_C_IronBear_BubbleShield_Depleted__DelegateSignature_Params
{
};

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_GundamBear_Used__DelegateSignature
struct UBPEventHub_Gunner_C_IronBear_GundamBear_Used__DelegateSignature_Params
{
};

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_BronzeAgeRage_Start__DelegateSignature
struct UBPEventHub_Gunner_C_SkillEvent_BronzeAgeRage_Start__DelegateSignature_Params
{
};

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_BronzeAgeRage_End__DelegateSignature
struct UBPEventHub_Gunner_C_SkillEvent_BronzeAgeRage_End__DelegateSignature_Params
{
};

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_Capacitation__DelegateSignature
struct UBPEventHub_Gunner_C_SkillEvent_Capacitation__DelegateSignature_Params
{
};

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_HighVoltage__DelegateSignature
struct UBPEventHub_Gunner_C_SkillEvent_HighVoltage__DelegateSignature_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_IronScience__DelegateSignature
struct UBPEventHub_Gunner_C_SkillEvent_IronScience__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
