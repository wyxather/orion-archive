// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TimeOfDay_Pandora_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.GetWorldPhaseLockStart
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 World_Location                 (Parm, OutParm, IsPlainOldData)

void ABP_TimeOfDay_Pandora_Base_C::GetWorldPhaseLockStart(struct FVector* World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.GetWorldPhaseLockStart");

	ABP_TimeOfDay_Pandora_Base_C_GetWorldPhaseLockStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (World_Location != nullptr)
		*World_Location = params.World_Location;
}


// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.Enable_Phase_Lock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeOfDay_Pandora_Base_C::Enable_Phase_Lock(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.Enable_Phase_Lock");

	ABP_TimeOfDay_Pandora_Base_C_Enable_Phase_Lock_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.SetMoonState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_IO_EridiumVortex> MoonState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeOfDay_Pandora_Base_C::SetMoonState(TEnumAsByte<Enum_IO_EridiumVortex> MoonState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.SetMoonState");

	ABP_TimeOfDay_Pandora_Base_C_SetMoonState_Params params;
	params.MoonState = MoonState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_Pandora_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.UserConstructionScript");

	ABP_TimeOfDay_Pandora_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.PostVortexMoon
// (BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_Pandora_Base_C::PostVortexMoon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.PostVortexMoon");

	ABP_TimeOfDay_Pandora_Base_C_PostVortexMoon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.FireHawkMoon
// (BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_Pandora_Base_C::FireHawkMoon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.FireHawkMoon");

	ABP_TimeOfDay_Pandora_Base_C_FireHawkMoon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.ExecuteUbergraph_BP_TimeOfDay_Pandora_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeOfDay_Pandora_Base_C::ExecuteUbergraph_BP_TimeOfDay_Pandora_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.ExecuteUbergraph_BP_TimeOfDay_Pandora_Base");

	ABP_TimeOfDay_Pandora_Base_C_ExecuteUbergraph_BP_TimeOfDay_Pandora_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
