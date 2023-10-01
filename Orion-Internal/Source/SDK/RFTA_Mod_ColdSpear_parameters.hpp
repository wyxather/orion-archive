#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_ColdSpear_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_ColdSpear.Mod_ColdSpear_C.GetFireDirection
struct AMod_ColdSpear_C_GetFireDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.OnRep_IcicleOn
struct AMod_ColdSpear_C_OnRep_IcicleOn_Params
{
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.GetExplosionDamage
struct AMod_ColdSpear_C_GetExplosionDamage_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.GetImpactDamage
struct AMod_ColdSpear_C_GetImpactDamage_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.ModifyDamage
struct AMod_ColdSpear_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.DoAction
struct AMod_ColdSpear_C_DoAction_Params
{
	class UActionComponent**                           ActionComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActionID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.ModifyInspectInfo
struct AMod_ColdSpear_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.OnBeginUse
struct AMod_ColdSpear_C_OnBeginUse_Params
{
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.OnEndUse
struct AMod_ColdSpear_C_OnEndUse_Params
{
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.OnPreviewStart
struct AMod_ColdSpear_C_OnPreviewStart_Params
{
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.OnServer_End
struct AMod_ColdSpear_C_OnServer_End_Params
{
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.OnServer_TurnOff
struct AMod_ColdSpear_C_OnServer_TurnOff_Params
{
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.OnPreviewEnd
struct AMod_ColdSpear_C_OnPreviewEnd_Params
{
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.ReceiveBeginPlay
struct AMod_ColdSpear_C_ReceiveBeginPlay_Params
{
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.OnActivate
struct AMod_ColdSpear_C_OnActivate_Params
{
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.Client_GatherInfo
struct AMod_ColdSpear_C_Client_GatherInfo_Params
{
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.Server_DoActionWithInfo
struct AMod_ColdSpear_C_Server_DoActionWithInfo_Params
{
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator*                                   Rot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_ColdSpear.Mod_ColdSpear_C.ExecuteUbergraph_Mod_ColdSpear
struct AMod_ColdSpear_C_ExecuteUbergraph_Mod_ColdSpear_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
