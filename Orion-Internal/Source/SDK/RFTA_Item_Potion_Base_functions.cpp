// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Item_Potion_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Item_Potion_Base.Item_Potion_Base_C.ValidateUse
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AItem_Potion_Base_C::ValidateUse(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Potion_Base.Item_Potion_Base_C.ValidateUse");

	AItem_Potion_Base_C_ValidateUse_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Item_Potion_Base.Item_Potion_Base_C.DoAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItem_Potion_Base_C::DoAction(class UActionComponent** ActionComponent, class AActor** Cause, class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Potion_Base.Item_Potion_Base_C.DoAction");

	AItem_Potion_Base_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;
	params.Cause = Cause;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Potion_Base.Item_Potion_Base_C.Use
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AItem_Potion_Base_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Potion_Base.Item_Potion_Base_C.Use");

	AItem_Potion_Base_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Potion_Base.Item_Potion_Base_C.OnActivate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AItem_Potion_Base_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Potion_Base.Item_Potion_Base_C.OnActivate");

	AItem_Potion_Base_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Potion_Base.Item_Potion_Base_C.ExecuteUbergraph_Item_Potion_Base
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItem_Potion_Base_C::ExecuteUbergraph_Item_Potion_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Potion_Base.Item_Potion_Base_C.ExecuteUbergraph_Item_Potion_Base");

	AItem_Potion_Base_C_ExecuteUbergraph_Item_Potion_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
