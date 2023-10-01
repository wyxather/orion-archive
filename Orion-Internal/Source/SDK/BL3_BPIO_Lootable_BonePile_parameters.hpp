#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_BonePile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPIO_Lootable_BonePile.BPIO_Lootable_BonePile_C.UserConstructionScript
struct ABPIO_Lootable_BonePile_C_UserConstructionScript_Params
{
};

// Function BPIO_Lootable_BonePile.BPIO_Lootable_BonePile_C.ReceiveBeginPlay
struct ABPIO_Lootable_BonePile_C_ReceiveBeginPlay_Params
{
};

// Function BPIO_Lootable_BonePile.BPIO_Lootable_BonePile_C.Pile Opened
struct ABPIO_Lootable_BonePile_C_Pile_Opened_Params
{
	class ALootableObject*                             LootableObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPIO_Lootable_BonePile.BPIO_Lootable_BonePile_C.ExecuteUbergraph_BPIO_Lootable_BonePile
struct ABPIO_Lootable_BonePile_C_ExecuteUbergraph_BPIO_Lootable_BonePile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
