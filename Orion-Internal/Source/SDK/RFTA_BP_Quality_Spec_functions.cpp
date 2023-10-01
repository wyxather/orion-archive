// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Quality_Spec_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Quality_Spec.BP_Quality_Spec_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Quality_Spec_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Quality_Spec.BP_Quality_Spec_C.ReceiveBeginPlay");

	ABP_Quality_Spec_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Quality_Spec.BP_Quality_Spec_C.ExecuteUbergraph_BP_Quality_Spec
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Quality_Spec_C::ExecuteUbergraph_BP_Quality_Spec(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Quality_Spec.BP_Quality_Spec_C.ExecuteUbergraph_BP_Quality_Spec");

	ABP_Quality_Spec_C_ExecuteUbergraph_BP_Quality_Spec_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
