// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_Siren_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointFlareStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhaseTranceAttackFamilyType   FamilyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhasetranceAttackAction> ActionAction                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Siren_C::AnointFlareStarted(EPhaseTranceAttackFamilyType FamilyType, TEnumAsByte<EPhasetranceAttackAction> ActionAction, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointFlareStarted");

	UAbility_AnointParent_Siren_C_AnointFlareStarted_Params params;
	params.FamilyType = FamilyType;
	params.ActionAction = ActionAction;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointCastStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhaseTranceAttackFamilyType   FamilyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhasetranceAttackAction> AttackAction                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Siren_C::AnointCastStarted(EPhaseTranceAttackFamilyType FamilyType, TEnumAsByte<EPhasetranceAttackAction> AttackAction, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointCastStarted");

	UAbility_AnointParent_Siren_C_AnointCastStarted_Params params;
	params.FamilyType = FamilyType;
	params.AttackAction = AttackAction;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointGraspEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Siren_C::AnointGraspEnded(bool Killed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointGraspEnded");

	UAbility_AnointParent_Siren_C_AnointGraspEnded_Params params;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointGraspStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPhaseTranceElementalType      Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Siren_C::AnointGraspStarted(class AActor* Enemy, EPhaseTranceElementalType Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointGraspStarted");

	UAbility_AnointParent_Siren_C_AnointGraspStarted_Params params;
	params.Enemy = Enemy;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointSlamEnded
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_Siren_C::AnointSlamEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointSlamEnded");

	UAbility_AnointParent_Siren_C_AnointSlamEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointSlamStarted
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_Siren_C::AnointSlamStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointSlamStarted");

	UAbility_AnointParent_Siren_C_AnointSlamStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_AnointParent_Siren_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.OnActivated");

	UAbility_AnointParent_Siren_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.BindSirenEvents
// (BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_Siren_C::BindSirenEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.BindSirenEvents");

	UAbility_AnointParent_Siren_C_BindSirenEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.ExecuteUbergraph_Ability_AnointParent_Siren
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Siren_C::ExecuteUbergraph_Ability_AnointParent_Siren(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.ExecuteUbergraph_Ability_AnointParent_Siren");

	UAbility_AnointParent_Siren_C_ExecuteUbergraph_Ability_AnointParent_Siren_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
