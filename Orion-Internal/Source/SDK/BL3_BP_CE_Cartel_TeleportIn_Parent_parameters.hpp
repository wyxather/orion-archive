#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Cartel_TeleportIn_Parent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.OnDeath_CartelThugCE
struct UBP_CE_Cartel_TeleportIn_Parent_C_OnDeath_CartelThugCE_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.OnServerBegin
struct UBP_CE_Cartel_TeleportIn_Parent_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Parent
struct UBP_CE_Cartel_TeleportIn_Parent_C_ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
