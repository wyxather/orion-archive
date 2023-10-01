// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeapInterface_ATL_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeapInterface_ATL.BPWeapInterface_ATL_C.SetEmissiveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            BaseColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            HighlightColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            MarkerBaseColor                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            MarkerHighlightColor           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            HomingOverrideBase             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            NewParamHomingOverrideHighlight (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPWeapInterface_ATL_C::SetEmissiveData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& MarkerBaseColor, const struct FLinearColor& MarkerHighlightColor, const struct FLinearColor& HomingOverrideBase, const struct FLinearColor& NewParamHomingOverrideHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeapInterface_ATL.BPWeapInterface_ATL_C.SetEmissiveData");

	UBPWeapInterface_ATL_C_SetEmissiveData_Params params;
	params.BaseColor = BaseColor;
	params.HighlightColor = HighlightColor;
	params.MarkerBaseColor = MarkerBaseColor;
	params.MarkerHighlightColor = MarkerHighlightColor;
	params.HomingOverrideBase = HomingOverrideBase;
	params.NewParamHomingOverrideHighlight = NewParamHomingOverrideHighlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
