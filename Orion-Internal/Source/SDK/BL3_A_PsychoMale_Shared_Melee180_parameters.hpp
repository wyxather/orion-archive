#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Shared_Melee180_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PsychoMale_Shared_Melee180.A_PsychoMale_Shared_Melee180_C.OnBegin
struct UA_PsychoMale_Shared_Melee180_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PsychoMale_Shared_Melee180.A_PsychoMale_Shared_Melee180_C.OnEnd
struct UA_PsychoMale_Shared_Melee180_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PsychoMale_Shared_Melee180.A_PsychoMale_Shared_Melee180_C.Melee180Strike
struct UA_PsychoMale_Shared_Melee180_C_Melee180Strike_Params
{
};

// Function A_PsychoMale_Shared_Melee180.A_PsychoMale_Shared_Melee180_C.Melee180Strike_End
struct UA_PsychoMale_Shared_Melee180_C_Melee180Strike_End_Params
{
};

// Function A_PsychoMale_Shared_Melee180.A_PsychoMale_Shared_Melee180_C.ExecuteUbergraph_A_PsychoMale_Shared_Melee180
struct UA_PsychoMale_Shared_Melee180_C_ExecuteUbergraph_A_PsychoMale_Shared_Melee180_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
