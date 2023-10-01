// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_GenericFXHazard_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.ConvertRelativeLocationsToWorld
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_GenericFXHazard_C::ConvertRelativeLocationsToWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.ConvertRelativeLocationsToWorld");

	AIO_GenericFXHazard_C_ConvertRelativeLocationsToWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_GenericFXHazard.IO_GenericFXHazard_C.Audio_PlayShutdown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDA_GenericFXHazard_C*   self3                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_GenericFXHazard_C::Audio_PlayShutdown(class UDA_GenericFXHazard_C* self3)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.Audio_PlayShutdown");

	AIO_GenericFXHazard_C_Audio_PlayShutdown_Params params;
	params.self3 = self3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_GenericFXHazard.IO_GenericFXHazard_C.Audio_PlayWarmup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDA_GenericFXHazard_C*   DataAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_GenericFXHazard_C::Audio_PlayWarmup(class UDA_GenericFXHazard_C* DataAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.Audio_PlayWarmup");

	AIO_GenericFXHazard_C_Audio_PlayWarmup_Params params;
	params.DataAsset = DataAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_GenericFXHazard.IO_GenericFXHazard_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_GenericFXHazard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.UserConstructionScript");

	AIO_GenericFXHazard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_GenericFXHazard.IO_GenericFXHazard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_GenericFXHazard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.ReceiveBeginPlay");

	AIO_GenericFXHazard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_GenericFXHazard.IO_GenericFXHazard_C.__UserState_FireState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_GenericFXHazard_C::__UserState_FireState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.__UserState_FireState_1");

	AIO_GenericFXHazard_C___UserState_FireState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_GenericFXHazard.IO_GenericFXHazard_C.__UserState_FireState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_GenericFXHazard_C::__UserState_FireState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.__UserState_FireState_2");

	AIO_GenericFXHazard_C___UserState_FireState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_GenericFXHazard.IO_GenericFXHazard_C.OnActivate
// (BlueprintCallable, BlueprintEvent)

void AIO_GenericFXHazard_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.OnActivate");

	AIO_GenericFXHazard_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_GenericFXHazard.IO_GenericFXHazard_C.OnDeactivate
// (BlueprintCallable, BlueprintEvent)

void AIO_GenericFXHazard_C::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.OnDeactivate");

	AIO_GenericFXHazard_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_GenericFXHazard.IO_GenericFXHazard_C.SetPlaceableFireState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_GenericFXHazard_C::SetPlaceableFireState(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.SetPlaceableFireState");

	AIO_GenericFXHazard_C_SetPlaceableFireState_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_GenericFXHazard.IO_GenericFXHazard_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AIO_GenericFXHazard_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard");

	AIO_GenericFXHazard_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_GenericFXHazard.IO_GenericFXHazard_C.ExecuteUbergraph_IO_GenericFXHazard
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_GenericFXHazard_C::ExecuteUbergraph_IO_GenericFXHazard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.ExecuteUbergraph_IO_GenericFXHazard");

	AIO_GenericFXHazard_C_ExecuteUbergraph_IO_GenericFXHazard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_GenericFXHazard.IO_GenericFXHazard_C.Event_BeginPlayerOverlap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*    GbxPlayerController            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_GenericFXHazard_C::Event_BeginPlayerOverlap__DelegateSignature(class AGbxPlayerController* GbxPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.Event_BeginPlayerOverlap__DelegateSignature");

	AIO_GenericFXHazard_C_Event_BeginPlayerOverlap__DelegateSignature_Params params;
	params.GbxPlayerController = GbxPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
