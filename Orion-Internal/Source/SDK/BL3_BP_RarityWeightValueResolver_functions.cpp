// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_RarityWeightValueResolver_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RarityWeightValueResolver.BP_RarityWeightValueResolver_C.ProposedNewVersionOfGetValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_RarityWeightValueResolver_C::ProposedNewVersionOfGetValue(class UObject* Context, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RarityWeightValueResolver.BP_RarityWeightValueResolver_C.ProposedNewVersionOfGetValue");

	UBP_RarityWeightValueResolver_C_ProposedNewVersionOfGetValue_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_RarityWeightValueResolver.BP_RarityWeightValueResolver_C.GetValueForAttribute
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxAttributeData**      Attribute                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_RarityWeightValueResolver_C::GetValueForAttribute(class UGbxAttributeData** Attribute, class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RarityWeightValueResolver.BP_RarityWeightValueResolver_C.GetValueForAttribute");

	UBP_RarityWeightValueResolver_C_GetValueForAttribute_Params params;
	params.Attribute = Attribute;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
