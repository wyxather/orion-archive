// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DA_AttributeEffectSet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DA_AttributeEffectSet.DA_AttributeEffectSet_C.ApplyAttributeEffectSet
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ModifierContext                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ModifierTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGbxAttributeModifierHandle> AppliedAttributeEffects        (Parm, OutParm, ZeroConstructor)

void UDA_AttributeEffectSet_C::ApplyAttributeEffectSet(class AActor* ModifierContext, class AActor* ModifierTarget, TArray<struct FGbxAttributeModifierHandle>* AppliedAttributeEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_AttributeEffectSet.DA_AttributeEffectSet_C.ApplyAttributeEffectSet");

	UDA_AttributeEffectSet_C_ApplyAttributeEffectSet_Params params;
	params.ModifierContext = ModifierContext;
	params.ModifierTarget = ModifierTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AppliedAttributeEffects != nullptr)
		*AppliedAttributeEffects = params.AppliedAttributeEffects;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
