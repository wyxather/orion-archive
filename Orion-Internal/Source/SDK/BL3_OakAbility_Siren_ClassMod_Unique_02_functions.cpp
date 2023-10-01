// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Unique_02_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectQuicken
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_02_C::DoEffectQuicken(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectQuicken");

	UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectQuicken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UOakAbility_Siren_ClassMod_Unique_02_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.CalculateAbilityState");

	UOakAbility_Siren_ClassMod_Unique_02_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.CheckAscendant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_02_C::CheckAscendant(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.CheckAscendant");

	UOakAbility_Siren_ClassMod_Unique_02_C_CheckAscendant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.FindNearbyEnemies
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>          Targets                        (Parm, OutParm, ZeroConstructor)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_02_C::FindNearbyEnemies(TArray<class AActor*>* Targets, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.FindNearbyEnemies");

	UOakAbility_Siren_ClassMod_Unique_02_C_FindNearbyEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
	if (res != nullptr)
		*res = params.res;
}


// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.FindNearbyPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_02_C::FindNearbyPlayer(class AActor** Player, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.FindNearbyPlayer");

	UOakAbility_Siren_ClassMod_Unique_02_C_FindNearbyPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
	if (res != nullptr)
		*res = params.res;
}


// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectStillnessofMind
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_02_C::DoEffectStillnessofMind(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectStillnessofMind");

	UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectStillnessofMind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectBrightStar
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_02_C::DoEffectBrightStar(const struct FTransform& Transform, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectBrightStar");

	UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectBrightStar_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectGlamour
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_02_C::DoEffectGlamour(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectGlamour");

	UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectGlamour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectSoulSap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SourceActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_02_C::DoEffectSoulSap(class AActor* SourceActor, float Damage, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectSoulSap");

	UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectSoulSap_Params params;
	params.SourceActor = SourceActor;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectAllure
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_02_C::DoEffectAllure(const struct FTransform& Transform, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectAllure");

	UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectAllure_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Siren_ClassMod_Unique_02_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.OnActivated");

	UOakAbility_Siren_ClassMod_Unique_02_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOakAbility_Siren_ClassMod_Unique_02_C::OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.OnCausedDeath");

	UOakAbility_Siren_ClassMod_Unique_02_C_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_02
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Unique_02_C::ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_02");

	UOakAbility_Siren_ClassMod_Unique_02_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
