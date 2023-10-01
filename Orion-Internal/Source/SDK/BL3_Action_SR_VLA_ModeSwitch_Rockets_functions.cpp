// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SR_VLA_ModeSwitch_Rockets_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_SR_VLA_ModeSwitch_Rockets.Action_SR_VLA_ModeSwitch_Rockets_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_SR_VLA_ModeSwitch_Rockets_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_SR_VLA_ModeSwitch_Rockets.Action_SR_VLA_ModeSwitch_Rockets_C.OnBegin");

	UAction_SR_VLA_ModeSwitch_Rockets_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_SR_VLA_ModeSwitch_Rockets.Action_SR_VLA_ModeSwitch_Rockets_C.ExecuteUbergraph_Action_SR_VLA_ModeSwitch_Rockets
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_SR_VLA_ModeSwitch_Rockets_C::ExecuteUbergraph_Action_SR_VLA_ModeSwitch_Rockets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_SR_VLA_ModeSwitch_Rockets.Action_SR_VLA_ModeSwitch_Rockets_C.ExecuteUbergraph_Action_SR_VLA_ModeSwitch_Rockets");

	UAction_SR_VLA_ModeSwitch_Rockets_C_ExecuteUbergraph_Action_SR_VLA_ModeSwitch_Rockets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
