#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_RedChest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPIO_Lootable_RedChest.BPIO_Lootable_RedChest_C.UserConstructionScript
struct ABPIO_Lootable_RedChest_C_UserConstructionScript_Params
{
};

// Function BPIO_Lootable_RedChest.BPIO_Lootable_RedChest_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_RedChest
struct ABPIO_Lootable_RedChest_C_BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_RedChest_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPIO_Lootable_RedChest.BPIO_Lootable_RedChest_C.ExecuteUbergraph_BPIO_Lootable_RedChest
struct ABPIO_Lootable_RedChest_C_ExecuteUbergraph_BPIO_Lootable_RedChest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
