// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_VarkidBadass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidBadass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.UserConstructionScript");

	ABPChar_VarkidBadass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.GbxAsyncRequest_Spawned_FD10B572457A9F4AC94097AE1D785AE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidBadass_C::GbxAsyncRequest_Spawned_FD10B572457A9F4AC94097AE1D785AE4(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.GbxAsyncRequest_Spawned_FD10B572457A9F4AC94097AE1D785AE4");

	ABPChar_VarkidBadass_C_GbxAsyncRequest_Spawned_FD10B572457A9F4AC94097AE1D785AE4_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.Varkid_EnableRibbon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidBadass_C::Varkid_EnableRibbon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.Varkid_EnableRibbon");

	ABPChar_VarkidBadass_C_Varkid_EnableRibbon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.Varkid_DisableRibbon
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidBadass_C::Varkid_DisableRibbon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.Varkid_DisableRibbon");

	ABPChar_VarkidBadass_C_Varkid_DisableRibbon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.Varkid_DestroyRibbon
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidBadass_C::Varkid_DestroyRibbon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.Varkid_DestroyRibbon");

	ABPChar_VarkidBadass_C_Varkid_DestroyRibbon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_VarkidBadass_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.ReceiveBeginPlay");

	ABPChar_VarkidBadass_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_VarkidBadass
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidBadass_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_VarkidBadass(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_VarkidBadass");

	ABPChar_VarkidBadass_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_VarkidBadass_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.ExecuteUbergraph_BPChar_VarkidBadass
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidBadass_C::ExecuteUbergraph_BPChar_VarkidBadass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidBadass.BPChar_VarkidBadass_C.ExecuteUbergraph_BPChar_VarkidBadass");

	ABPChar_VarkidBadass_C_ExecuteUbergraph_BPChar_VarkidBadass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
