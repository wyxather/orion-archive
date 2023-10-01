// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInterface_IronBear_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPInterface_IronBear.BPInterface_IronBear_C.IronBear_DoMeleeAttack
// (Public, BlueprintCallable, BlueprintEvent)

void UBPInterface_IronBear_C::IronBear_DoMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInterface_IronBear.BPInterface_IronBear_C.IronBear_DoMeleeAttack");

	UBPInterface_IronBear_C_IronBear_DoMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPInterface_IronBear.BPInterface_IronBear_C.ActivateNukeScreenIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EIronBearHardPointOrientation  HardpointOrientation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPInterface_IronBear_C::ActivateNukeScreenIcons(EIronBearHardPointOrientation HardpointOrientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInterface_IronBear.BPInterface_IronBear_C.ActivateNukeScreenIcons");

	UBPInterface_IronBear_C_ActivateNukeScreenIcons_Params params;
	params.HardpointOrientation = HardpointOrientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPInterface_IronBear.BPInterface_IronBear_C.SetBubbleShieldFXModOverrideEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPInterface_IronBear_C::SetBubbleShieldFXModOverrideEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInterface_IronBear.BPInterface_IronBear_C.SetBubbleShieldFXModOverrideEnabled");

	UBPInterface_IronBear_C_SetBubbleShieldFXModOverrideEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
