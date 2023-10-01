#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Attack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_AOE_Attack.Action_AOE_Attack_C.GetFilterActor
struct UAction_AOE_Attack_C_GetFilterActor_Params
{
	class AActor*                                      FilterActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Attack.Action_AOE_Attack_C.PreprocessAOE
struct UAction_AOE_Attack_C_PreprocessAOE_Params
{
	int*                                               NumHits;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Attack.Action_AOE_Attack_C.DoSecondaryEffect
struct UAction_AOE_Attack_C_DoSecondaryEffect_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Falloff;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDamageInfo*                                DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function Action_AOE_Attack.Action_AOE_Attack_C.GetDamage
struct UAction_AOE_Attack_C_GetDamage_Params
{
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Attack.Action_AOE_Attack_C.IsValidTarget
struct UAction_AOE_Attack_C_IsValidTarget_Params
{
	class AActor**                                     _Target;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_AOE_Attack.Action_AOE_Attack_C.PostDamage
struct UAction_AOE_Attack_C_PostDamage_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Falloff;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Attack.Action_AOE_Attack_C.Get Impact Point
struct UAction_AOE_Attack_C_Get_Impact_Point_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Action_AOE_Attack.Action_AOE_Attack_C.Do Damage Falloff
struct UAction_AOE_Attack_C_Do_Damage_Falloff_Params
{
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Attack.Action_AOE_Attack_C.GetImpactDirection
struct UAction_AOE_Attack_C_GetImpactDirection_Params
{
	struct FVector*                                    Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Attack.Action_AOE_Attack_C.Get Socket Location
struct UAction_AOE_Attack_C_Get_Socket_Location_Params
{
	struct FName*                                      InSocketName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Attack.Action_AOE_Attack_C.OnActionStart
struct UAction_AOE_Attack_C_OnActionStart_Params
{
};

// Function Action_AOE_Attack.Action_AOE_Attack_C.ExecuteUbergraph_Action_AOE_Attack
struct UAction_AOE_Attack_C_ExecuteUbergraph_Action_AOE_Attack_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
