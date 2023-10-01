// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoints_BearFist_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.InnerSetHandVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponType_Hardpoints_BearFist_Projectile_C::InnerSetHandVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.InnerSetHandVisible");

	AWeaponType_Hardpoints_BearFist_Projectile_C_InnerSetHandVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponType_Hardpoints_BearFist_Projectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.UserConstructionScript");

	AWeaponType_Hardpoints_BearFist_Projectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.OnAnimEnd_7F5D255649D94023774957950F0FEBE1
// (BlueprintCallable, BlueprintEvent)

void AWeaponType_Hardpoints_BearFist_Projectile_C::OnAnimEnd_7F5D255649D94023774957950F0FEBE1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.OnAnimEnd_7F5D255649D94023774957950F0FEBE1");

	AWeaponType_Hardpoints_BearFist_Projectile_C_OnAnimEnd_7F5D255649D94023774957950F0FEBE1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.OnEnd_7F5D255649D94023774957950F0FEBE1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponType_Hardpoints_BearFist_Projectile_C::OnEnd_7F5D255649D94023774957950F0FEBE1(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.OnEnd_7F5D255649D94023774957950F0FEBE1");

	AWeaponType_Hardpoints_BearFist_Projectile_C_OnEnd_7F5D255649D94023774957950F0FEBE1_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.K2_Initialize
// (Event, Protected, BlueprintEvent)

void AWeaponType_Hardpoints_BearFist_Projectile_C::K2_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.K2_Initialize");

	AWeaponType_Hardpoints_BearFist_Projectile_C_K2_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_1_WeaponReloadEndedEvent__DelegateSignature_WeaponType_Hardpoints_BearFist_Projectile
// (BlueprintEvent)
// Parameters:
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponType_Hardpoints_BearFist_Projectile_C::BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_1_WeaponReloadEndedEvent__DelegateSignature_WeaponType_Hardpoints_BearFist_Projectile(bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_1_WeaponReloadEndedEvent__DelegateSignature_WeaponType_Hardpoints_BearFist_Projectile");

	AWeaponType_Hardpoints_BearFist_Projectile_C_BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_1_WeaponReloadEndedEvent__DelegateSignature_WeaponType_Hardpoints_BearFist_Projectile_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.SetHandVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponType_Hardpoints_BearFist_Projectile_C::SetHandVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.SetHandVisible");

	AWeaponType_Hardpoints_BearFist_Projectile_C_SetHandVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.NotifyPlayerLeaving
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponType_Hardpoints_BearFist_Projectile_C::NotifyPlayerLeaving()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.NotifyPlayerLeaving");

	AWeaponType_Hardpoints_BearFist_Projectile_C_NotifyPlayerLeaving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Projectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponType_Hardpoints_BearFist_Projectile_C::ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Projectile");

	AWeaponType_Hardpoints_BearFist_Projectile_C_ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
