// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_DigiClone_Death_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_DigiClone_Death.Action_DigiClone_Death_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_DigiClone_Death_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DigiClone_Death.Action_DigiClone_Death_C.OnServerBegin");

	UAction_DigiClone_Death_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DigiClone_Death.Action_DigiClone_Death_C.PlayDeathCE
// (BlueprintCallable, BlueprintEvent)

void UAction_DigiClone_Death_C::PlayDeathCE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DigiClone_Death.Action_DigiClone_Death_C.PlayDeathCE");

	UAction_DigiClone_Death_C_PlayDeathCE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DigiClone_Death.Action_DigiClone_Death_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_DigiClone_Death_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DigiClone_Death.Action_DigiClone_Death_C.OnServerEnd");

	UAction_DigiClone_Death_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DigiClone_Death.Action_DigiClone_Death_C.PlayScriptDeath
// (BlueprintCallable, BlueprintEvent)

void UAction_DigiClone_Death_C::PlayScriptDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DigiClone_Death.Action_DigiClone_Death_C.PlayScriptDeath");

	UAction_DigiClone_Death_C_PlayScriptDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DigiClone_Death.Action_DigiClone_Death_C.ExecuteUbergraph_Action_DigiClone_Death
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_DigiClone_Death_C::ExecuteUbergraph_Action_DigiClone_Death(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DigiClone_Death.Action_DigiClone_Death_C.ExecuteUbergraph_Action_DigiClone_Death");

	UAction_DigiClone_Death_C_ExecuteUbergraph_Action_DigiClone_Death_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
