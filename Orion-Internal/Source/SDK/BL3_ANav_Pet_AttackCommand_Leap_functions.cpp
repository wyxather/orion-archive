// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_Pet_AttackCommand_Leap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.Notify_Landed
// (BlueprintCallable, BlueprintEvent)

void UANav_Pet_AttackCommand_Leap_C::Notify_Landed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.Notify_Landed");

	UANav_Pet_AttackCommand_Leap_C_Notify_Landed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_Pet_AttackCommand_Leap_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.OnBegin");

	UANav_Pet_AttackCommand_Leap_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.ExecuteUbergraph_ANav_Pet_AttackCommand_Leap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_Pet_AttackCommand_Leap_C::ExecuteUbergraph_ANav_Pet_AttackCommand_Leap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.ExecuteUbergraph_ANav_Pet_AttackCommand_Leap");

	UANav_Pet_AttackCommand_Leap_C_ExecuteUbergraph_ANav_Pet_AttackCommand_Leap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
