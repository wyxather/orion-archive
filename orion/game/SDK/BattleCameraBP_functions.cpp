#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleCameraBP.BattleCameraBP_C
// (Actor)

class UClass* ABattleCameraBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleCameraBP_C");

	return Clss;
}


// BattleCameraBP_C BattleCameraBP.Default__BattleCameraBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABattleCameraBP_C* ABattleCameraBP_C::GetDefaultObj()
{
	static class ABattleCameraBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABattleCameraBP_C*>(ABattleCameraBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleCameraBP.BattleCameraBP_C.GetCameraInitParameterForAbilityCamera
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        OutPostSetting                                                   (Parm, OutParm)
// struct FCameraFocusSettings        OutFocusSetting                                                  (Parm, OutParm)
// struct FCameraFilmbackSettings     OutFilmbackSetting                                               (Parm, OutParm, NoDestructor)
// struct FCameraLensSettings         OutLensSetting                                                   (Parm, OutParm, NoDestructor)
// float                              OutCurrentAperture                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutFOV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::GetCameraInitParameterForAbilityCamera(struct FPostProcessSettings* OutPostSetting, struct FCameraFocusSettings* OutFocusSetting, struct FCameraFilmbackSettings* OutFilmbackSetting, struct FCameraLensSettings* OutLensSetting, float* OutCurrentAperture, float* OutFOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "GetCameraInitParameterForAbilityCamera");

	Params::ABattleCameraBP_C_GetCameraInitParameterForAbilityCamera_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutPostSetting != nullptr)
		*OutPostSetting = std::move(Parms.OutPostSetting);

	if (OutFocusSetting != nullptr)
		*OutFocusSetting = std::move(Parms.OutFocusSetting);

	if (OutFilmbackSetting != nullptr)
		*OutFilmbackSetting = std::move(Parms.OutFilmbackSetting);

	if (OutLensSetting != nullptr)
		*OutLensSetting = std::move(Parms.OutLensSetting);

	if (OutCurrentAperture != nullptr)
		*OutCurrentAperture = Parms.OutCurrentAperture;

	if (OutFOV != nullptr)
		*OutFOV = Parms.OutFOV;

}


// Function BattleCameraBP.BattleCameraBP_C.InitReplayCameraPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_CAMERA_TYPE     InitCameraType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::InitReplayCameraPosition(enum class EBATTLE_CAMERA_TYPE InitCameraType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "InitReplayCameraPosition");

	Params::ABattleCameraBP_C_InitReplayCameraPosition_Params Parms{};

	Parms.InitCameraType = InitCameraType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.IsPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Playing                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCameraBP_C::IsPlaying(bool* Playing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "IsPlaying");

	Params::ABattleCameraBP_C_IsPlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Playing != nullptr)
		*Playing = Parms.Playing;

}


