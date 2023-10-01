#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_TedioreTurret_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AITree_TedioreTurret.AITree_TedioreTurret_C.BndEvt__Priority_Shoot_or_Walk.BlackboardKey_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TedioreTurret
struct UAITree_TedioreTurret_C_BndEvt__Priority_Shoot_or_Walk_BlackboardKey_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TedioreTurret_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AITree_TedioreTurret.AITree_TedioreTurret_C.BndEvt__Priority_Shoot_or_Walk_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret
struct UAITree_TedioreTurret_C_BndEvt__Priority_Shoot_or_Walk_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EAIActionResult                                    Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AITree_TedioreTurret.AITree_TedioreTurret_C.BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret
struct UAITree_TedioreTurret_C_BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EAIActionResult                                    Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AITree_TedioreTurret.AITree_TedioreTurret_C.ExecuteUbergraph_AITree_TedioreTurret
struct UAITree_TedioreTurret_C_ExecuteUbergraph_AITree_TedioreTurret_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
