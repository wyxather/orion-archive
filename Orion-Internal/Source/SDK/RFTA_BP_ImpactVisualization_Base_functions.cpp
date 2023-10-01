// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_ImpactVisualization_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ImpactVisualization_Base.BP_ImpactVisualization_Base_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_ImpactVisualization_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ImpactVisualization_Base.BP_ImpactVisualization_Base_C.ReceiveBeginPlay");

	ABP_ImpactVisualization_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ImpactVisualization_Base.BP_ImpactVisualization_Base_C.ExecuteUbergraph_BP_ImpactVisualization_Base
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ImpactVisualization_Base_C::ExecuteUbergraph_BP_ImpactVisualization_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ImpactVisualization_Base.BP_ImpactVisualization_Base_C.ExecuteUbergraph_BP_ImpactVisualization_Base");

	ABP_ImpactVisualization_Base_C_ExecuteUbergraph_BP_ImpactVisualization_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
