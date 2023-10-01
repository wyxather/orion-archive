// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetPetLoader_Melee_L_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PetPetLoader_Melee_L.Action_PetPetLoader_Melee_L_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetPetLoader_Melee_L_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetPetLoader_Melee_L.Action_PetPetLoader_Melee_L_C.OnBegin");

	UAction_PetPetLoader_Melee_L_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetPetLoader_Melee_L.Action_PetPetLoader_Melee_L_C.Notify_Melee
// (BlueprintCallable, BlueprintEvent)

void UAction_PetPetLoader_Melee_L_C::Notify_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetPetLoader_Melee_L.Action_PetPetLoader_Melee_L_C.Notify_Melee");

	UAction_PetPetLoader_Melee_L_C_Notify_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetPetLoader_Melee_L.Action_PetPetLoader_Melee_L_C.ExecuteUbergraph_Action_PetPetLoader_Melee_L
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetPetLoader_Melee_L_C::ExecuteUbergraph_Action_PetPetLoader_Melee_L(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetPetLoader_Melee_L.Action_PetPetLoader_Melee_L_C.ExecuteUbergraph_Action_PetPetLoader_Melee_L");

	UAction_PetPetLoader_Melee_L_C_ExecuteUbergraph_Action_PetPetLoader_Melee_L_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
