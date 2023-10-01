// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagBadass_SpitSlam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagBadass_SpitSlam_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.OnBegin");

	UA_SkagBadass_SpitSlam_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.Notify_Wwise_FinalCharge
// (BlueprintCallable, BlueprintEvent)

void UA_SkagBadass_SpitSlam_C::Notify_Wwise_FinalCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.Notify_Wwise_FinalCharge");

	UA_SkagBadass_SpitSlam_C_Notify_Wwise_FinalCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.Notify_SpitAttack_Begin
// (BlueprintCallable, BlueprintEvent)

void UA_SkagBadass_SpitSlam_C::Notify_SpitAttack_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.Notify_SpitAttack_Begin");

	UA_SkagBadass_SpitSlam_C_Notify_SpitAttack_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.Notify_SpitAttack_End
// (BlueprintCallable, BlueprintEvent)

void UA_SkagBadass_SpitSlam_C::Notify_SpitAttack_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.Notify_SpitAttack_End");

	UA_SkagBadass_SpitSlam_C_Notify_SpitAttack_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.Notify_SpitAttack_Abort
// (BlueprintCallable, BlueprintEvent)

void UA_SkagBadass_SpitSlam_C::Notify_SpitAttack_Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.Notify_SpitAttack_Abort");

	UA_SkagBadass_SpitSlam_C_Notify_SpitAttack_Abort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.ExecuteUbergraph_A_SkagBadass_SpitSlam
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagBadass_SpitSlam_C::ExecuteUbergraph_A_SkagBadass_SpitSlam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.ExecuteUbergraph_A_SkagBadass_SpitSlam");

	UA_SkagBadass_SpitSlam_C_ExecuteUbergraph_A_SkagBadass_SpitSlam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
