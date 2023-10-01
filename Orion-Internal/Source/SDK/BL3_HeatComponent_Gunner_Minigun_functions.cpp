// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HeatComponent_Gunner_Minigun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UHeatComponent_Gunner_Minigun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.ReceiveBeginPlay");

	UHeatComponent_Gunner_Minigun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.OnStopOverheat
// (Event, Protected, BlueprintEvent)

void UHeatComponent_Gunner_Minigun_C::OnStopOverheat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.OnStopOverheat");

	UHeatComponent_Gunner_Minigun_C_OnStopOverheat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.OnStartOverheat
// (Event, Protected, BlueprintEvent)

void UHeatComponent_Gunner_Minigun_C::OnStartOverheat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.OnStartOverheat");

	UHeatComponent_Gunner_Minigun_C_OnStartOverheat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.ExecuteUbergraph_HeatComponent_Gunner_Minigun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeatComponent_Gunner_Minigun_C::ExecuteUbergraph_HeatComponent_Gunner_Minigun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.ExecuteUbergraph_HeatComponent_Gunner_Minigun");

	UHeatComponent_Gunner_Minigun_C_ExecuteUbergraph_HeatComponent_Gunner_Minigun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
