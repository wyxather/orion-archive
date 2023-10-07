#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass OperationPlayerCameraComponent.OperationPlayerCameraComponent_C
// (None)

class UClass* UOperationPlayerCameraComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OperationPlayerCameraComponent_C");

	return Clss;
}


// OperationPlayerCameraComponent_C OperationPlayerCameraComponent.Default__OperationPlayerCameraComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOperationPlayerCameraComponent_C* UOperationPlayerCameraComponent_C::GetDefaultObj()
{
	static class UOperationPlayerCameraComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOperationPlayerCameraComponent_C*>(UOperationPlayerCameraComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.UpdateCameraInterpolationByPlayerPos
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOperationPlayerCameraComponent_C::UpdateCameraInterpolationByPlayerPos(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "UpdateCameraInterpolationByPlayerPos");

	Params::UOperationPlayerCameraComponent_C_UpdateCameraInterpolationByPlayerPos_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.StartCameraInterpolationByPlayerPos
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartPlayerPos                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOperationPlayerCameraComponent_C::StartCameraInterpolationByPlayerPos(const struct FVector& StartPlayerPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "StartCameraInterpolationByPlayerPos");

	Params::UOperationPlayerCameraComponent_C_StartCameraInterpolationByPlayerPos_Params Parms{};

	Parms.StartPlayerPos = StartPlayerPos;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.SetTransportTypeForFocusDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETRANSPORTATION_TYPE    CurrentTransportType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOperationPlayerCameraComponent_C::SetTransportTypeForFocusDistance(enum class ETRANSPORTATION_TYPE CurrentTransportType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "SetTransportTypeForFocusDistance");

	Params::UOperationPlayerCameraComponent_C_SetTransportTypeForFocusDistance_Params Parms{};

	Parms.CurrentTransportType = CurrentTransportType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.ResetCameraPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOperationPlayerCameraComponent_C::ResetCameraPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "ResetCameraPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.EndEncountCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOperationPlayerCameraComponent_C::EndEncountCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "EndEncountCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.UpdateEncountCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Aim                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOperationPlayerCameraComponent_C::UpdateEncountCamera(const struct FVector& Location, const struct FVector& Aim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "UpdateEncountCamera");

	Params::UOperationPlayerCameraComponent_C_UpdateEncountCamera_Params Parms{};

	Parms.Location = Location;
	Parms.Aim = Aim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.PlayEncountCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOperationPlayerCameraComponent_C::PlayEncountCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "PlayEncountCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.Debug_ShowCameraLockInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOperationPlayerCameraComponent_C::Debug_ShowCameraLockInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "Debug_ShowCameraLockInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.EndCameraLockFocusDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOperationPlayerCameraComponent_C::EndCameraLockFocusDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "EndCameraLockFocusDistance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.StartCameraLockFocusDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOperationPlayerCameraComponent_C::StartCameraLockFocusDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "StartCameraLockFocusDistance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.SetDefaultCameraParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOperationPlayerCameraComponent_C::SetDefaultCameraParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "SetDefaultCameraParameter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.SetCameraParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransportCameraParam       CameraParam                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ChangeTransform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOperationPlayerCameraComponent_C::SetCameraParameter(const struct FTransportCameraParam& CameraParam, bool ChangeTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "SetCameraParameter");

	Params::UOperationPlayerCameraComponent_C_SetCameraParameter_Params Parms{};

	Parms.CameraParam = CameraParam;
	Parms.ChangeTransform = ChangeTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.InitCameraLockFocusDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOperationPlayerCameraComponent_C::InitCameraLockFocusDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "InitCameraLockFocusDistance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.SetupCameraLockPosDirectly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CameraLockPos                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCapsuleComponent*           CapsuleComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOperationPlayerCameraComponent_C::SetupCameraLockPosDirectly(const struct FVector& CameraLockPos, class UCapsuleComponent* CapsuleComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "SetupCameraLockPosDirectly");

	Params::UOperationPlayerCameraComponent_C_SetupCameraLockPosDirectly_Params Parms{};

	Parms.CameraLockPos = CameraLockPos;
	Parms.CapsuleComponent = CapsuleComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.ResetCameraLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOperationPlayerCameraComponent_C::ResetCameraLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "ResetCameraLock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.UpdateCameraLock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOperationPlayerCameraComponent_C::UpdateCameraLock(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "UpdateCameraLock");

	Params::UOperationPlayerCameraComponent_C_UpdateCameraLock_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.SetupCameraLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LockPos                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Lock                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Unlock                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EnableX                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EnableY                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EnableZ                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AfterLevelChange                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOperationPlayerCameraComponent_C::SetupCameraLock(const struct FVector& LockPos, bool Lock, bool Unlock, bool EnableX, bool EnableY, bool EnableZ, bool AfterLevelChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "SetupCameraLock");

	Params::UOperationPlayerCameraComponent_C_SetupCameraLock_Params Parms{};

	Parms.LockPos = LockPos;
	Parms.Lock = Lock;
	Parms.Unlock = Unlock;
	Parms.EnableX = EnableX;
	Parms.EnableY = EnableY;
	Parms.EnableZ = EnableZ;
	Parms.AfterLevelChange = AfterLevelChange;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.RegisterCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOperationPlayerCameraComponent_C::RegisterCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "RegisterCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.SetFilmbackPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UOperationPlayerCameraComponent_C::SetFilmbackPreset(const class FString& PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "SetFilmbackPreset");

	Params::UOperationPlayerCameraComponent_C_SetFilmbackPreset_Params Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.InitPlayerCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOperationPlayerCameraComponent_C::InitPlayerCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "InitPlayerCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOperationPlayerCameraComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "ReceiveTick");

	Params::UOperationPlayerCameraComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UOperationPlayerCameraComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OperationPlayerCameraComponent.OperationPlayerCameraComponent_C.ExecuteUbergraph_OperationPlayerCameraComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOperationPlayerCameraComponent_C::ExecuteUbergraph_OperationPlayerCameraComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OperationPlayerCameraComponent_C", "ExecuteUbergraph_OperationPlayerCameraComponent");

	Params::UOperationPlayerCameraComponent_C_ExecuteUbergraph_OperationPlayerCameraComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


