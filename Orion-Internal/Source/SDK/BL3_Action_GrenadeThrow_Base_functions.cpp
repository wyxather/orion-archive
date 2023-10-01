// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_GrenadeThrow_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_GrenadeThrow_Base.Action_GrenadeThrow_Base_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_GrenadeThrow_Base_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_GrenadeThrow_Base.Action_GrenadeThrow_Base_C.OnBegin");

	UAction_GrenadeThrow_Base_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_GrenadeThrow_Base.Action_GrenadeThrow_Base_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_GrenadeThrow_Base_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_GrenadeThrow_Base.Action_GrenadeThrow_Base_C.OnEnd");

	UAction_GrenadeThrow_Base_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_GrenadeThrow_Base.Action_GrenadeThrow_Base_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_GrenadeThrow_Base_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_GrenadeThrow_Base.Action_GrenadeThrow_Base_C.OnBeginBringUpWeapon");

	UAction_GrenadeThrow_Base_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_GrenadeThrow_Base.Action_GrenadeThrow_Base_C.ExecuteUbergraph_Action_GrenadeThrow_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_GrenadeThrow_Base_C::ExecuteUbergraph_Action_GrenadeThrow_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_GrenadeThrow_Base.Action_GrenadeThrow_Base_C.ExecuteUbergraph_Action_GrenadeThrow_Base");

	UAction_GrenadeThrow_Base_C_ExecuteUbergraph_Action_GrenadeThrow_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
