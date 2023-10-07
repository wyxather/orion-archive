#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass RichEventCharacter.RichEventCharacter_C
// (Actor, Pawn)

class UClass* ARichEventCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichEventCharacter_C");

	return Clss;
}


// RichEventCharacter_C RichEventCharacter.Default__RichEventCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARichEventCharacter_C* ARichEventCharacter_C::GetDefaultObj()
{
	static class ARichEventCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARichEventCharacter_C*>(ARichEventCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RichEventCharacter.RichEventCharacter_C.UpdateDitherMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ARichEventCharacter_C::UpdateDitherMask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "UpdateDitherMask");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RichEventCharacter.RichEventCharacter_C.IsFieldNpcCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ARichEventCharacter_C::IsFieldNpcCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "IsFieldNpcCharacter");

	Params::ARichEventCharacter_C_IsFieldNpcCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RichEventCharacter.RichEventCharacter_C.SetFadeMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              FadeTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::SetFadeMode(bool Enable, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "SetFadeMode");

	Params::ARichEventCharacter_C_SetFadeMode_Params Parms{};

	Parms.Enable = Enable;
	Parms.FadeTime = FadeTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.UpdateFadeMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::UpdateFadeMaterial(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "UpdateFadeMaterial");

	Params::ARichEventCharacter_C_UpdateFadeMaterial_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.SetFootStepSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IgnoreFootStep                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARichEventCharacter_C::SetFootStepSound(bool IgnoreFootStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "SetFootStepSound");

	Params::ARichEventCharacter_C_SetFootStepSound_Params Parms{};

	Parms.IgnoreFootStep = IgnoreFootStep;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.SetEmotionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetBalloon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              EmotionType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::SetEmotionText(bool SetBalloon, int32 EmotionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "SetEmotionText");

	Params::ARichEventCharacter_C_SetEmotionText_Params Parms{};

	Parms.SetBalloon = SetBalloon;
	Parms.EmotionType = EmotionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.GetTextInfo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ARichEventCharacter_C::GetTextInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "GetTextInfo");

	Params::ARichEventCharacter_C_GetTextInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RichEventCharacter.RichEventCharacter_C.SetLandPositionAdjustment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetAdjustment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARichEventCharacter_C::SetLandPositionAdjustment(bool SetAdjustment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "SetLandPositionAdjustment");

	Params::ARichEventCharacter_C_SetLandPositionAdjustment_Params Parms{};

	Parms.SetAdjustment = SetAdjustment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.SetCharacterLandPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::SetCharacterLandPosition(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "SetCharacterLandPosition");

	Params::ARichEventCharacter_C_SetCharacterLandPosition_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.ChangeCharacterAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      ActionLabelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Frame                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAnimationLoopLoopSetting                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         SetDir                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::ChangeCharacterAction(enum class EKSCharacterAction ActionLabelName, int32 Frame, enum class EKSCharacterAnimationLoop LoopSetting, enum class EKSCharacterDir SetDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "ChangeCharacterAction");

	Params::ARichEventCharacter_C_ChangeCharacterAction_Params Parms{};

	Parms.ActionLabelName = ActionLabelName;
	Parms.Frame = Frame;
	Parms.LoopSetting = LoopSetting;
	Parms.SetDir = SetDir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.SetTagVoiceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetVoice                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARichEventCharacter_C::SetTagVoiceText(bool SetVoice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "SetTagVoiceText");

	Params::ARichEventCharacter_C_SetTagVoiceText_Params Parms{};

	Parms.SetVoice = SetVoice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.Set Up Debug Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterDir         SetDir                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::Set_Up_Debug_Text(enum class EKSCharacterDir SetDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "Set Up Debug Text");

	Params::ARichEventCharacter_C_Set_Up_Debug_Text_Params Parms{};

	Parms.SetDir = SetDir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.InitTagData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AddTagName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::InitTagData(class FName AddTagName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "InitTagData");

	Params::ARichEventCharacter_C_InitTagData_Params Parms{};

	Parms.AddTagName = AddTagName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.DetachCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ARichEventCharacter_C::DetachCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "DetachCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RichEventCharacter.RichEventCharacter_C.AttachCharacterChangeCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARichEventCharacter_C::AttachCharacterChangeCollision(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "AttachCharacterChangeCollision");

	Params::ARichEventCharacter_C_AttachCharacterChangeCollision_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.Change Flipbook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      CharacterAction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         CharaDir                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAnimationLoopAnimationLoop                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::Change_Flipbook(enum class EKSCharacterAction CharacterAction, enum class EKSCharacterDir CharaDir, enum class EKSCharacterAnimationLoop AnimationLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "Change Flipbook");

	Params::ARichEventCharacter_C_Change_Flipbook_Params Parms{};

	Parms.CharacterAction = CharacterAction;
	Parms.CharaDir = CharaDir;
	Parms.AnimationLoop = AnimationLoop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.AttachChara
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         SetDir                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::AttachChara(class AKSCharacterBase* Character, enum class EKSCharacterDir SetDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "AttachChara");

	Params::ARichEventCharacter_C_AttachChara_Params Parms{};

	Parms.Character = Character;
	Parms.SetDir = SetDir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.Set Up Flipbook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoftObjectPath             TargetObjectPath                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UPaperFlipbook>FlipbookObject_Soft                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EKSCharacterAnimationLoopAnimationLoop                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::Set_Up_Flipbook(const struct FSoftObjectPath& TargetObjectPath, TSoftObjectPtr<class UPaperFlipbook> FlipbookObject_Soft, enum class EKSCharacterAnimationLoop AnimationLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "Set Up Flipbook");

	Params::ARichEventCharacter_C_Set_Up_Flipbook_Params Parms{};

	Parms.TargetObjectPath = TargetObjectPath;
	Parms.FlipbookObject_Soft = FlipbookObject_Soft;
	Parms.AnimationLoop = AnimationLoop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ARichEventCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RichEventCharacter.RichEventCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "ReceiveTick");

	Params::ARichEventCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.InitCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         SetDir                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AddTagName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::InitCharacter(class FName CharacterLabel, enum class EKSCharacterDir SetDir, class FName AddTagName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "InitCharacter");

	Params::ARichEventCharacter_C_InitCharacter_Params Parms{};

	Parms.CharacterLabel = CharacterLabel;
	Parms.SetDir = SetDir;
	Parms.AddTagName = AddTagName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.AttachPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterDir         SetDir                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LabelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::AttachPlayer(enum class EKSCharacterDir SetDir, class FName LabelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "AttachPlayer");

	Params::ARichEventCharacter_C_AttachPlayer_Params Parms{};

	Parms.SetDir = SetDir;
	Parms.LabelName = LabelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.AttachCharacterAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      ActionLabelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Frame                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAnimationLoopLoopSetting                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         SetDir                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::AttachCharacterAction(enum class EKSCharacterAction ActionLabelName, int32 Frame, enum class EKSCharacterAnimationLoop LoopSetting, enum class EKSCharacterDir SetDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "AttachCharacterAction");

	Params::ARichEventCharacter_C_AttachCharacterAction_Params Parms{};

	Parms.ActionLabelName = ActionLabelName;
	Parms.Frame = Frame;
	Parms.LoopSetting = LoopSetting;
	Parms.SetDir = SetDir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "ReceiveEndPlay");

	Params::ARichEventCharacter_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RichEventCharacter.RichEventCharacter_C.ExecuteUbergraph_RichEventCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARichEventCharacter_C::ExecuteUbergraph_RichEventCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RichEventCharacter_C", "ExecuteUbergraph_RichEventCharacter");

	Params::ARichEventCharacter_C_ExecuteUbergraph_RichEventCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


