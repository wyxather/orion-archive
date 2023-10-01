// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_BreathOfTheDesert_Indicator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BreathOfTheDesert_Indicator.BP_BreathOfTheDesert_Indicator_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BreathOfTheDesert_Indicator_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreathOfTheDesert_Indicator.BP_BreathOfTheDesert_Indicator_C.ReceiveTick");

	ABP_BreathOfTheDesert_Indicator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreathOfTheDesert_Indicator.BP_BreathOfTheDesert_Indicator_C.ExecuteUbergraph_BP_BreathOfTheDesert_Indicator
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BreathOfTheDesert_Indicator_C::ExecuteUbergraph_BP_BreathOfTheDesert_Indicator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreathOfTheDesert_Indicator.BP_BreathOfTheDesert_Indicator_C.ExecuteUbergraph_BP_BreathOfTheDesert_Indicator");

	ABP_BreathOfTheDesert_Indicator_C_ExecuteUbergraph_BP_BreathOfTheDesert_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
