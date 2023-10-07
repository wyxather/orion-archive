#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSCameraManagerBP.KSCameraManagerBP_C
// (Actor)

class UClass* AKSCameraManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSCameraManagerBP_C");

	return Clss;
}


// KSCameraManagerBP_C KSCameraManagerBP.Default__KSCameraManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSCameraManagerBP_C* AKSCameraManagerBP_C::GetDefaultObj()
{
	static class AKSCameraManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSCameraManagerBP_C*>(AKSCameraManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSCameraManagerBP.KSCameraManagerBP_C.GetRenderTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EKSCaptureType          CaptureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSCameraManagerBP_C::GetRenderTarget(enum class EKSCaptureType CaptureType, class UTextureRenderTarget2D** RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCameraManagerBP_C", "GetRenderTarget");

	Params::AKSCameraManagerBP_C_GetRenderTarget_Params Parms{};

	Parms.CaptureType = CaptureType;

	UObject::ProcessEvent(Func, &Parms);

	if (RenderTarget != nullptr)
		*RenderTarget = Parms.RenderTarget;

}


// Function KSCameraManagerBP.KSCameraManagerBP_C.SetRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCaptureType          CaptureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSCameraManagerBP_C::SetRenderTarget(enum class EKSCaptureType CaptureType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCameraManagerBP_C", "SetRenderTarget");

	Params::AKSCameraManagerBP_C_SetRenderTarget_Params Parms{};

	Parms.CaptureType = CaptureType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSCameraManagerBP.KSCameraManagerBP_C.CaptureScene
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*            CameraCompoent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSCameraManagerBP_C::CaptureScene(class UCameraComponent* CameraCompoent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCameraManagerBP_C", "CaptureScene");

	Params::AKSCameraManagerBP_C_CaptureScene_Params Parms{};

	Parms.CameraCompoent = CameraCompoent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSCameraManagerBP.KSCameraManagerBP_C.BattleEncountScreenShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSCameraManagerBP_C::BattleEncountScreenShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCameraManagerBP_C", "BattleEncountScreenShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSCameraManagerBP.KSCameraManagerBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AKSCameraManagerBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCameraManagerBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSCameraManagerBP.KSCameraManagerBP_C.BattleEndScreenShot
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSCameraManagerBP_C::BattleEndScreenShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCameraManagerBP_C", "BattleEndScreenShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSCameraManagerBP.KSCameraManagerBP_C.ExecuteUbergraph_KSCameraManagerBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSCameraManagerBP_C::ExecuteUbergraph_KSCameraManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCameraManagerBP_C", "ExecuteUbergraph_KSCameraManagerBP");

	Params::AKSCameraManagerBP_C_ExecuteUbergraph_KSCameraManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


