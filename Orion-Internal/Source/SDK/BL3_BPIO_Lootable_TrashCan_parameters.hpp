#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_TrashCan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.UserConstructionScript
struct ABPIO_Lootable_TrashCan_C_UserConstructionScript_Params
{
};

// Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.OnEnabling
struct ABPIO_Lootable_TrashCan_C_OnEnabling_Params
{
};

// Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.BndEvt__Mesh_Chest_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_BPIO_Lootable_TrashCan
struct ABPIO_Lootable_TrashCan_C_BndEvt__Mesh_Chest_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_BPIO_Lootable_TrashCan_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.CE_CheckToSeeIfLidDisappears
struct ABPIO_Lootable_TrashCan_C_CE_CheckToSeeIfLidDisappears_Params
{
};

// Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.ExecuteUbergraph_BPIO_Lootable_TrashCan
struct ABPIO_Lootable_TrashCan_C_ExecuteUbergraph_BPIO_Lootable_TrashCan_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
