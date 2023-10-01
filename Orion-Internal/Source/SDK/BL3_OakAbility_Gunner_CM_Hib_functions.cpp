// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_CM_Hib_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Gunner_CM_Hib_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnActivated");

	UOakAbility_Gunner_CM_Hib_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  InputChannel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_CM_Hib_C::OnClicked(unsigned char InputChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnClicked");

	UOakAbility_Gunner_CM_Hib_C_OnClicked_Params params;
	params.InputChannel = InputChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnPutDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_CM_Hib_C::OnPutDown(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnPutDown");

	UOakAbility_Gunner_CM_Hib_C_OnPutDown_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_CM_Hib_C::OnReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnReloadStarted");

	UOakAbility_Gunner_CM_Hib_C_OnReloadStarted_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnSwitchMode
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Gunner_CM_Hib_C::OnSwitchMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnSwitchMode");

	UOakAbility_Gunner_CM_Hib_C_OnSwitchMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.StartClassModBonus
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Gunner_CM_Hib_C::StartClassModBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.StartClassModBonus");

	UOakAbility_Gunner_CM_Hib_C_StartClassModBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.StopClassModBonus
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Gunner_CM_Hib_C::StopClassModBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.StopClassModBonus");

	UOakAbility_Gunner_CM_Hib_C_StopClassModBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.UpdateScalar
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Gunner_CM_Hib_C::UpdateScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.UpdateScalar");

	UOakAbility_Gunner_CM_Hib_C_UpdateScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Gunner_CM_Hib_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnDeactivated");

	UOakAbility_Gunner_CM_Hib_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.BindWeaponEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_CM_Hib_C::BindWeaponEvents(class AWeapon* NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.BindWeaponEvents");

	UOakAbility_Gunner_CM_Hib_C_BindWeaponEvents_Params params;
	params.NewWeapon = NewWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.UnbindWeaponEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 OldWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_CM_Hib_C::UnbindWeaponEvents(class AWeapon* OldWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.UnbindWeaponEvents");

	UOakAbility_Gunner_CM_Hib_C_UnbindWeaponEvents_Params params;
	params.OldWeapon = OldWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnWeaponChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeapon*                 LastWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_CM_Hib_C::OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnWeaponChanged");

	UOakAbility_Gunner_CM_Hib_C_OnWeaponChanged_Params params;
	params.NewWeapon = NewWeapon;
	params.LastWeapon = LastWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.ExecuteUbergraph_OakAbility_Gunner_CM_Hib
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_CM_Hib_C::ExecuteUbergraph_OakAbility_Gunner_CM_Hib(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.ExecuteUbergraph_OakAbility_Gunner_CM_Hib");

	UOakAbility_Gunner_CM_Hib_C_ExecuteUbergraph_OakAbility_Gunner_CM_Hib_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
