// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Outrunner_Hijack_Driver_to_Turret_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Outrunner_Hijack_Driver_to_Turret.Action_Outrunner_Hijack_Driver_to_Turret_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Outrunner_Hijack_Driver_to_Turret_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Outrunner_Hijack_Driver_to_Turret.Action_Outrunner_Hijack_Driver_to_Turret_C.OnBegin");

	UAction_Outrunner_Hijack_Driver_to_Turret_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Outrunner_Hijack_Driver_to_Turret.Action_Outrunner_Hijack_Driver_to_Turret_C.ExecuteUbergraph_Action_Outrunner_Hijack_Driver_to_Turret
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Outrunner_Hijack_Driver_to_Turret_C::ExecuteUbergraph_Action_Outrunner_Hijack_Driver_to_Turret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Outrunner_Hijack_Driver_to_Turret.Action_Outrunner_Hijack_Driver_to_Turret_C.ExecuteUbergraph_Action_Outrunner_Hijack_Driver_to_Turret");

	UAction_Outrunner_Hijack_Driver_to_Turret_C_ExecuteUbergraph_Action_Outrunner_Hijack_Driver_to_Turret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
