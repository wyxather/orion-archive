// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CatchARide_Console_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CatchARide_Console.BP_CatchARide_Console_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CatchARide_Console_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Console.BP_CatchARide_Console_C.UserConstructionScript");

	ABP_CatchARide_Console_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnNewBodyEquipped
// (Event, Public, BlueprintEvent)
// Parameters:
// class UOakCARVehicleData**     VehicleData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CatchARide_Console_C::OnNewBodyEquipped(class UOakCARVehicleData** VehicleData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnNewBodyEquipped");

	ABP_CatchARide_Console_C_OnNewBodyEquipped_Params params;
	params.VehicleData = VehicleData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnNewPartEquipped
// (Event, Public, BlueprintEvent)
// Parameters:
// ECARPartType*                  PartType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOakCARVehiclePartData** PartData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CatchARide_Console_C::OnNewPartEquipped(ECARPartType* PartType, class UOakCARVehiclePartData** PartData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnNewPartEquipped");

	ABP_CatchARide_Console_C_OnNewPartEquipped_Params params;
	params.PartType = PartType;
	params.PartData = PartData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnVehicleDeployedFromMenu
// (Event, Public, BlueprintEvent)

void ABP_CatchARide_Console_C::OnVehicleDeployedFromMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnVehicleDeployedFromMenu");

	ABP_CatchARide_Console_C_OnVehicleDeployedFromMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_Console.BP_CatchARide_Console_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_CatchARide_Console
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CatchARide_Console_C::BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_CatchARide_Console(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Console.BP_CatchARide_Console_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_CatchARide_Console");

	ABP_CatchARide_Console_C_BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_CatchARide_Console_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnIStateInteractive
// (Event, Protected, BlueprintEvent)

void ABP_CatchARide_Console_C::OnIStateInteractive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnIStateInteractive");

	ABP_CatchARide_Console_C_OnIStateInteractive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnIStateNonInteractive
// (Event, Protected, BlueprintEvent)

void ABP_CatchARide_Console_C::OnIStateNonInteractive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnIStateNonInteractive");

	ABP_CatchARide_Console_C_OnIStateNonInteractive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_Console.BP_CatchARide_Console_C.ExecuteUbergraph_BP_CatchARide_Console
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CatchARide_Console_C::ExecuteUbergraph_BP_CatchARide_Console(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Console.BP_CatchARide_Console_C.ExecuteUbergraph_BP_CatchARide_Console");

	ABP_CatchARide_Console_C_ExecuteUbergraph_BP_CatchARide_Console_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
