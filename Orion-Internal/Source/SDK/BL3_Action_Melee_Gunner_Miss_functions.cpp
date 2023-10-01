// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Gunner_Miss_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Melee_Gunner_Miss.Action_Melee_Gunner_Miss_C.HideMelee
// (BlueprintCallable, BlueprintEvent)

void UAction_Melee_Gunner_Miss_C::HideMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Gunner_Miss.Action_Melee_Gunner_Miss_C.HideMelee");

	UAction_Melee_Gunner_Miss_C_HideMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Gunner_Miss.Action_Melee_Gunner_Miss_C.ExecuteUbergraph_Action_Melee_Gunner_Miss
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Melee_Gunner_Miss_C::ExecuteUbergraph_Action_Melee_Gunner_Miss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Gunner_Miss.Action_Melee_Gunner_Miss_C.ExecuteUbergraph_Action_Melee_Gunner_Miss");

	UAction_Melee_Gunner_Miss_C_ExecuteUbergraph_Action_Melee_Gunner_Miss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
