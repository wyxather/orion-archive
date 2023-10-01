#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPPetEnrageRift_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPPetEnrageRift.BPPetEnrageRift_C.OnRep_Mod3Kills
struct ABPPetEnrageRift_C_OnRep_Mod3Kills_Params
{
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.RemoveMod3
struct ABPPetEnrageRift_C_RemoveMod3_Params
{
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.OnCausedDeath
struct ABPPetEnrageRift_C_OnCausedDeath_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod3
struct ABPPetEnrageRift_C_TrySetupMod3_Params
{
	class UOakActionAbility_HulkOut*                   ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.RemoveMod2
struct ABPPetEnrageRift_C_RemoveMod2_Params
{
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod2
struct ABPPetEnrageRift_C_TrySetupMod2_Params
{
	class UOakActionAbility_HulkOut*                   ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod1
struct ABPPetEnrageRift_C_TrySetupMod1_Params
{
	class UOakActionAbility_HulkOut*                   ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.SetupPlayerMods
struct ABPPetEnrageRift_C_SetupPlayerMods_Params
{
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.CreateActionRegisters
struct ABPPetEnrageRift_C_CreateActionRegisters_Params
{
	TArray<struct FGbxActionRegister>                  res;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.SetPetResourceLocks
struct ABPPetEnrageRift_C_SetPetResourceLocks_Params
{
	bool                                               bLocked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.PreparePetPostTeleport
struct ABPPetEnrageRift_C_PreparePetPostTeleport_Params
{
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.Cleanup
struct ABPPetEnrageRift_C_Cleanup_Params
{
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.PreparePetPreTeleport
struct ABPPetEnrageRift_C_PreparePetPreTeleport_Params
{
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.CauseDamageToPet
struct ABPPetEnrageRift_C_CauseDamageToPet_Params
{
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.TeleportPetToCurrentLocation
struct ABPPetEnrageRift_C_TeleportPetToCurrentLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.UserConstructionScript
struct ABPPetEnrageRift_C_UserConstructionScript_Params
{
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.OnPetResurrected
struct ABPPetEnrageRift_C_OnPetResurrected_Params
{
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.ReceiveEndPlay
struct ABPPetEnrageRift_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.NotifyPetTeleported
struct ABPPetEnrageRift_C_NotifyPetTeleported_Params
{
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.OnShutdownRequested
struct ABPPetEnrageRift_C_OnShutdownRequested_Params
{
	bool*                                              bForced;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPPetEnrageRift.BPPetEnrageRift_C.ExecuteUbergraph_BPPetEnrageRift
struct ABPPetEnrageRift_C_ExecuteUbergraph_BPPetEnrageRift_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
