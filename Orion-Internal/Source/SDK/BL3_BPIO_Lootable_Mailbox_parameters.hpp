#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_Mailbox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C.UserConstructionScript
struct ABPIO_Lootable_Mailbox_C_UserConstructionScript_Params
{
};

// Function BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPIO_Lootable_Mailbox
struct ABPIO_Lootable_Mailbox_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPIO_Lootable_Mailbox_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_Mailbox
struct ABPIO_Lootable_Mailbox_C_BndEvt__UsableComponent_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_Mailbox_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C.ExecuteUbergraph_BPIO_Lootable_Mailbox
struct ABPIO_Lootable_Mailbox_C_ExecuteUbergraph_BPIO_Lootable_Mailbox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
