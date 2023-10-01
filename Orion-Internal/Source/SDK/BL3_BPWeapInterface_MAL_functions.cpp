// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeapInterface_MAL_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeapInterface_MAL.BPWeapInterface_MAL_C.SetSecondaryElementalData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            BaseColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            HighlightColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPWeapInterface_MAL_C::SetSecondaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeapInterface_MAL.BPWeapInterface_MAL_C.SetSecondaryElementalData");

	UBPWeapInterface_MAL_C_SetSecondaryElementalData_Params params;
	params.BaseColor = BaseColor;
	params.HighlightColor = HighlightColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeapInterface_MAL.BPWeapInterface_MAL_C.SetPrimaryElementalData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            BaseColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            HighlightColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPWeapInterface_MAL_C::SetPrimaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeapInterface_MAL.BPWeapInterface_MAL_C.SetPrimaryElementalData");

	UBPWeapInterface_MAL_C_SetPrimaryElementalData_Params params;
	params.BaseColor = BaseColor;
	params.HighlightColor = HighlightColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
