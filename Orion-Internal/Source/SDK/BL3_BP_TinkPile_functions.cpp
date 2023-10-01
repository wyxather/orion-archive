// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TinkPile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TinkPile.BP_TinkPile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TinkPile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.UserConstructionScript");

	ABP_TinkPile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.TinkPile_MyUserEnteredPile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_TinkBuildSelection> WhatToBuild                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TinkPile_C::TinkPile_MyUserEnteredPile(TEnumAsByte<Enum_TinkBuildSelection> WhatToBuild, class AActor* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.TinkPile_MyUserEnteredPile");

	ABP_TinkPile_C_TinkPile_MyUserEnteredPile_Params params;
	params.WhatToBuild = WhatToBuild;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.TinkPile_MyUserBuiltObject
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TinkPile_C::TinkPile_MyUserBuiltObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.TinkPile_MyUserBuiltObject");

	ABP_TinkPile_C_TinkPile_MyUserBuiltObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_0_SpawnEvent__DelegateSignature_BP_TinkPile
// (BlueprintEvent)
// Parameters:
// class USpawnerComponent*       SpawnerComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TinkPile_C::BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_0_SpawnEvent__DelegateSignature_BP_TinkPile(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_0_SpawnEvent__DelegateSignature_BP_TinkPile");

	ABP_TinkPile_C_BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_0_SpawnEvent__DelegateSignature_BP_TinkPile_Params params;
	params.SpawnerComponent = SpawnerComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_1_SpawnEvent__DelegateSignature_BP_TinkPile
// (BlueprintEvent)
// Parameters:
// class USpawnerComponent*       SpawnerComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TinkPile_C::BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_1_SpawnEvent__DelegateSignature_BP_TinkPile(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_1_SpawnEvent__DelegateSignature_BP_TinkPile");

	ABP_TinkPile_C_BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_1_SpawnEvent__DelegateSignature_BP_TinkPile_Params params;
	params.SpawnerComponent = SpawnerComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.TinkPile_MyUserExitedPile
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TinkPile_C::TinkPile_MyUserExitedPile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.TinkPile_MyUserExitedPile");

	ABP_TinkPile_C_TinkPile_MyUserExitedPile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_GoonInteract_Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TinkPile_C::SmartObject_TinkPile_GoonInteract_Begin(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_GoonInteract_Begin");

	ABP_TinkPile_C_SmartObject_TinkPile_GoonInteract_Begin_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_GoonInteract_Interrupt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TinkPile_C::SmartObject_TinkPile_GoonInteract_Interrupt(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_GoonInteract_Interrupt");

	ABP_TinkPile_C_SmartObject_TinkPile_GoonInteract_Interrupt_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_GoonInteract_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TinkPile_C::SmartObject_TinkPile_GoonInteract_Success(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_GoonInteract_Success");

	ABP_TinkPile_C_SmartObject_TinkPile_GoonInteract_Success_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.OnTinkPileUseStarted
// (Event, Public, BlueprintEvent)

void ABP_TinkPile_C::OnTinkPileUseStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.OnTinkPileUseStarted");

	ABP_TinkPile_C_OnTinkPileUseStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.OnTinkPileUseFinished
// (Event, Public, BlueprintEvent)

void ABP_TinkPile_C::OnTinkPileUseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.OnTinkPileUseFinished");

	ABP_TinkPile_C_OnTinkPileUseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.TinkPile_EnablePile
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TinkPile_C::TinkPile_EnablePile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.TinkPile_EnablePile");

	ABP_TinkPile_C_TinkPile_EnablePile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.TinkPIle_DisablePile
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TinkPile_C::TinkPIle_DisablePile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.TinkPIle_DisablePile");

	ABP_TinkPile_C_TinkPIle_DisablePile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_ApeInteract_Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TinkPile_C::SmartObject_TinkPile_ApeInteract_Begin(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_ApeInteract_Begin");

	ABP_TinkPile_C_SmartObject_TinkPile_ApeInteract_Begin_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_ApeInteract_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TinkPile_C::SmartObject_TinkPile_ApeInteract_Success(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_ApeInteract_Success");

	ABP_TinkPile_C_SmartObject_TinkPile_ApeInteract_Success_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_ApeInteract_Interrupt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TinkPile_C::SmartObject_TinkPile_ApeInteract_Interrupt(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_ApeInteract_Interrupt");

	ABP_TinkPile_C_SmartObject_TinkPile_ApeInteract_Interrupt_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TinkPile.BP_TinkPile_C.ExecuteUbergraph_BP_TinkPile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TinkPile_C::ExecuteUbergraph_BP_TinkPile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TinkPile.BP_TinkPile_C.ExecuteUbergraph_BP_TinkPile");

	ABP_TinkPile_C_ExecuteUbergraph_BP_TinkPile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
