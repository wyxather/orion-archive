#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Beastmaster_CloakAbility_On_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.GetTrackedTargetEffect
struct UBP_CE_Beastmaster_CloakAbility_On_C_GetTrackedTargetEffect_Params
{
	struct FOakActionCloak_TrackedTargetState*         TrackedTargetState;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.StopTrackedTargetCE
struct UBP_CE_Beastmaster_CloakAbility_On_C_StopTrackedTargetCE_Params
{
};

// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.ShouldRegisterWeaponFireDelegates
struct UBP_CE_Beastmaster_CloakAbility_On_C_ShouldRegisterWeaponFireDelegates_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.CleanupServer
struct UBP_CE_Beastmaster_CloakAbility_On_C_CleanupServer_Params
{
};

// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.SetupMods
struct UBP_CE_Beastmaster_CloakAbility_On_C_SetupMods_Params
{
};

// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.SetupServer
struct UBP_CE_Beastmaster_CloakAbility_On_C_SetupServer_Params
{
};

// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnServerBegin
struct UBP_CE_Beastmaster_CloakAbility_On_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnBegin
struct UBP_CE_Beastmaster_CloakAbility_On_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnServerEnd
struct UBP_CE_Beastmaster_CloakAbility_On_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnEnd
struct UBP_CE_Beastmaster_CloakAbility_On_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On
struct UBP_CE_Beastmaster_CloakAbility_On_C_ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
