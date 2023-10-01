// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPHeatComponent_CoV_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPHeatComponent_CoV_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.ReceiveBeginPlay");

	UBPHeatComponent_CoV_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.OnStartOverheat
// (Event, Protected, BlueprintEvent)

void UBPHeatComponent_CoV_C::OnStartOverheat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.OnStartOverheat");

	UBPHeatComponent_CoV_C_OnStartOverheat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.ExecuteUbergraph_BPHeatComponent_CoV
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPHeatComponent_CoV_C::ExecuteUbergraph_BPHeatComponent_CoV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.ExecuteUbergraph_BPHeatComponent_CoV");

	UBPHeatComponent_CoV_C_ExecuteUbergraph_BPHeatComponent_CoV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
