// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_WeaponMelee_Base_Success_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_WeaponMelee_Base_Success_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.OnBegin");

	UAction_WeaponMelee_Base_Success_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_WeaponMelee_Base_Success_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.OnEnd");

	UAction_WeaponMelee_Base_Success_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.CameraPush
// (BlueprintCallable, BlueprintEvent)

void UAction_WeaponMelee_Base_Success_C::CameraPush()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.CameraPush");

	UAction_WeaponMelee_Base_Success_C_CameraPush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_WeaponMelee_Base_Success_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.OnBeginBringUpWeapon");

	UAction_WeaponMelee_Base_Success_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.CameraPop
// (BlueprintCallable, BlueprintEvent)

void UAction_WeaponMelee_Base_Success_C::CameraPop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.CameraPop");

	UAction_WeaponMelee_Base_Success_C_CameraPop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.ExecuteUbergraph_Action_WeaponMelee_Base_Success
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_WeaponMelee_Base_Success_C::ExecuteUbergraph_Action_WeaponMelee_Base_Success(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C.ExecuteUbergraph_Action_WeaponMelee_Base_Success");

	UAction_WeaponMelee_Base_Success_C_ExecuteUbergraph_Action_WeaponMelee_Base_Success_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
