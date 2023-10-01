// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_TOD_Modifier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetColorScheme
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Scheme                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_TOD_Modifier_C::SetColorScheme(class FString* Scheme)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetColorScheme");

	ABP_TOD_Modifier_C_SetColorScheme_Params params;
	params.Scheme = Scheme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TOD_Modifier.BP_TOD_Modifier_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_TOD_Modifier_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.ReceiveBeginPlay");

	ABP_TOD_Modifier_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TOD_Modifier.BP_TOD_Modifier_C.OnRegionEnter
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ABP_TOD_Modifier_C::OnRegionEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.OnRegionEnter");

	ABP_TOD_Modifier_C_OnRegionEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TOD_Modifier.BP_TOD_Modifier_C.Update
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_TOD_Modifier_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.Update");

	ABP_TOD_Modifier_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetLabSky
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_TOD_Modifier_C::SetLabSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetLabSky");

	ABP_TOD_Modifier_C_SetLabSky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetLabSky_MC
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_TOD_Modifier_C::SetLabSky_MC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.SetLabSky_MC");

	ABP_TOD_Modifier_C_SetLabSky_MC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TOD_Modifier.BP_TOD_Modifier_C.ExecuteUbergraph_BP_TOD_Modifier
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TOD_Modifier_C::ExecuteUbergraph_BP_TOD_Modifier(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TOD_Modifier.BP_TOD_Modifier_C.ExecuteUbergraph_BP_TOD_Modifier");

	ABP_TOD_Modifier_C_ExecuteUbergraph_BP_TOD_Modifier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
