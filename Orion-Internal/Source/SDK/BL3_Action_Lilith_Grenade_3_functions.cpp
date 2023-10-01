// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Lilith_Grenade_3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Lilith_Grenade_2_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.OnBegin");

	UAction_Lilith_Grenade_2_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.Notify_SpawnGrenade
// (BlueprintCallable, BlueprintEvent)

void UAction_Lilith_Grenade_2_C::Notify_SpawnGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.Notify_SpawnGrenade");

	UAction_Lilith_Grenade_2_C_Notify_SpawnGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.Notify_ThrowGrenadeLil
// (BlueprintCallable, BlueprintEvent)

void UAction_Lilith_Grenade_2_C::Notify_ThrowGrenadeLil()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.Notify_ThrowGrenadeLil");

	UAction_Lilith_Grenade_2_C_Notify_ThrowGrenadeLil_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Lilith_Grenade_2_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.OnEnd");

	UAction_Lilith_Grenade_2_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.ExecuteUbergraph_Action_Lilith_Grenade_3
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Lilith_Grenade_2_C::ExecuteUbergraph_Action_Lilith_Grenade_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.ExecuteUbergraph_Action_Lilith_Grenade_3");

	UAction_Lilith_Grenade_2_C_ExecuteUbergraph_Action_Lilith_Grenade_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
