#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_GunEquip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PetJabbermon_GunEquip.A_PetJabbermon_GunEquip_C.Notify_Equip
struct UA_PetJabbermon_GunEquip_C_Notify_Equip_Params
{
};

// Function A_PetJabbermon_GunEquip.A_PetJabbermon_GunEquip_C.OnServerEnd
struct UA_PetJabbermon_GunEquip_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetJabbermon_GunEquip.A_PetJabbermon_GunEquip_C.ExecuteUbergraph_A_PetJabbermon_GunEquip
struct UA_PetJabbermon_GunEquip_C_ExecuteUbergraph_A_PetJabbermon_GunEquip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
