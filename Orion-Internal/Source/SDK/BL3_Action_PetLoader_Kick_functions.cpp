// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_Kick_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_Kick_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.OnBegin");

	UAction_PetLoader_Kick_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.DoDamageNow
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_Kick_C::DoDamageNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.DoDamageNow");

	UAction_PetLoader_Kick_C_DoDamageNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.ExecuteUbergraph_Action_PetLoader_Kick
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_Kick_C::ExecuteUbergraph_Action_PetLoader_Kick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.ExecuteUbergraph_Action_PetLoader_Kick");

	UAction_PetLoader_Kick_C_ExecuteUbergraph_Action_PetLoader_Kick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
