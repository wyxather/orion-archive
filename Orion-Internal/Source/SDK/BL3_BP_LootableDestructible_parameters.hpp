#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LootableDestructible_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LootableDestructible.BP_LootableDestructible_C.UserConstructionScript
struct ABP_LootableDestructible_C_UserConstructionScript_Params
{
};

// Function BP_LootableDestructible.BP_LootableDestructible_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature_BP_LootableDestructible
struct ABP_LootableDestructible_C_BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature_BP_LootableDestructible_Params
{
	struct FVector                                     HitPoint;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_LootableDestructible.BP_LootableDestructible_C.ExecuteUbergraph_BP_LootableDestructible
struct ABP_LootableDestructible_C_ExecuteUbergraph_BP_LootableDestructible_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
