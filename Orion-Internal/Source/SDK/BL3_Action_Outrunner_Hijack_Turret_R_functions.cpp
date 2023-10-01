// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Outrunner_Hijack_Turret_R_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Outrunner_Hijack_Turret_R.Action_Outrunner_Hijack_Turret_R_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Outrunner_Hijack_Turret_R_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Outrunner_Hijack_Turret_R.Action_Outrunner_Hijack_Turret_R_C.OnBegin");

	UAction_Outrunner_Hijack_Turret_R_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Outrunner_Hijack_Turret_R.Action_Outrunner_Hijack_Turret_R_C.ExecuteUbergraph_Action_Outrunner_Hijack_Turret_R
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Outrunner_Hijack_Turret_R_C::ExecuteUbergraph_Action_Outrunner_Hijack_Turret_R(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Outrunner_Hijack_Turret_R.Action_Outrunner_Hijack_Turret_R_C.ExecuteUbergraph_Action_Outrunner_Hijack_Turret_R");

	UAction_Outrunner_Hijack_Turret_R_C_ExecuteUbergraph_Action_Outrunner_Hijack_Turret_R_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
