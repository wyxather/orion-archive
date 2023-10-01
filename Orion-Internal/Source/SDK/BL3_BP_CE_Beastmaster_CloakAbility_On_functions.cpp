// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Beastmaster_CloakAbility_On_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.GetTrackedTargetEffect
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOakActionCloak_TrackedTargetState* TrackedTargetState             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBP_CE_Beastmaster_CloakAbility_On_C::GetTrackedTargetEffect(struct FOakActionCloak_TrackedTargetState* TrackedTargetState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.GetTrackedTargetEffect");

	UBP_CE_Beastmaster_CloakAbility_On_C_GetTrackedTargetEffect_Params params;
	params.TrackedTargetState = TrackedTargetState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.StopTrackedTargetCE
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CE_Beastmaster_CloakAbility_On_C::StopTrackedTargetCE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.StopTrackedTargetCE");

	UBP_CE_Beastmaster_CloakAbility_On_C_StopTrackedTargetCE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.ShouldRegisterWeaponFireDelegates
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_CE_Beastmaster_CloakAbility_On_C::ShouldRegisterWeaponFireDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.ShouldRegisterWeaponFireDelegates");

	UBP_CE_Beastmaster_CloakAbility_On_C_ShouldRegisterWeaponFireDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.CleanupServer
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CE_Beastmaster_CloakAbility_On_C::CleanupServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.CleanupServer");

	UBP_CE_Beastmaster_CloakAbility_On_C_CleanupServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.SetupMods
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CE_Beastmaster_CloakAbility_On_C::SetupMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.SetupMods");

	UBP_CE_Beastmaster_CloakAbility_On_C_SetupMods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.SetupServer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_CE_Beastmaster_CloakAbility_On_C::SetupServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.SetupServer");

	UBP_CE_Beastmaster_CloakAbility_On_C_SetupServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Beastmaster_CloakAbility_On_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnServerBegin");

	UBP_CE_Beastmaster_CloakAbility_On_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Beastmaster_CloakAbility_On_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnBegin");

	UBP_CE_Beastmaster_CloakAbility_On_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Beastmaster_CloakAbility_On_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnServerEnd");

	UBP_CE_Beastmaster_CloakAbility_On_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Beastmaster_CloakAbility_On_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnEnd");

	UBP_CE_Beastmaster_CloakAbility_On_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Beastmaster_CloakAbility_On_C::ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On");

	UBP_CE_Beastmaster_CloakAbility_On_C_ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
