// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_LightweightVideoMonitor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.SetAudioLocations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_LightweightVideoMonitor_C::SetAudioLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.SetAudioLocations");

	AIO_LightweightVideoMonitor_C_SetAudioLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.OverrideSecondaryMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaTexture*           Media_Texture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_LightweightVideoMonitor_C::OverrideSecondaryMeshes(class UMediaTexture* Media_Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.OverrideSecondaryMeshes");

	AIO_LightweightVideoMonitor_C_OverrideSecondaryMeshes_Params params;
	params.Media_Texture = Media_Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_LightweightVideoMonitor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.UserConstructionScript");

	AIO_LightweightVideoMonitor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.__UserState_MonitorStates_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_LightweightVideoMonitor_C::__UserState_MonitorStates_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.__UserState_MonitorStates_2");

	AIO_LightweightVideoMonitor_C___UserState_MonitorStates_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.__UserState_MonitorStates_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_LightweightVideoMonitor_C::__UserState_MonitorStates_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.__UserState_MonitorStates_1");

	AIO_LightweightVideoMonitor_C___UserState_MonitorStates_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_IO_LightweightVideoMonitor
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AIO_LightweightVideoMonitor_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_IO_LightweightVideoMonitor(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_IO_LightweightVideoMonitor");

	AIO_LightweightVideoMonitor_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_IO_LightweightVideoMonitor_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.MovieEnd
// (BlueprintCallable, BlueprintEvent)

void AIO_LightweightVideoMonitor_C::MovieEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.MovieEnd");

	AIO_LightweightVideoMonitor_C_MovieEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.ExecuteUbergraph_IO_LightweightVideoMonitor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_LightweightVideoMonitor_C::ExecuteUbergraph_IO_LightweightVideoMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.ExecuteUbergraph_IO_LightweightVideoMonitor");

	AIO_LightweightVideoMonitor_C_ExecuteUbergraph_IO_LightweightVideoMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
