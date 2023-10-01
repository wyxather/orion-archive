#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_TinkLoot_Vault_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ANav_TinkLoot_Vault.ANav_TinkLoot_Vault_C.OnBegin
struct UANav_TinkLoot_Vault_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ANav_TinkLoot_Vault.ANav_TinkLoot_Vault_C.OnEnd
struct UANav_TinkLoot_Vault_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ANav_TinkLoot_Vault.ANav_TinkLoot_Vault_C.ExecuteUbergraph_ANav_TinkLoot_Vault
struct UANav_TinkLoot_Vault_C_ExecuteUbergraph_ANav_TinkLoot_Vault_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
