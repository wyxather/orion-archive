#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_Rakk_Regroup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__SetRallyPoint_OnArrivedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup
struct UAIAction_Rakk_Regroup_C_BndEvt__SetRallyPoint_OnArrivedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup
struct UAIAction_Rakk_Regroup_C_BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup
struct UAIAction_Rakk_Regroup_C_BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EAIActionResult                                    Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__SetRallyPoint_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup
struct UAIAction_Rakk_Regroup_C_BndEvt__SetRallyPoint_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EAIActionResult                                    Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup
struct UAIAction_Rakk_Regroup_C_BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.ExecuteUbergraph_AIAction_Rakk_Regroup
struct UAIAction_Rakk_Regroup_C_ExecuteUbergraph_AIAction_Rakk_Regroup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
