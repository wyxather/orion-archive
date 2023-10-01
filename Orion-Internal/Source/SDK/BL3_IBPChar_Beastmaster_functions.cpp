// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_Beastmaster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.TryForceSpawnPetAtLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Beastmaster_C::TryForceSpawnPetAtLocation(const struct FVector& Location, bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.TryForceSpawnPetAtLocation");

	UIBPChar_Beastmaster_C_TryForceSpawnPetAtLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.SetNewPetThreatScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Beastmaster_C::SetNewPetThreatScale(float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.SetNewPetThreatScale");

	UIBPChar_Beastmaster_C_SetNewPetThreatScale_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.PlayPetAudioCallAndResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_BeastmasterDialogAction> DialogType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Beastmaster_C::PlayPetAudioCallAndResponse(TEnumAsByte<Enum_BeastmasterDialogAction> DialogType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.PlayPetAudioCallAndResponse");

	UIBPChar_Beastmaster_C_PlayPetAudioCallAndResponse_Params params;
	params.DialogType = DialogType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.GetCurrentPet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AOakCharacter*           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Beastmaster_C::GetCurrentPet(class AOakCharacter** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.GetCurrentPet");

	UIBPChar_Beastmaster_C_GetCurrentPet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
