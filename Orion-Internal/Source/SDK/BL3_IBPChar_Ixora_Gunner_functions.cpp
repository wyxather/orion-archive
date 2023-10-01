// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_Ixora_Gunner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerHologramTemplate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Template                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Ixora_Gunner_C::SetGunnerHologramTemplate(class UParticleSystem* Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerHologramTemplate");

	UIBPChar_Ixora_Gunner_C_SetGunnerHologramTemplate_Params params;
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerHologramVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Ixora_Gunner_C::SetGunnerHologramVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerHologramVisible");

	UIBPChar_Ixora_Gunner_C_SetGunnerHologramVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerDeviceVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Ixora_Gunner_C::SetGunnerDeviceVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerDeviceVisible");

	UIBPChar_Ixora_Gunner_C_SetGunnerDeviceVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
