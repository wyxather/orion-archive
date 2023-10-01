// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Customizable_Create_Character_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Customizable_Create_Character_Base.Customizable_Create_Character_Base_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACustomizable_Create_Character_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Customizable_Create_Character_Base.Customizable_Create_Character_Base_C.ReceiveBeginPlay");

	ACustomizable_Create_Character_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Customizable_Create_Character_Base.Customizable_Create_Character_Base_C.OnShowHelmetApplied
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserSetting**           AppliedSetting                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettingsGunfire** UserSettings                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACustomizable_Create_Character_Base_C::OnShowHelmetApplied(class UUserSetting** AppliedSetting, class UGameUserSettingsGunfire** UserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Customizable_Create_Character_Base.Customizable_Create_Character_Base_C.OnShowHelmetApplied");

	ACustomizable_Create_Character_Base_C_OnShowHelmetApplied_Params params;
	params.AppliedSetting = AppliedSetting;
	params.UserSettings = UserSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Customizable_Create_Character_Base.Customizable_Create_Character_Base_C.SetDeceased
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsDeceased                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACustomizable_Create_Character_Base_C::SetDeceased(bool* IsDeceased)
{
	static auto fn = UObject::FindObject<UFunction>("Function Customizable_Create_Character_Base.Customizable_Create_Character_Base_C.SetDeceased");

	ACustomizable_Create_Character_Base_C_SetDeceased_Params params;
	params.IsDeceased = IsDeceased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Customizable_Create_Character_Base.Customizable_Create_Character_Base_C.ExecuteUbergraph_Customizable_Create_Character_Base
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACustomizable_Create_Character_Base_C::ExecuteUbergraph_Customizable_Create_Character_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Customizable_Create_Character_Base.Customizable_Create_Character_Base_C.ExecuteUbergraph_Customizable_Create_Character_Base");

	ACustomizable_Create_Character_Base_C_ExecuteUbergraph_Customizable_Create_Character_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
