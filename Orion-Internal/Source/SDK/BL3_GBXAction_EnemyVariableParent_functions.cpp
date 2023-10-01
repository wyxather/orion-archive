// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GBXAction_EnemyVariableParent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.GetLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 MyLocation                     (Parm, OutParm, IsPlainOldData)

void UGBXAction_EnemyVariableParent_C::GetLocation(struct FVector* MyLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.GetLocation");

	UGBXAction_EnemyVariableParent_C_GetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyLocation != nullptr)
		*MyLocation = params.MyLocation;
}


// Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGBXAction_EnemyVariableParent_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.OnBegin");

	UGBXAction_EnemyVariableParent_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.ExecuteUbergraph_GBXAction_EnemyVariableParent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGBXAction_EnemyVariableParent_C::ExecuteUbergraph_GBXAction_EnemyVariableParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.ExecuteUbergraph_GBXAction_EnemyVariableParent");

	UGBXAction_EnemyVariableParent_C_ExecuteUbergraph_GBXAction_EnemyVariableParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
