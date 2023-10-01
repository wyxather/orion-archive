// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_Melee_R_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PetLoader_Melee_R.Action_PetLoader_Melee_R_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_Melee_R_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Melee_R.Action_PetLoader_Melee_R_C.OnBegin");

	UAction_PetLoader_Melee_R_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_Melee_R.Action_PetLoader_Melee_R_C.Notify_Melee
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_Melee_R_C::Notify_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Melee_R.Action_PetLoader_Melee_R_C.Notify_Melee");

	UAction_PetLoader_Melee_R_C_Notify_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_Melee_R.Action_PetLoader_Melee_R_C.ExecuteUbergraph_Action_PetLoader_Melee_R
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_Melee_R_C::ExecuteUbergraph_Action_PetLoader_Melee_R(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Melee_R.Action_PetLoader_Melee_R_C.ExecuteUbergraph_Action_PetLoader_Melee_R");

	UAction_PetLoader_Melee_R_C_ExecuteUbergraph_Action_PetLoader_Melee_R_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
