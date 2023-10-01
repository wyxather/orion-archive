#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionDamageable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_MissionDamageable.IO_MissionDamageable_C.SetDamageableGlowValue
struct AIO_MissionDamageable_C_SetDamageableGlowValue_Params
{
	float                                              Value__0_1_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.SetMissionDamageableState
struct AIO_MissionDamageable_C_SetMissionDamageableState_Params
{
	TEnumAsByte<Enum_MissionDamageableState>           DamageableState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.UserConstructionScript
struct AIO_MissionDamageable_C_UserConstructionScript_Params
{
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.Timeline_0__FinishedFunc
struct AIO_MissionDamageable_C_Timeline_0__FinishedFunc_Params
{
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.Timeline_0__UpdateFunc
struct AIO_MissionDamageable_C_Timeline_0__UpdateFunc_Params
{
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_IO_Switch_Parent_V1_Damageable
struct AIO_MissionDamageable_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_IO_Switch_Parent_V1_Damageable_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.ReceiveBeginPlay
struct AIO_MissionDamageable_C_ReceiveBeginPlay_Params
{
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.FlashMaterialsOnHit
struct AIO_MissionDamageable_C_FlashMaterialsOnHit_Params
{
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.PlayFeedback_Destroying
struct AIO_MissionDamageable_C_PlayFeedback_Destroying_Params
{
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.PlayFeedback_Destroyed
struct AIO_MissionDamageable_C_PlayFeedback_Destroyed_Params
{
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.PlayFeedback_Damageable
struct AIO_MissionDamageable_C_PlayFeedback_Damageable_Params
{
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.PlayFeedback_Default
struct AIO_MissionDamageable_C_PlayFeedback_Default_Params
{
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_MissionDamageable_UNIX1533573730
struct AIO_MissionDamageable_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_MissionDamageable_UNIX1533573730_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.__UserState_MissionDamageableState_1
struct AIO_MissionDamageable_C___UserState_MissionDamageableState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.__UserState_MissionDamageableState_2
struct AIO_MissionDamageable_C___UserState_MissionDamageableState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.__UserState_MissionDamageableState_3
struct AIO_MissionDamageable_C___UserState_MissionDamageableState_3_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.MissionDamageableTookNonZeroDamage_Multicast
struct AIO_MissionDamageable_C_MissionDamageableTookNonZeroDamage_Multicast_Params
{
	int                                                NumberOfTimesHit;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.ExecuteUbergraph_IO_MissionDamageable
struct AIO_MissionDamageable_C_ExecuteUbergraph_IO_MissionDamageable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.MissionDamageableTookDamage__DelegateSignature
struct AIO_MissionDamageable_C_MissionDamageableTookDamage__DelegateSignature_Params
{
	int                                                NumberOfTimesHit;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.MissionDamageableIsDamageable__DelegateSignature
struct AIO_MissionDamageable_C_MissionDamageableIsDamageable__DelegateSignature_Params
{
};

// Function IO_MissionDamageable.IO_MissionDamageable_C.MissionDamageableDestroyed__DelegateSignature
struct AIO_MissionDamageable_C_MissionDamageableDestroyed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
