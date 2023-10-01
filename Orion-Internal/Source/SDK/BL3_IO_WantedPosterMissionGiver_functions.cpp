// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_WantedPosterMissionGiver_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.UpdateHologramText
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_WantedPosterMissionGiver_C::UpdateHologramText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.UpdateHologramText");

	AIO_WantedPosterMissionGiver_C_UpdateHologramText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.SetMinimapIconEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_WantedPosterMissionGiver_C::SetMinimapIconEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.SetMinimapIconEnabled");

	AIO_WantedPosterMissionGiver_C_SetMinimapIconEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_WantedPosterMissionGiver_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.UserConstructionScript");

	AIO_WantedPosterMissionGiver_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AIO_WantedPosterMissionGiver_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.Timeline_0__FinishedFunc");

	AIO_WantedPosterMissionGiver_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AIO_WantedPosterMissionGiver_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.Timeline_0__UpdateFunc");

	AIO_WantedPosterMissionGiver_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.BndEvt__BP_UsableComponent_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_WantedPosterPrototype
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AIO_WantedPosterMissionGiver_C::BndEvt__BP_UsableComponent_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_WantedPosterPrototype(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.BndEvt__BP_UsableComponent_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_WantedPosterPrototype");

	AIO_WantedPosterMissionGiver_C_BndEvt__BP_UsableComponent_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_WantedPosterPrototype_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.OnDisabling
// (Event, Protected, BlueprintEvent)

void AIO_WantedPosterMissionGiver_C::OnDisabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.OnDisabling");

	AIO_WantedPosterMissionGiver_C_OnDisabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void AIO_WantedPosterMissionGiver_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.OnDisabled");

	AIO_WantedPosterMissionGiver_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_7_MissionObserverMissionUpdate__DelegateSignature_BP_IO_WantedPosterPrototype
// (BlueprintEvent)
// Parameters:
// class UClass*                  Mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMissionEvent                  MissionEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_WantedPosterMissionGiver_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_7_MissionObserverMissionUpdate__DelegateSignature_BP_IO_WantedPosterPrototype(class UClass* Mission, EMissionEvent MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_7_MissionObserverMissionUpdate__DelegateSignature_BP_IO_WantedPosterPrototype");

	AIO_WantedPosterMissionGiver_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_7_MissionObserverMissionUpdate__DelegateSignature_BP_IO_WantedPosterPrototype_Params params;
	params.Mission = Mission;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void AIO_WantedPosterMissionGiver_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.OnEnabled");

	AIO_WantedPosterMissionGiver_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.SetToDisabled
// (BlueprintCallable, BlueprintEvent)

void AIO_WantedPosterMissionGiver_C::SetToDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.SetToDisabled");

	AIO_WantedPosterMissionGiver_C_SetToDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.OnHologramActiveChanged
// (Event, Protected, BlueprintEvent)

void AIO_WantedPosterMissionGiver_C::OnHologramActiveChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.OnHologramActiveChanged");

	AIO_WantedPosterMissionGiver_C_OnHologramActiveChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_WantedPosterMissionGiver_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.ReceiveBeginPlay");

	AIO_WantedPosterMissionGiver_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.ExecuteUbergraph_IO_WantedPosterMissionGiver
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_WantedPosterMissionGiver_C::ExecuteUbergraph_IO_WantedPosterMissionGiver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C.ExecuteUbergraph_IO_WantedPosterMissionGiver");

	AIO_WantedPosterMissionGiver_C_ExecuteUbergraph_IO_WantedPosterMissionGiver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
