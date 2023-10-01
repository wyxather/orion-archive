// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IWeaponType_Hardpoints_Bearfist_Jackhammer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IWeaponType_Hardpoints_Bearfist_Jackhammer.IWeaponType_Hardpoints_Bearfist_Jackhammer_C.SetHandVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIWeaponType_Hardpoints_Bearfist_Jackhammer_C::SetHandVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function IWeaponType_Hardpoints_Bearfist_Jackhammer.IWeaponType_Hardpoints_Bearfist_Jackhammer_C.SetHandVisible");

	UIWeaponType_Hardpoints_Bearfist_Jackhammer_C_SetHandVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
