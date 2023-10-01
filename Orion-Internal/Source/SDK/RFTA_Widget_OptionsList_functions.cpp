// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_OptionsList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_OptionsList.Widget_OptionsList_C.OnVSyncApplied
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserSetting**           AppliedSetting                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettingsGunfire** UserSettings                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsList_C::OnVSyncApplied(class UUserSetting** AppliedSetting, class UGameUserSettingsGunfire** UserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.OnVSyncApplied");

	UWidget_OptionsList_C_OnVSyncApplied_Params params;
	params.AppliedSetting = AppliedSetting;
	params.UserSettings = UserSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.Get_Controller_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_OptionsList_C::Get_Controller_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.Get_Controller_Visibility_1");

	UWidget_OptionsList_C_Get_Controller_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_OptionsList.Widget_OptionsList_C.Get_Keybind_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_OptionsList_C::Get_Keybind_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.Get_Keybind_Visibility_1");

	UWidget_OptionsList_C_Get_Keybind_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_OptionsList.Widget_OptionsList_C.FocusFirst
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsList_C::FocusFirst()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.FocusFirst");

	UWidget_OptionsList_C_FocusFirst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.ResetOptions
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsList_C::ResetOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.ResetOptions");

	UWidget_OptionsList_C_ResetOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.GetCategorySettings
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameUserSettingsGunfire** GameUserSettingsGunfire        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserSetting*>    UserSettings                   (Parm, OutParm, ZeroConstructor)

void UWidget_OptionsList_C::GetCategorySettings(class UGameUserSettingsGunfire** GameUserSettingsGunfire, TArray<class UUserSetting*>* UserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.GetCategorySettings");

	UWidget_OptionsList_C_GetCategorySettings_Params params;
	params.GameUserSettingsGunfire = GameUserSettingsGunfire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserSettings != nullptr)
		*UserSettings = params.UserSettings;
}


// Function Widget_OptionsList.Widget_OptionsList_C.GetListMaxIndex
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MaxIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsList_C::GetListMaxIndex(int* MaxIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.GetListMaxIndex");

	UWidget_OptionsList_C_GetListMaxIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxIndex != nullptr)
		*MaxIndex = params.MaxIndex;
}


// Function Widget_OptionsList.Widget_OptionsList_C.CleanList
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsList_C::CleanList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.CleanList");

	UWidget_OptionsList_C_CleanList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.ToggleResolutionOptions
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_OptionsList_C::ToggleResolutionOptions(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.ToggleResolutionOptions");

	UWidget_OptionsList_C_ToggleResolutionOptions_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.OnFullscreenModeApplied
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserSetting**           AppliedSetting                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettingsGunfire** UserSettings                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsList_C::OnFullscreenModeApplied(class UUserSetting** AppliedSetting, class UGameUserSettingsGunfire** UserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.OnFullscreenModeApplied");

	UWidget_OptionsList_C_OnFullscreenModeApplied_Params params;
	params.AppliedSetting = AppliedSetting;
	params.UserSettings = UserSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.UpdateVideoSetting
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettingsGunfire** UserSettings                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsList_C::UpdateVideoSetting(class UGameUserSettingsGunfire** UserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.UpdateVideoSetting");

	UWidget_OptionsList_C_UpdateVideoSetting_Params params;
	params.UserSettings = UserSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.IsKeyAlreadyBound
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_OptionsList_C::IsKeyAlreadyBound(struct FKey* Key, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.IsKeyAlreadyBound");

	UWidget_OptionsList_C_IsKeyAlreadyBound_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_OptionsList.Widget_OptionsList_C.BuildList
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsList_C::BuildList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.BuildList");

	UWidget_OptionsList_C_BuildList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_OptionsList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.Construct");

	UWidget_OptionsList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.ResetScrollOffset
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_OptionsList_C::ResetScrollOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.ResetScrollOffset");

	UWidget_OptionsList_C_ResetScrollOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.Destruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_OptionsList_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.Destruct");

	UWidget_OptionsList_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.DeviceChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ControllerId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputDevice*                  CurrentInputDevice             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsList_C::DeviceChanged(int* ControllerId, EInputDevice* CurrentInputDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.DeviceChanged");

	UWidget_OptionsList_C_DeviceChanged_Params params;
	params.ControllerId = ControllerId;
	params.CurrentInputDevice = CurrentInputDevice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.ResetToDefault
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_OptionsList_C::ResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.ResetToDefault");

	UWidget_OptionsList_C_ResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.PopulateList
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_OptionsList_C::PopulateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.PopulateList");

	UWidget_OptionsList_C_PopulateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.Conditionally Reset PC Image Cache
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_OptionsList_C::Conditionally_Reset_PC_Image_Cache()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.Conditionally Reset PC Image Cache");

	UWidget_OptionsList_C_Conditionally_Reset_PC_Image_Cache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsList.Widget_OptionsList_C.ExecuteUbergraph_Widget_OptionsList
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsList_C::ExecuteUbergraph_Widget_OptionsList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsList.Widget_OptionsList_C.ExecuteUbergraph_Widget_OptionsList");

	UWidget_OptionsList_C_ExecuteUbergraph_Widget_OptionsList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