// Function BattleCameraBP.BattleCameraBP_C.InitBattleCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_CAMERA_TYPE     InitCameraType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::InitBattleCamera(enum class EBATTLE_CAMERA_TYPE InitCameraType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "InitBattleCamera");

	Params::ABattleCameraBP_C_InitBattleCamera_Params Parms{};

	Parms.InitCameraType = InitCameraType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.CameraVibration__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::CameraVibration__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "CameraVibration__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.CameraVibration__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::CameraVibration__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "CameraVibration__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.CameraChromaticAberation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::CameraChromaticAberation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "CameraChromaticAberation__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.CameraChromaticAberation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::CameraChromaticAberation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "CameraChromaticAberation__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.TakeDamageVibration__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::TakeDamageVibration__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "TakeDamageVibration__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.TakeDamageVibration__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::TakeDamageVibration__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "TakeDamageVibration__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.TakeBigDamageVibration__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::TakeBigDamageVibration__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "TakeBigDamageVibration__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.TakeBigDamageVibration__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::TakeBigDamageVibration__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "TakeBigDamageVibration__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.CameraEnemyDeadMove__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::CameraEnemyDeadMove__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "CameraEnemyDeadMove__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.CameraEnemyDeadMove__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::CameraEnemyDeadMove__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "CameraEnemyDeadMove__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.CameraChromaticAberationSmall__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::CameraChromaticAberationSmall__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "CameraChromaticAberationSmall__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.CameraChromaticAberationSmall__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::CameraChromaticAberationSmall__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "CameraChromaticAberationSmall__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.PulseEffect__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::PulseEffect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "PulseEffect__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.PulseEffect__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::PulseEffect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "PulseEffect__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.WaitMoveWidth__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::WaitMoveWidth__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "WaitMoveWidth__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.WaitMoveWidth__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::WaitMoveWidth__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "WaitMoveWidth__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.TargetFocusMove__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::TargetFocusMove__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "TargetFocusMove__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.TargetFocusMove__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::TargetFocusMove__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "TargetFocusMove__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.ResetTargetFocusMove__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::ResetTargetFocusMove__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "ResetTargetFocusMove__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.ResetTargetFocusMove__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::ResetTargetFocusMove__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "ResetTargetFocusMove__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.WaitMoveRotate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::WaitMoveRotate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "WaitMoveRotate__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.WaitMoveRotate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::WaitMoveRotate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "WaitMoveRotate__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.WaitMoveDepth__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::WaitMoveDepth__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "WaitMoveDepth__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.WaitMoveDepth__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::WaitMoveDepth__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "WaitMoveDepth__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.SuspendWaitMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::SuspendWaitMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "SuspendWaitMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.StartWaitMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::StartWaitMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartWaitMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.StartCameraVibration
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::StartCameraVibration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartCameraVibration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.StartCameraChromaticAberation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::StartCameraChromaticAberation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartCameraChromaticAberation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.StartTakeDamageVibration
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::StartTakeDamageVibration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartTakeDamageVibration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.StartTakeBigDamageVibration
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::StartTakeBigDamageVibration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartTakeBigDamageVibration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.InitWaitMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::InitWaitMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "InitWaitMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.StartEnemyDeadSlowMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FarCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCameraBP_C::StartEnemyDeadSlowMove(bool FarCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartEnemyDeadSlowMove");

	Params::ABattleCameraBP_C_StartEnemyDeadSlowMove_Params Parms{};

	Parms.FarCamera = FarCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.StartCameraChromaticAberationSmall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::StartCameraChromaticAberationSmall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartCameraChromaticAberationSmall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.StartCameraPulseEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::StartCameraPulseEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartCameraPulseEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.ResumeWaitMove
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::ResumeWaitMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "ResumeWaitMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.FinishEncountCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::FinishEncountCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "FinishEncountCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.StartEncountCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::StartEncountCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartEncountCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.StartBreakCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBREAK_CAMERA_TYPE      EBreakType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::StartBreakCamera(enum class EBREAK_CAMERA_TYPE EBreakType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartBreakCamera");

	Params::ABattleCameraBP_C_StartBreakCamera_Params Parms{};

	Parms.EBreakType = EBreakType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.FinishBreakCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::FinishBreakCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "FinishBreakCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.FinishAbilityCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::FinishAbilityCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "FinishAbilityCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.StartAbilityCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_TARGET_TYPE     ETargetType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NSlideFrame                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActionCommandBase*          CActionCommand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnemySide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsFront                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        StrAbilityName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::StartAbilityCamera(int32 NBoostLevel, enum class EBATTLE_TARGET_TYPE ETargetType, int32 NSlideFrame, class AActionCommandBase* CActionCommand, bool bEnemySide, bool bIsFront, class FName StrAbilityName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartAbilityCamera");

	Params::ABattleCameraBP_C_StartAbilityCamera_Params Parms{};

	Parms.NBoostLevel = NBoostLevel;
	Parms.ETargetType = ETargetType;
	Parms.NSlideFrame = NSlideFrame;
	Parms.CActionCommand = CActionCommand;
	Parms.bEnemySide = bEnemySide;
	Parms.bIsFront = bIsFront;
	Parms.StrAbilityName = StrAbilityName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.InterpolationAbilityCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FRatio                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CTargetCamera                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::InterpolationAbilityCamera(float FRatio, class ACineCameraActor* CTargetCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "InterpolationAbilityCamera");

	Params::ABattleCameraBP_C_InterpolationAbilityCamera_Params Parms{};

	Parms.FRatio = FRatio;
	Parms.CTargetCamera = CTargetCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.SetCameraTransform
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CTransform                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABattleCameraBP_C::SetCameraTransform(const struct FTransform& CTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "SetCameraTransform");

	Params::ABattleCameraBP_C_SetCameraTransform_Params Parms{};

	Parms.CTransform = CTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.SetCameraWaitMove
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCameraBP_C::SetCameraWaitMove(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "SetCameraWaitMove");

	Params::ABattleCameraBP_C_SetCameraWaitMove_Params Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.ResetCameraTransform
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::ResetCameraTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "ResetCameraTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.FinishResultCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::FinishResultCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "FinishResultCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.StartResulttCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_RESULT_TYPE     EResultType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFront                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCameraBP_C::StartResulttCamera(enum class EBATTLE_RESULT_TYPE EResultType, bool bIsFront)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartResulttCamera");

	Params::ABattleCameraBP_C_StartResulttCamera_Params Parms{};

	Parms.EResultType = EResultType;
	Parms.bIsFront = bIsFront;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.SetTargetFocusCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_TARGET_TYPE     ETargetType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CTarget                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::SetTargetFocusCamera(enum class EBATTLE_TARGET_TYPE ETargetType, class ABattleCharacterBase* CTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "SetTargetFocusCamera");

	Params::ABattleCameraBP_C_SetTargetFocusCamera_Params Parms{};

	Parms.ETargetType = ETargetType;
	Parms.CTarget = CTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.ResetTargetFocusCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::ResetTargetFocusCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "ResetTargetFocusCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.InterpolationBattleCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*                 CInterpolationCurve                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FRatio                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CTargetCamera                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::InterpolationBattleCamera(class UCurveFloat* CInterpolationCurve, float FRatio, class ACineCameraActor* CTargetCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "InterpolationBattleCamera");

	Params::ABattleCameraBP_C_InterpolationBattleCamera_Params Parms{};

	Parms.CInterpolationCurve = CInterpolationCurve;
	Parms.FRatio = FRatio;
	Parms.CTargetCamera = CTargetCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.InterpolationResultCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FRatio                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            CTargetCamera                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::InterpolationResultCamera(float FRatio, class ACineCameraActor* CTargetCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "InterpolationResultCamera");

	Params::ABattleCameraBP_C_InterpolationResultCamera_Params Parms{};

	Parms.FRatio = FRatio;
	Parms.CTargetCamera = CTargetCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.SetInterpolationCurveForAbilityCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*                 CInterpolationCurve                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::SetInterpolationCurveForAbilityCamera(class UCurveFloat* CInterpolationCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "SetInterpolationCurveForAbilityCamera");

	Params::ABattleCameraBP_C_SetInterpolationCurveForAbilityCamera_Params Parms{};

	Parms.CInterpolationCurve = CInterpolationCurve;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.StartEnemyDeadCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBREAK_CAMERA_TYPE      EBreakType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::StartEnemyDeadCamera(enum class EBREAK_CAMERA_TYPE EBreakType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "StartEnemyDeadCamera");

	Params::ABattleCameraBP_C_StartEnemyDeadCamera_Params Parms{};

	Parms.EBreakType = EBreakType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.FixBattleCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::FixBattleCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "FixBattleCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.PostCameraTick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::PostCameraTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "PostCameraTick");

	Params::ABattleCameraBP_C_PostCameraTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCameraBP.BattleCameraBP_C.SuspendTargetFocusMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCameraBP_C::SuspendTargetFocusMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "SuspendTargetFocusMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCameraBP.BattleCameraBP_C.ExecuteUbergraph_BattleCameraBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraBP_C::ExecuteUbergraph_BattleCameraBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCameraBP_C", "ExecuteUbergraph_BattleCameraBP");

	Params::ABattleCameraBP_C_ExecuteUbergraph_BattleCameraBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


