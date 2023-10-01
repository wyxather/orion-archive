// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAugAtt_Beskar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C.K2_OnShieldEquipped
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOakCharacter**          Equipper                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UShieldAugAtt_Beskar_C::K2_OnShieldEquipped(class AShield** Shield, class AOakCharacter** Equipper, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C.K2_OnShieldEquipped");

	UShieldAugAtt_Beskar_C_K2_OnShieldEquipped_Params params;
	params.Shield = Shield;
	params.Equipper = Equipper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


// Function ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C.K2_OnShieldUnequipped
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOakCharacter**          Equipper                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UShieldAugAtt_Beskar_C::K2_OnShieldUnequipped(class AShield** Shield, class AOakCharacter** Equipper, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C.K2_OnShieldUnequipped");

	UShieldAugAtt_Beskar_C_K2_OnShieldUnequipped_Params params;
	params.Shield = Shield;
	params.Equipper = Equipper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
