// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPPetEnrageRift_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPPetEnrageRift.BPPetEnrageRift_C.OnRep_Mod3Kills
// (BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_C::OnRep_Mod3Kills()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.OnRep_Mod3Kills");

	ABPPetEnrageRift_C_OnRep_Mod3Kills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.RemoveMod3
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_C::RemoveMod3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.RemoveMod3");

	ABPPetEnrageRift_C_RemoveMod3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.OnCausedDeath
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (BlueprintVisible, Parm, OutParm, ReferenceParm)

void ABPPetEnrageRift_C::OnCausedDeath(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.OnCausedDeath");

	ABPPetEnrageRift_C_OnCausedDeath_Params params;
	params.DamageReceiver = DamageReceiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility_HulkOut* ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_C::TrySetupMod3(class UOakActionAbility_HulkOut* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod3");

	ABPPetEnrageRift_C_TrySetupMod3_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.RemoveMod2
// (Public, BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_C::RemoveMod2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.RemoveMod2");

	ABPPetEnrageRift_C_RemoveMod2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility_HulkOut* ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_C::TrySetupMod2(class UOakActionAbility_HulkOut* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod2");

	ABPPetEnrageRift_C_TrySetupMod2_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility_HulkOut* ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_C::TrySetupMod1(class UOakActionAbility_HulkOut* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod1");

	ABPPetEnrageRift_C_TrySetupMod1_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.SetupPlayerMods
// (Public, BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_C::SetupPlayerMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.SetupPlayerMods");

	ABPPetEnrageRift_C_SetupPlayerMods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.CreateActionRegisters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FGbxActionRegister> res                            (Parm, OutParm, ZeroConstructor)

void ABPPetEnrageRift_C::CreateActionRegisters(TArray<struct FGbxActionRegister>* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.CreateActionRegisters");

	ABPPetEnrageRift_C_CreateActionRegisters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.SetPetResourceLocks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLocked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_C::SetPetResourceLocks(bool bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.SetPetResourceLocks");

	ABPPetEnrageRift_C_SetPetResourceLocks_Params params;
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.PreparePetPostTeleport
// (Public, BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_C::PreparePetPostTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.PreparePetPostTeleport");

	ABPPetEnrageRift_C_PreparePetPostTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.Cleanup");

	ABPPetEnrageRift_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.PreparePetPreTeleport
// (Public, BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_C::PreparePetPreTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.PreparePetPreTeleport");

	ABPPetEnrageRift_C_PreparePetPreTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.CauseDamageToPet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_C::CauseDamageToPet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.CauseDamageToPet");

	ABPPetEnrageRift_C_CauseDamageToPet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.TeleportPetToCurrentLocation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPPetEnrageRift_C::TeleportPetToCurrentLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.TeleportPetToCurrentLocation");

	ABPPetEnrageRift_C_TeleportPetToCurrentLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.UserConstructionScript");

	ABPPetEnrageRift_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.OnPetResurrected
// (Event, Protected, BlueprintEvent)

void ABPPetEnrageRift_C::OnPetResurrected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.OnPetResurrected");

	ABPPetEnrageRift_C_OnPetResurrected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.ReceiveEndPlay");

	ABPPetEnrageRift_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.NotifyPetTeleported
// (BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_C::NotifyPetTeleported()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.NotifyPetTeleported");

	ABPPetEnrageRift_C_NotifyPetTeleported_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.OnShutdownRequested
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bForced                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_C::OnShutdownRequested(bool* bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.OnShutdownRequested");

	ABPPetEnrageRift_C_OnShutdownRequested_Params params;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift.BPPetEnrageRift_C.ExecuteUbergraph_BPPetEnrageRift
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_C::ExecuteUbergraph_BPPetEnrageRift(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.ExecuteUbergraph_BPPetEnrageRift");

	ABPPetEnrageRift_C_ExecuteUbergraph_BPPetEnrageRift_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
