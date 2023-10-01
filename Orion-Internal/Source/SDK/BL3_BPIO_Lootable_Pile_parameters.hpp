#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_Pile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.UserConstructionScript
struct ABPIO_Lootable_Pile_C_UserConstructionScript_Params
{
};

// Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_BonePile
struct ABPIO_Lootable_Pile_C_BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_BonePile_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.OnLootableTakeDamage
struct ABPIO_Lootable_Pile_C_OnLootableTakeDamage_Params
{
	struct FLootableObjectDamageEventDetails*          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.OnEnabling
struct ABPIO_Lootable_Pile_C_OnEnabling_Params
{
};

// Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.ExecuteUbergraph_BPIO_Lootable_Pile
struct ABPIO_Lootable_Pile_C_ExecuteUbergraph_BPIO_Lootable_Pile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.On_Damaged__DelegateSignature
struct ABPIO_Lootable_Pile_C_On_Damaged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
