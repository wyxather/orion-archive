#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_TrashPile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C.UserConstructionScript
struct ABPIO_Lootable_TrashPile_C_UserConstructionScript_Params
{
};

// Function BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C.ReceiveBeginPlay
struct ABPIO_Lootable_TrashPile_C_ReceiveBeginPlay_Params
{
};

// Function BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C.Pile Opened
struct ABPIO_Lootable_TrashPile_C_Pile_Opened_Params
{
	class ALootableObject*                             LootableObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C.ExecuteUbergraph_BPIO_Lootable_TrashPile
struct ABPIO_Lootable_TrashPile_C_ExecuteUbergraph_BPIO_Lootable_TrashPile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
