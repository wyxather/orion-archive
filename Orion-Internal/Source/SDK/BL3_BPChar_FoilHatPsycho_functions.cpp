// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_FoilHatPsycho_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_FoilHatPsycho.BPChar_FoilHatPsycho_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_FoilHatPsycho_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_FoilHatPsycho.BPChar_FoilHatPsycho_C.UserConstructionScript");

	ABPChar_FoilHatPsycho_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_FoilHatPsycho.BPChar_FoilHatPsycho_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_FoilHatPsycho_C::BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_FoilHatPsycho.BPChar_FoilHatPsycho_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700");

	ABPChar_FoilHatPsycho_C_BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_FoilHatPsycho.BPChar_FoilHatPsycho_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_FoilHatPsycho
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_FoilHatPsycho_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_FoilHatPsycho(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_FoilHatPsycho.BPChar_FoilHatPsycho_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_FoilHatPsycho");

	ABPChar_FoilHatPsycho_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_FoilHatPsycho_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_FoilHatPsycho.BPChar_FoilHatPsycho_C.ExecuteUbergraph_BPChar_FoilHatPsycho
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_FoilHatPsycho_C::ExecuteUbergraph_BPChar_FoilHatPsycho(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_FoilHatPsycho.BPChar_FoilHatPsycho_C.ExecuteUbergraph_BPChar_FoilHatPsycho");

	ABPChar_FoilHatPsycho_C_ExecuteUbergraph_BPChar_FoilHatPsycho_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
