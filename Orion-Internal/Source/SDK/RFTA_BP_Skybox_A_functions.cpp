// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Skybox_A_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Skybox_A.BP_Skybox_A_C.UpdateAudioState
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_A_C::UpdateAudioState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.UpdateAudioState");

	ABP_Skybox_A_C_UpdateAudioState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.ResetSkyboxVFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ResetInactiveOnly              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          IsRefresh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Skybox_A_C::ResetSkyboxVFX(bool* ResetInactiveOnly, bool* IsRefresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.ResetSkyboxVFX");

	ABP_Skybox_A_C_ResetSkyboxVFX_Params params;
	params.ResetInactiveOnly = ResetInactiveOnly;
	params.IsRefresh = IsRefresh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.ToggleCharacterVFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DoActivate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          IsRefresh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Skybox_A_C::ToggleCharacterVFX(bool* DoActivate, bool* IsRefresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.ToggleCharacterVFX");

	ABP_Skybox_A_C_ToggleCharacterVFX_Params params;
	params.DoActivate = DoActivate;
	params.IsRefresh = IsRefresh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.ToggleAmbientVFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DoActivate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          IsRefresh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Skybox_A_C::ToggleAmbientVFX(bool* DoActivate, bool* IsRefresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.ToggleAmbientVFX");

	ABP_Skybox_A_C_ToggleAmbientVFX_Params params;
	params.DoActivate = DoActivate;
	params.IsRefresh = IsRefresh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.RefreshSkyBoxSettings
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_A_C::RefreshSkyBoxSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.RefreshSkyBoxSettings");

	ABP_Skybox_A_C_RefreshSkyBoxSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.OverrideTesting
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skybox_A_C::OverrideTesting(struct FName* RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.OverrideTesting");

	ABP_Skybox_A_C_OverrideTesting_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.Set Sun Light Properties
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Has_Sun_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float*                         Sun_Inclination                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Sun_Rotation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor*           Sun_Light_Color                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor*                 Sun_Bloom_Tint                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Sun_Volumetric_Scattering_Intensity (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance**      Sun_Light_Function             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Sun_Angle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Shadow_Distance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skybox_A_C::Set_Sun_Light_Properties(bool* Has_Sun_, float* Sun_Inclination, float* Sun_Rotation, struct FLinearColor* Sun_Light_Color, struct FColor* Sun_Bloom_Tint, float* Sun_Volumetric_Scattering_Intensity, class UMaterialInstance** Sun_Light_Function, float* Sun_Angle, float* Shadow_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.Set Sun Light Properties");

	ABP_Skybox_A_C_Set_Sun_Light_Properties_Params params;
	params.Has_Sun_ = Has_Sun_;
	params.Sun_Inclination = Sun_Inclination;
	params.Sun_Rotation = Sun_Rotation;
	params.Sun_Light_Color = Sun_Light_Color;
	params.Sun_Bloom_Tint = Sun_Bloom_Tint;
	params.Sun_Volumetric_Scattering_Intensity = Sun_Volumetric_Scattering_Intensity;
	params.Sun_Light_Function = Sun_Light_Function;
	params.Sun_Angle = Sun_Angle;
	params.Shadow_Distance = Shadow_Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.Get Current Data Table Row
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_A_C::Get_Current_Data_Table_Row()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.Get Current Data Table Row");

	ABP_Skybox_A_C_Get_Current_Data_Table_Row_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.Update Lighting Scheme
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_A_C::Update_Lighting_Scheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.Update Lighting Scheme");

	ABP_Skybox_A_C_Update_Lighting_Scheme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.Set Solar Angle
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Sun_Rotation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Sun_Inclination                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Sun_Angle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skybox_A_C::Set_Solar_Angle(float* Sun_Rotation, float* Sun_Inclination, float* Sun_Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.Set Solar Angle");

	ABP_Skybox_A_C_Set_Solar_Angle_Params params;
	params.Sun_Rotation = Sun_Rotation;
	params.Sun_Inclination = Sun_Inclination;
	params.Sun_Angle = Sun_Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_A_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.UserConstructionScript");

	ABP_Skybox_A_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.OnWorldReset
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ABP_Skybox_A_C::OnWorldReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.OnWorldReset");

	ABP_Skybox_A_C_OnWorldReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Skybox_A_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.ReceiveBeginPlay");

	ABP_Skybox_A_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.OnNotifyAllWorldReset
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ABP_Skybox_A_C::OnNotifyAllWorldReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.OnNotifyAllWorldReset");

	ABP_Skybox_A_C_OnNotifyAllWorldReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.OnSpectateTargetChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 SpectateTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skybox_A_C::OnSpectateTargetChanged(class AActor** SpectateTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.OnSpectateTargetChanged");

	ABP_Skybox_A_C_OnSpectateTargetChanged_Params params;
	params.SpectateTarget = SpectateTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_A.BP_Skybox_A_C.ExecuteUbergraph_BP_Skybox_A
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skybox_A_C::ExecuteUbergraph_BP_Skybox_A(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_A.BP_Skybox_A_C.ExecuteUbergraph_BP_Skybox_A");

	ABP_Skybox_A_C_ExecuteUbergraph_BP_Skybox_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
