// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_InactiveCrystal_Inspect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InactiveCrystal_Inspect.BP_InactiveCrystal_Inspect_C.ValidToInspect
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_InactiveCrystal_Inspect_C::ValidToInspect(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InactiveCrystal_Inspect.BP_InactiveCrystal_Inspect_C.ValidToInspect");

	ABP_InactiveCrystal_Inspect_C_ValidToInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_InactiveCrystal_Inspect.BP_InactiveCrystal_Inspect_C.Set Crystal
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Dragon_Crystal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InactiveCrystal_Inspect_C::Set_Crystal(class AActor** Dragon_Crystal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InactiveCrystal_Inspect.BP_InactiveCrystal_Inspect_C.Set Crystal");

	ABP_InactiveCrystal_Inspect_C_Set_Crystal_Params params;
	params.Dragon_Crystal = Dragon_Crystal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InactiveCrystal_Inspect.BP_InactiveCrystal_Inspect_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InactiveCrystal_Inspect_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature(struct FName* StateName, class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InactiveCrystal_Inspect.BP_InactiveCrystal_Inspect_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature");

	ABP_InactiveCrystal_Inspect_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InactiveCrystal_Inspect.BP_InactiveCrystal_Inspect_C.ExecuteUbergraph_BP_InactiveCrystal_Inspect
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InactiveCrystal_Inspect_C::ExecuteUbergraph_BP_InactiveCrystal_Inspect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InactiveCrystal_Inspect.BP_InactiveCrystal_Inspect_C.ExecuteUbergraph_BP_InactiveCrystal_Inspect");

	ABP_InactiveCrystal_Inspect_C_ExecuteUbergraph_BP_InactiveCrystal_Inspect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
