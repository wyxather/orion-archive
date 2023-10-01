#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPEventHub_Operative_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeSetDroneManualTarget__DelegateSignature
struct UBPEventHub_Operative_C_SkillEvent_OperativeSetDroneManualTarget__DelegateSignature_Params
{
	class AActor*                                      NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeUsedBarrier__DelegateSignature
struct UBPEventHub_Operative_C_SkillEvent_OperativeUsedBarrier__DelegateSignature_Params
{
	bool                                               PickedUp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeSwappedPlaces__DelegateSignature
struct UBPEventHub_Operative_C_SkillEvent_OperativeSwappedPlaces__DelegateSignature_Params
{
};

// Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeActionSkillEnded__DelegateSignature
struct UBPEventHub_Operative_C_SkillEvent_OperativeActionSkillEnded__DelegateSignature_Params
{
	TEnumAsByte<EOperativeGadgets>                     ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeGadgetModActivated__DelegateSignature
struct UBPEventHub_Operative_C_SkillEvent_OperativeGadgetModActivated__DelegateSignature_Params
{
	TEnumAsByte<EOperativeGadgetAugments>              ActionSkillMod;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeActionSkillActivated__DelegateSignature
struct UBPEventHub_Operative_C_SkillEvent_OperativeActionSkillActivated__DelegateSignature_Params
{
	TEnumAsByte<EOperativeGadgets>                     ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Operative.BPEventHub_Operative_C.OnSeeingRedActivated__DelegateSignature
struct UBPEventHub_Operative_C_OnSeeingRedActivated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
