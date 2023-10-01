#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Shared_EquipAxe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PsychoMale_Shared_EquipAxe.A_PsychoMale_Shared_EquipAxe_C.OnBegin
struct UA_PsychoMale_Shared_EquipAxe_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PsychoMale_Shared_EquipAxe.A_PsychoMale_Shared_EquipAxe_C.Notify_SpawnAxe
struct UA_PsychoMale_Shared_EquipAxe_C_Notify_SpawnAxe_Params
{
};

// Function A_PsychoMale_Shared_EquipAxe.A_PsychoMale_Shared_EquipAxe_C.ExecuteUbergraph_A_PsychoMale_Shared_EquipAxe
struct UA_PsychoMale_Shared_EquipAxe_C_ExecuteUbergraph_A_PsychoMale_Shared_EquipAxe_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
