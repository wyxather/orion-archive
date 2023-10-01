// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GunnersNest_FromAnimation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GunnersNest_FromAnimation.GunnersNest_FromAnimation_C.Update
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCameraState**           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGunnersNest_FromAnimation_C::Update(float* DeltaTime, class UCameraState** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunnersNest_FromAnimation.GunnersNest_FromAnimation_C.Update");

	UGunnersNest_FromAnimation_C_Update_Params params;
	params.DeltaTime = DeltaTime;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunnersNest_FromAnimation.GunnersNest_FromAnimation_C.ExecuteUbergraph_GunnersNest_FromAnimation
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGunnersNest_FromAnimation_C::ExecuteUbergraph_GunnersNest_FromAnimation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunnersNest_FromAnimation.GunnersNest_FromAnimation_C.ExecuteUbergraph_GunnersNest_FromAnimation");

	UGunnersNest_FromAnimation_C_ExecuteUbergraph_GunnersNest_FromAnimation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
