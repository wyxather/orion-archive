// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxAbilities_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxAbilities.GbxAbility.OnUnregistered
// (Native, Event, Protected, BlueprintEvent)

void UGbxAbility::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnUnregistered");

	UGbxAbility_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAbilities.GbxAbility.OnResumed
// (Native, Event, Protected, BlueprintEvent)

void UGbxAbility::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnResumed");

	UGbxAbility_OnResumed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAbilities.GbxAbility.OnRep_Manager
// (Final, Native, Private)

void UGbxAbility::OnRep_Manager()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnRep_Manager");

	UGbxAbility_OnRep_Manager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAbilities.GbxAbility.OnRep_AbilityState
// (Final, Native, Private)

void UGbxAbility::OnRep_AbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnRep_AbilityState");

	UGbxAbility_OnRep_AbilityState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAbilities.GbxAbility.OnRegistered
// (Native, Event, Protected, BlueprintEvent)

void UGbxAbility::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnRegistered");

	UGbxAbility_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAbilities.GbxAbility.OnPaused
// (Native, Event, Protected, BlueprintEvent)

void UGbxAbility::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnPaused");

	UGbxAbility_OnPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAbilities.GbxAbility.OnForcedRefresh
// (Native, Event, Protected, BlueprintEvent)

void UGbxAbility::OnForcedRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnForcedRefresh");

	UGbxAbility_OnForcedRefresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAbilities.GbxAbility.OnDeactivated
// (Native, Event, Protected, BlueprintEvent)

void UGbxAbility::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnDeactivated");

	UGbxAbility_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAbilities.GbxAbility.OnActivated
// (Native, Event, Protected, BlueprintEvent)

void UGbxAbility::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnActivated");

	UGbxAbility_OnActivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAbilities.GbxAbility.IsReplicated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAbility::IsReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.IsReplicated");

	UGbxAbility_IsReplicated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAbilities.GbxAbility.GetAbilityOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGbxAbility::GetAbilityOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.GetAbilityOwner");

	UGbxAbility_GetAbilityOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAbilities.GbxAbility.Client_Deactivate
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void UGbxAbility::Client_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.Client_Deactivate");

	UGbxAbility_Client_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAbilities.GbxAbility.CalculateAbilityState
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UGbxAbility::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.CalculateAbilityState");

	UGbxAbility_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAbilities.GbxAbilityManagerComponent.RemoveAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AbilityClass                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAbilityManagerComponent::RemoveAbility(class UClass* AbilityClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityManagerComponent.RemoveAbility");

	UGbxAbilityManagerComponent_RemoveAbility_Params params;
	params.AbilityClass = AbilityClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAbilities.GbxAbilityManagerComponent.HasAbility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AbilityClass                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAbilityManagerComponent::HasAbility(class UClass* AbilityClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityManagerComponent.HasAbility");

	UGbxAbilityManagerComponent_HasAbility_Params params;
	params.AbilityClass = AbilityClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAbilities.GbxAbilityManagerComponent.FindAbility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AbilityClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAbility*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxAbility* UGbxAbilityManagerComponent::FindAbility(class UClass* AbilityClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityManagerComponent.FindAbility");

	UGbxAbilityManagerComponent_FindAbility_Params params;
	params.AbilityClass = AbilityClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAbilities.GbxAbilityManagerComponent.AddAbility
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAbilitySpec         Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UGbxAbility*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxAbility* UGbxAbilityManagerComponent::AddAbility(const struct FGbxAbilitySpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityManagerComponent.AddAbility");

	UGbxAbilityManagerComponent_AddAbility_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterResourcePoolDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAbilityResourceController_ResourcePoolDelegate Controller                     (Parm, OutParm, ReferenceParm)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegate Spec                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxAbilityResourceControllerBlueprintFunctionLibrary::STATIC_UnregisterResourcePoolDelegate(const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec, struct FGbxAbilityResourceController_ResourcePoolDelegate* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterResourcePoolDelegate");

	UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterResourcePoolDelegate_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterConditionalDamageModifier
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAbilityResourceController_ConditionalDamageModifier Controller                     (Parm, OutParm, ReferenceParm)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifier Spec                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxAbilityResourceControllerBlueprintFunctionLibrary::STATIC_UnregisterConditionalDamageModifier(const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec, struct FGbxAbilityResourceController_ConditionalDamageModifier* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterConditionalDamageModifier");

	UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterConditionalDamageModifier_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterAbilityDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAbilityResourceController_ScriptDelegate Controller                     (Parm, OutParm, ReferenceParm)
// struct FGbxAbilityResourceSpec_ScriptDelegate Spec                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxAbilityResourceControllerBlueprintFunctionLibrary::STATIC_UnregisterAbilityDelegate(const struct FGbxAbilityResourceSpec_ScriptDelegate& Spec, struct FGbxAbilityResourceController_ScriptDelegate* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterAbilityDelegate");

	UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterAbilityDelegate_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterResourcePoolDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAbilityResourceController_ResourcePoolDelegate Controller                     (Parm, OutParm, ReferenceParm)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegate Spec                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxAbilityResourceControllerBlueprintFunctionLibrary::STATIC_RegisterResourcePoolDelegate(const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec, struct FGbxAbilityResourceController_ResourcePoolDelegate* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterResourcePoolDelegate");

	UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterResourcePoolDelegate_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterConditionalDamageModifier
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAbilityResourceController_ConditionalDamageModifier Controller                     (Parm, OutParm, ReferenceParm)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifier Spec                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxAbilityResourceControllerBlueprintFunctionLibrary::STATIC_RegisterConditionalDamageModifier(const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec, struct FGbxAbilityResourceController_ConditionalDamageModifier* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterConditionalDamageModifier");

	UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterConditionalDamageModifier_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterAbilityDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAbilityResourceController_ScriptDelegate Controller                     (Parm, OutParm, ReferenceParm)
// struct FGbxAbilityResourceSpec_ScriptDelegate Spec                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxAbilityResourceControllerBlueprintFunctionLibrary::STATIC_RegisterAbilityDelegate(const struct FGbxAbilityResourceSpec_ScriptDelegate& Spec, struct FGbxAbilityResourceController_ScriptDelegate* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterAbilityDelegate");

	UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterAbilityDelegate_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
