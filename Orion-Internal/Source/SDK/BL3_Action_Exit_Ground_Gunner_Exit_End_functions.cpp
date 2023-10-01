// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Exit_Ground_Gunner_Exit_End_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Exit_Ground_Gunner_Exit_End.Action_Exit_Ground_Gunner_Exit_End_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Exit_Ground_Gunner_Exit_End_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Exit_Ground_Gunner_Exit_End.Action_Exit_Ground_Gunner_Exit_End_C.OnBeginBringUpWeapon");

	UAction_Exit_Ground_Gunner_Exit_End_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Exit_Ground_Gunner_Exit_End.Action_Exit_Ground_Gunner_Exit_End_C.ExecuteUbergraph_Action_Exit_Ground_Gunner_Exit_End
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Exit_Ground_Gunner_Exit_End_C::ExecuteUbergraph_Action_Exit_Ground_Gunner_Exit_End(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Exit_Ground_Gunner_Exit_End.Action_Exit_Ground_Gunner_Exit_End_C.ExecuteUbergraph_Action_Exit_Ground_Gunner_Exit_End");

	UAction_Exit_Ground_Gunner_Exit_End_C_ExecuteUbergraph_Action_Exit_Ground_Gunner_Exit_End_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
