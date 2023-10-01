// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_CM_Alisma_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Gunner_CM_Alisma_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.OnActivated");

	UOakAbility_Gunner_CM_Alisma_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Gunner_CM_Alisma_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.OnDeactivated");

	UOakAbility_Gunner_CM_Alisma_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.ExitedIronBear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_CM_Alisma_C::ExitedIronBear(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.ExitedIronBear");

	UOakAbility_Gunner_CM_Alisma_C_ExitedIronBear_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.EnteredIronBear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_CM_Alisma_C::EnteredIronBear(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.EnteredIronBear");

	UOakAbility_Gunner_CM_Alisma_C_EnteredIronBear_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.ExecuteUbergraph_OakAbility_Gunner_CM_Alisma
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Gunner_CM_Alisma_C::ExecuteUbergraph_OakAbility_Gunner_CM_Alisma(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.ExecuteUbergraph_OakAbility_Gunner_CM_Alisma");

	UOakAbility_Gunner_CM_Alisma_C_ExecuteUbergraph_OakAbility_Gunner_CM_Alisma_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
