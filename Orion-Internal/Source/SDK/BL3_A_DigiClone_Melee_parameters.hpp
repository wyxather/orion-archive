#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_DigiClone_Melee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnBegin
struct UA_DigiClone_Melee_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnEnd
struct UA_DigiClone_Melee_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_DigiClone_Melee.A_DigiClone_Melee_C.TurnOnOperativeBlades
struct UA_DigiClone_Melee_C_TurnOnOperativeBlades_Params
{
};

// Function A_DigiClone_Melee.A_DigiClone_Melee_C.TurnOffOperativeBlades
struct UA_DigiClone_Melee_C_TurnOffOperativeBlades_Params
{
};

// Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnBeginBringUpWeapon
struct UA_DigiClone_Melee_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_DigiClone_Melee.A_DigiClone_Melee_C.AN_CloneMelee
struct UA_DigiClone_Melee_C_AN_CloneMelee_Params
{
};

// Function A_DigiClone_Melee.A_DigiClone_Melee_C.ExecuteUbergraph_A_DigiClone_Melee
struct UA_DigiClone_Melee_C_ExecuteUbergraph_A_DigiClone_Melee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
