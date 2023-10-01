// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Vaughn_Gesture_Kick_Light_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Vaughn_Gesture_Kick_Light.Action_Vaughn_Gesture_Kick_Light_C.Notify_DoorKicked
// (BlueprintCallable, BlueprintEvent)

void UAction_Vaughn_Gesture_Kick_Light_C::Notify_DoorKicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Vaughn_Gesture_Kick_Light.Action_Vaughn_Gesture_Kick_Light_C.Notify_DoorKicked");

	UAction_Vaughn_Gesture_Kick_Light_C_Notify_DoorKicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Vaughn_Gesture_Kick_Light.Action_Vaughn_Gesture_Kick_Light_C.ExecuteUbergraph_Action_Vaughn_Gesture_Kick_Light
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Vaughn_Gesture_Kick_Light_C::ExecuteUbergraph_Action_Vaughn_Gesture_Kick_Light(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Vaughn_Gesture_Kick_Light.Action_Vaughn_Gesture_Kick_Light_C.ExecuteUbergraph_Action_Vaughn_Gesture_Kick_Light");

	UAction_Vaughn_Gesture_Kick_Light_C_ExecuteUbergraph_Action_Vaughn_Gesture_Kick_Light_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
