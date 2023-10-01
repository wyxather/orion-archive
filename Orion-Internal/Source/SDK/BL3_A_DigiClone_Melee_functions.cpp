// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_DigiClone_Melee_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_DigiClone_Melee_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnBegin");

	UA_DigiClone_Melee_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_DigiClone_Melee_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnEnd");

	UA_DigiClone_Melee_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_DigiClone_Melee.A_DigiClone_Melee_C.TurnOnOperativeBlades
// (BlueprintCallable, BlueprintEvent)

void UA_DigiClone_Melee_C::TurnOnOperativeBlades()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.TurnOnOperativeBlades");

	UA_DigiClone_Melee_C_TurnOnOperativeBlades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_DigiClone_Melee.A_DigiClone_Melee_C.TurnOffOperativeBlades
// (BlueprintCallable, BlueprintEvent)

void UA_DigiClone_Melee_C::TurnOffOperativeBlades()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.TurnOffOperativeBlades");

	UA_DigiClone_Melee_C_TurnOffOperativeBlades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_DigiClone_Melee_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnBeginBringUpWeapon");

	UA_DigiClone_Melee_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_DigiClone_Melee.A_DigiClone_Melee_C.AN_CloneMelee
// (BlueprintCallable, BlueprintEvent)

void UA_DigiClone_Melee_C::AN_CloneMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.AN_CloneMelee");

	UA_DigiClone_Melee_C_AN_CloneMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_DigiClone_Melee.A_DigiClone_Melee_C.ExecuteUbergraph_A_DigiClone_Melee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_DigiClone_Melee_C::ExecuteUbergraph_A_DigiClone_Melee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.ExecuteUbergraph_A_DigiClone_Melee");

	UA_DigiClone_Melee_C_ExecuteUbergraph_A_DigiClone_Melee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
