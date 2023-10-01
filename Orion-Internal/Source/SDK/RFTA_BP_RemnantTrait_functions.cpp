// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RemnantTrait_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RemnantTrait.BP_RemnantTrait_C.DoActionOnTarget
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantTrait_C::DoActionOnTarget(class UClass** Action, class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantTrait.BP_RemnantTrait_C.DoActionOnTarget");

	UBP_RemnantTrait_C_DoActionOnTarget_Params params;
	params.Action = Action;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantTrait.BP_RemnantTrait_C.IsTargetAggro
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RemnantTrait_C::IsTargetAggro(class AActor** Target, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantTrait.BP_RemnantTrait_C.IsTargetAggro");

	UBP_RemnantTrait_C_IsTargetAggro_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_RemnantTrait.BP_RemnantTrait_C.DoAction
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantTrait_C::DoAction(class UClass** ActionBP, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantTrait.BP_RemnantTrait_C.DoAction");

	UBP_RemnantTrait_C_DoAction_Params params;
	params.ActionBP = ActionBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}


// Function BP_RemnantTrait.BP_RemnantTrait_C.GetCharacter
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacterGunfire*       Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantTrait_C::GetCharacter(class ACharacterGunfire** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantTrait.BP_RemnantTrait_C.GetCharacter");

	UBP_RemnantTrait_C_GetCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
