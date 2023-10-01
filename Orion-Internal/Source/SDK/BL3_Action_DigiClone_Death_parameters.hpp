#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_DigiClone_Death_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_DigiClone_Death.Action_DigiClone_Death_C.OnServerBegin
struct UAction_DigiClone_Death_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_DigiClone_Death.Action_DigiClone_Death_C.PlayDeathCE
struct UAction_DigiClone_Death_C_PlayDeathCE_Params
{
};

// Function Action_DigiClone_Death.Action_DigiClone_Death_C.OnServerEnd
struct UAction_DigiClone_Death_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_DigiClone_Death.Action_DigiClone_Death_C.PlayScriptDeath
struct UAction_DigiClone_Death_C_PlayScriptDeath_Params
{
};

// Function Action_DigiClone_Death.Action_DigiClone_Death_C.ExecuteUbergraph_Action_DigiClone_Death
struct UAction_DigiClone_Death_C_ExecuteUbergraph_Action_DigiClone_Death_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
