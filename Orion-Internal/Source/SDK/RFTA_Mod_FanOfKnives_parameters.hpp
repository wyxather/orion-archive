#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_FanOfKnives_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.AttachKnives
struct AMod_FanOfKnives_C_AttachKnives_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetCurrentTargets
struct AMod_FanOfKnives_C_GetCurrentTargets_Params
{
	bool*                                              AllowCached;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                              Targets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ShowReticule
struct AMod_FanOfKnives_C_ShowReticule_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetFireDirection
struct AMod_FanOfKnives_C_GetFireDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnRep_KnifeOn
struct AMod_FanOfKnives_C_OnRep_KnifeOn_Params
{
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetDotDamage
struct AMod_FanOfKnives_C_GetDotDamage_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ModifyDamage
struct AMod_FanOfKnives_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.DoAction
struct AMod_FanOfKnives_C_DoAction_Params
{
	class UActionComponent**                           ActionComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActionID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ModifyInspectInfo
struct AMod_FanOfKnives_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ReceiveTick
struct AMod_FanOfKnives_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnServer_TurnOff
struct AMod_FanOfKnives_C_OnServer_TurnOff_Params
{
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnServer_End
struct AMod_FanOfKnives_C_OnServer_End_Params
{
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnPreviewStart
struct AMod_FanOfKnives_C_OnPreviewStart_Params
{
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnEndUse
struct AMod_FanOfKnives_C_OnEndUse_Params
{
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnBeginUse
struct AMod_FanOfKnives_C_OnBeginUse_Params
{
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnPreviewEnd
struct AMod_FanOfKnives_C_OnPreviewEnd_Params
{
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ReceiveBeginPlay
struct AMod_FanOfKnives_C_ReceiveBeginPlay_Params
{
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnActivate
struct AMod_FanOfKnives_C_OnActivate_Params
{
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ClientDoAction
struct AMod_FanOfKnives_C_ClientDoAction_Params
{
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ServerDoAction
struct AMod_FanOfKnives_C_ServerDoAction_Params
{
	struct FVector*                                    ReticuleLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ToggleKnifeState
struct AMod_FanOfKnives_C_ToggleKnifeState_Params
{
	bool*                                              SetKnifeOn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ExecuteUbergraph_Mod_FanOfKnives
struct AMod_FanOfKnives_C_ExecuteUbergraph_Mod_FanOfKnives_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
