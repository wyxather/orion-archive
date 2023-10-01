// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxTimeOfDay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxTimeOfDay.TimeOfDayActor.GetDirectionalLightComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDirectionalLightComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDirectionalLightComponent* ATimeOfDayActor::GetDirectionalLightComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayActor.GetDirectionalLightComponent");

	ATimeOfDayActor_GetDirectionalLightComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTimeOfDay.TimeOfDayActor.EnumerateLayerNames
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           OutLayerNames                  (Parm, OutParm, ZeroConstructor)

void ATimeOfDayActor::EnumerateLayerNames(TArray<struct FName>* OutLayerNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayActor.EnumerateLayerNames");

	ATimeOfDayActor_EnumerateLayerNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLayerNames != nullptr)
		*OutLayerNames = params.OutLayerNames;
}


// Function GbxTimeOfDay.TimeOfDayActor.AddEventListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InListener                     (Parm, ZeroConstructor, IsPlainOldData)

void ATimeOfDayActor::AddEventListener(class UObject* InListener)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayActor.AddEventListener");

	ATimeOfDayActor_AddEventListener_Params params;
	params.InListener = InListener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionUpOneLayer
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionDuration             (Parm, ZeroConstructor, IsPlainOldData)

void UTimeOfDayBlueprintLibrary::STATIC_TransitionUpOneLayer(class UObject* WorldContextObject, float TransitionDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionUpOneLayer");

	UTimeOfDayBlueprintLibrary_TransitionUpOneLayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionToLayer
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ToLayer                        (Parm, ZeroConstructor)
// float                          TransitionDuration             (Parm, ZeroConstructor, IsPlainOldData)

void UTimeOfDayBlueprintLibrary::STATIC_TransitionToLayer(class UObject* WorldContextObject, const class FString& ToLayer, float TransitionDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionToLayer");

	UTimeOfDayBlueprintLibrary_TransitionToLayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ToLayer = ToLayer;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionDownOneLayer
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionDuration             (Parm, ZeroConstructor, IsPlainOldData)

void UTimeOfDayBlueprintLibrary::STATIC_TransitionDownOneLayer(class UObject* WorldContextObject, float TransitionDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionDownOneLayer");

	UTimeOfDayBlueprintLibrary_TransitionDownOneLayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.StartTimeOfDay
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UTimeOfDayBlueprintLibrary::STATIC_StartTimeOfDay(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.StartTimeOfDay");

	UTimeOfDayBlueprintLibrary_StartTimeOfDay_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.SetTimeOfDay
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewTimeOfDay                   (Parm, ZeroConstructor, IsPlainOldData)

void UTimeOfDayBlueprintLibrary::STATIC_SetTimeOfDay(class UObject* WorldContextObject, float NewTimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.SetTimeOfDay");

	UTimeOfDayBlueprintLibrary_SetTimeOfDay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NewTimeOfDay = NewTimeOfDay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.PauseTimeOfDay
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UTimeOfDayBlueprintLibrary::STATIC_PauseTimeOfDay(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.PauseTimeOfDay");

	UTimeOfDayBlueprintLibrary_PauseTimeOfDay_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDayState
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// ETimeOfDayState                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ETimeOfDayState UTimeOfDayBlueprintLibrary::STATIC_GetTimeOfDayState(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDayState");

	UTimeOfDayBlueprintLibrary_GetTimeOfDayState_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDay
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTimeOfDayBlueprintLibrary::STATIC_GetTimeOfDay(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDay");

	UTimeOfDayBlueprintLibrary_GetTimeOfDay_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.AddTimeOfDayListener
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InListener                     (Parm, ZeroConstructor, IsPlainOldData)

void UTimeOfDayBlueprintLibrary::STATIC_AddTimeOfDayListener(class UObject* WorldContextObject, class UObject* InListener)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.AddTimeOfDayListener");

	UTimeOfDayBlueprintLibrary_AddTimeOfDayListener_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InListener = InListener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTimeOfDay.TimeOfDayComponent.SetUseCinematicTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InUseCinematicTimeOfDay        (Parm, ZeroConstructor, IsPlainOldData)

void UTimeOfDayComponent::SetUseCinematicTimeOfDay(bool InUseCinematicTimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayComponent.SetUseCinematicTimeOfDay");

	UTimeOfDayComponent_SetUseCinematicTimeOfDay_Params params;
	params.InUseCinematicTimeOfDay = InUseCinematicTimeOfDay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTimeOfDay.TimeOfDayComponent.SetCinematicTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InCinematicTimeOfDay           (Parm, ZeroConstructor, IsPlainOldData)

void UTimeOfDayComponent::SetCinematicTimeOfDay(float InCinematicTimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTimeOfDay.TimeOfDayComponent.SetCinematicTimeOfDay");

	UTimeOfDayComponent_SetCinematicTimeOfDay_Params params;
	params.InCinematicTimeOfDay = InCinematicTimeOfDay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
