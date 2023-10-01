// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Sound_Awareness_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Sound_Awareness.Action_Sound_Awareness_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Sound_Awareness_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Sound_Awareness.Action_Sound_Awareness_C.OnActionStart");

	UAction_Sound_Awareness_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Sound_Awareness.Action_Sound_Awareness_C.ExecuteUbergraph_Action_Sound_Awareness
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Sound_Awareness_C::ExecuteUbergraph_Action_Sound_Awareness(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Sound_Awareness.Action_Sound_Awareness_C.ExecuteUbergraph_Action_Sound_Awareness");

	UAction_Sound_Awareness_C_ExecuteUbergraph_Action_Sound_Awareness_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
