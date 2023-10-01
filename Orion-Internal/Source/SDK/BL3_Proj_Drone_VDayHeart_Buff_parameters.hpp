#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Drone_VDayHeart_Buff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.TryBuffFeedbackLightProjectile
struct AProj_Drone_VDayHeart_Buff_C_TryBuffFeedbackLightProjectile_Params
{
};

// Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.UserConstructionScript
struct AProj_Drone_VDayHeart_Buff_C_UserConstructionScript_Params
{
};

// Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire
struct AProj_Drone_VDayHeart_Buff_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Buff
struct AProj_Drone_VDayHeart_Buff_C_ExecuteUbergraph_Proj_Drone_VDayHeart_Buff_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
