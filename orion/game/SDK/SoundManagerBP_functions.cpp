#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass SoundManagerBP.SoundManagerBP_C
// (Actor)

class UClass* ASoundManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundManagerBP_C");

	return Clss;
}


// SoundManagerBP_C SoundManagerBP.Default__SoundManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASoundManagerBP_C* ASoundManagerBP_C::GetDefaultObj()
{
	static class ASoundManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASoundManagerBP_C*>(ASoundManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundManagerBP.SoundManagerBP_C.StopEnvSoundAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::StopEnvSoundAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "StopEnvSoundAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.StopImmediateBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::StopImmediateBGM()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "StopImmediateBGM");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.SetupBattleChangeEnvSound
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsBattle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::SetupBattleChangeEnvSound(bool bIsBattle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "SetupBattleChangeEnvSound");

	Params::ASoundManagerBP_C_SetupBattleChangeEnvSound_Params Parms{};

	Parms.bIsBattle = bIsBattle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.CheckPauseBGM
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPause                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::CheckPauseBGM(bool* IsPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "CheckPauseBGM");

	Params::ASoundManagerBP_C_CheckPauseBGM_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPause != nullptr)
		*IsPause = Parms.IsPause;

}


// Function SoundManagerBP.SoundManagerBP_C.CheckNextBGMLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUnMatch                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::CheckNextBGMLabel(class FName BgmLabel, bool* IsUnMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "CheckNextBGMLabel");

	Params::ASoundManagerBP_C_CheckNextBGMLabel_Params Parms{};

	Parms.BgmLabel = BgmLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUnMatch != nullptr)
		*IsUnMatch = Parms.IsUnMatch;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayTitleBgmByLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDayTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsDebugPlay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestPlayTitleBgmByLabel(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool IsDayTime, bool bIsDebugPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayTitleBgmByLabel");

	Params::ASoundManagerBP_C_RequestPlayTitleBgmByLabel_Params Parms{};

	Parms.BgmLabel = BgmLabel;
	Parms.FadeOutTime = FadeOutTime;
	Parms.FadeInTime = FadeInTime;
	Parms.Priority = Priority;
	Parms.IsDayTime = IsDayTime;
	Parms.bIsDebugPlay = bIsDebugPlay;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.ResetManager
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::ResetManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "ResetManager");

	Params::ASoundManagerBP_C_ResetManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.DestroyManager
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::DestroyManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "DestroyManager");

	Params::ASoundManagerBP_C_DestroyManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayFadeMapChangeBgmByLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsDebugPlay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestPlayFadeMapChangeBgmByLabel(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayFadeMapChangeBgmByLabel");

	Params::ASoundManagerBP_C_RequestPlayFadeMapChangeBgmByLabel_Params Parms{};

	Parms.BgmLabel = BgmLabel;
	Parms.FadeOutTime = FadeOutTime;
	Parms.FadeInTime = FadeInTime;
	Parms.Priority = Priority;
	Parms.bIsDebugPlay = bIsDebugPlay;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.OnExitBar
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASoundManagerBP_C::OnExitBar(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "OnExitBar");

	Params::ASoundManagerBP_C_OnExitBar_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.RequestStopMusicRecord
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestStopMusicRecord(float FadeOutTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestStopMusicRecord");

	Params::ASoundManagerBP_C_RequestStopMusicRecord_Params Parms{};

	Parms.FadeOutTime = FadeOutTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RestoreBgmBeforePlayMusicRecord
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsDebugPlay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RestoreBgmBeforePlayMusicRecord(float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RestoreBgmBeforePlayMusicRecord");

	Params::ASoundManagerBP_C_RestoreBgmBeforePlayMusicRecord_Params Parms{};

	Parms.FadeOutTime = FadeOutTime;
	Parms.FadeInTime = FadeInTime;
	Parms.Priority = Priority;
	Parms.bIsDebugPlay = bIsDebugPlay;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayMusicRecord
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsDebugPlay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestPlayMusicRecord(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayMusicRecord");

	Params::ASoundManagerBP_C_RequestPlayMusicRecord_Params Parms{};

	Parms.BgmLabel = BgmLabel;
	Parms.FadeOutTime = FadeOutTime;
	Parms.FadeInTime = FadeInTime;
	Parms.Priority = Priority;
	Parms.bIsDebugPlay = bIsDebugPlay;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayEventSeByRowName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SeName                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ASoundManagerBP_C::RequestPlayEventSeByRowName(const class FString& SeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayEventSeByRowName");

	Params::ASoundManagerBP_C_RequestPlayEventSeByRowName_Params Parms{};

	Parms.SeName = SeName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.ApplyBgmSelector
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAtomComponent*              AtomComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::ApplyBgmSelector(class UAtomComponent* AtomComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "ApplyBgmSelector");

	Params::ASoundManagerBP_C_ApplyBgmSelector_Params Parms{};

	Parms.AtomComponent = AtomComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.SetBgmSelector
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SelectorName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SelectorLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::SetBgmSelector(class FName SelectorName, class FName SelectorLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "SetBgmSelector");

	Params::ASoundManagerBP_C_SetBgmSelector_Params Parms{};

	Parms.SelectorName = SelectorName;
	Parms.SelectorLabel = SelectorLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayBgmByLabel
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSoundData                  BeforSoundData                                                   (Parm, OutParm, ContainsInstancedReference)

void ASoundManagerBP_C::RequestPlayBgmByLabel(class FName BgmLabel, int32 Priority, bool* Success, struct FSoundData* BeforSoundData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayBgmByLabel");

	Params::ASoundManagerBP_C_RequestPlayBgmByLabel_Params Parms{};

	Parms.BgmLabel = BgmLabel;
	Parms.Priority = Priority;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (BeforSoundData != nullptr)
		*BeforSoundData = std::move(Parms.BeforSoundData);

}


// Function SoundManagerBP.SoundManagerBP_C.RefreshCharacterVoiceResource
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                TempCharaVoices                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RefreshCharacterVoiceResource(TArray<class FName>& TempCharaVoices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RefreshCharacterVoiceResource");

	Params::ASoundManagerBP_C_RefreshCharacterVoiceResource_Params Parms{};

	Parms.TempCharaVoices = TempCharaVoices;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayEventSeByLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SELabel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::RequestPlayEventSeByLabel(class FName SELabel, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayEventSeByLabel");

	Params::ASoundManagerBP_C_RequestPlayEventSeByLabel_Params Parms{};

	Parms.SELabel = SELabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function SoundManagerBP.SoundManagerBP_C.ChangeNextBgmFadeInTime
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::ChangeNextBgmFadeInTime(float FadeIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "ChangeNextBgmFadeInTime");

	Params::ASoundManagerBP_C_ChangeNextBgmFadeInTime_Params Parms{};

	Parms.FadeIn = FadeIn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.ChangeCurrentBgmFadeOutTime
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeOut                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::ChangeCurrentBgmFadeOutTime(float FadeOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "ChangeCurrentBgmFadeOutTime");

	Params::ASoundManagerBP_C_ChangeCurrentBgmFadeOutTime_Params Parms{};

	Parms.FadeOut = FadeOut;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayBattleSeByLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SELabel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::RequestPlayBattleSeByLabel(class FName SELabel, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayBattleSeByLabel");

	Params::ASoundManagerBP_C_RequestPlayBattleSeByLabel_Params Parms{};

	Parms.SELabel = SELabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayBattleVoiceByLabel
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        VoiceLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CueName                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// float                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::RequestPlayBattleVoiceByLabel(class FName VoiceLabel, bool* Success, class FString* CueName, float* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayBattleVoiceByLabel");

	Params::ASoundManagerBP_C_RequestPlayBattleVoiceByLabel_Params Parms{};

	Parms.VoiceLabel = VoiceLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CueName != nullptr)
		*CueName = std::move(Parms.CueName);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function SoundManagerBP.SoundManagerBP_C.GetCurrentBgmData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSoundData                  PlayingBgmData                                                   (Parm, OutParm, ContainsInstancedReference)

void ASoundManagerBP_C::GetCurrentBgmData(struct FSoundData* PlayingBgmData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "GetCurrentBgmData");

	Params::ASoundManagerBP_C_GetCurrentBgmData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PlayingBgmData != nullptr)
		*PlayingBgmData = std::move(Parms.PlayingBgmData);

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayBgmById
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BGMID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSoundData                  BeforSoundData                                                   (Parm, OutParm, ContainsInstancedReference)

void ASoundManagerBP_C::RequestPlayBgmById(int32 BGMID, int32 Priority, bool* Success, struct FSoundData* BeforSoundData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayBgmById");

	Params::ASoundManagerBP_C_RequestPlayBgmById_Params Parms{};

	Parms.BGMID = BGMID;
	Parms.Priority = Priority;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (BeforSoundData != nullptr)
		*BeforSoundData = std::move(Parms.BeforSoundData);

}


// Function SoundManagerBP.SoundManagerBP_C.RequestStopLoopSe
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HandleId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestStopLoopSe(int32 HandleId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestStopLoopSe");

	Params::ASoundManagerBP_C_RequestStopLoopSe_Params Parms{};

	Parms.HandleId = HandleId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayLoopSe
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HandleId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SELabel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestPlayLoopSe(int32 HandleId, class FName SELabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayLoopSe");

	Params::ASoundManagerBP_C_RequestPlayLoopSe_Params Parms{};

	Parms.HandleId = HandleId;
	Parms.SELabel = SELabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.GetLoopSeHandle
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HandleId                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::GetLoopSeHandle(int32* HandleId, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "GetLoopSeHandle");

	Params::ASoundManagerBP_C_GetLoopSeHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HandleId != nullptr)
		*HandleId = Parms.HandleId;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function SoundManagerBP.SoundManagerBP_C.ApplyEnvVolume
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::ApplyEnvVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "ApplyEnvVolume");

	Params::ASoundManagerBP_C_ApplyEnvVolume_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.OnLevelShown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::OnLevelShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "OnLevelShown");

	Params::ASoundManagerBP_C_OnLevelShown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestStopBGM
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestStopBGM()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestStopBGM");

	Params::ASoundManagerBP_C_RequestStopBGM_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.UpdateEnvSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::UpdateEnvSound(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "UpdateEnvSound");

	Params::ASoundManagerBP_C_UpdateEnvSound_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.GetCurrentBgmLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ASoundManagerBP_C::GetCurrentBgmLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "GetCurrentBgmLabel");

	Params::ASoundManagerBP_C_GetCurrentBgmLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.ResetVoiceVolume
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::ResetVoiceVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "ResetVoiceVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.GetCueSheetAssetPath
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CueSheetName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OutAssetPath                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::GetCueSheetAssetPath(class FName CueSheetName, class FName* OutAssetPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "GetCueSheetAssetPath");

	Params::ASoundManagerBP_C_GetCueSheetAssetPath_Params Parms{};

	Parms.CueSheetName = CueSheetName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutAssetPath != nullptr)
		*OutAssetPath = Parms.OutAssetPath;

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlaySeByLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SELabel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestPlaySeByLabel(class FName SELabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlaySeByLabel");

	Params::ASoundManagerBP_C_RequestPlaySeByLabel_Params Parms{};

	Parms.SELabel = SELabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.InitForSwitch
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::InitForSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "InitForSwitch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.StopVoice
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::StopVoice(float FadeOutTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "StopVoice");

	Params::ASoundManagerBP_C_StopVoice_Params Parms{};

	Parms.FadeOutTime = FadeOutTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayVoiceByLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        VoiceLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestPlayVoiceByLabel(class FName VoiceLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayVoiceByLabel");

	Params::ASoundManagerBP_C_RequestPlayVoiceByLabel_Params Parms{};

	Parms.VoiceLabel = VoiceLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.ApplyBgmBlockIndex
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAtomComponent*              AtomComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::ApplyBgmBlockIndex(class UAtomComponent* AtomComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "ApplyBgmBlockIndex");

	Params::ASoundManagerBP_C_ApplyBgmBlockIndex_Params Parms{};

	Parms.AtomComponent = AtomComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.Request Play Event Se by Label_OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SELabel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::Request_Play_Event_Se_by_Label_OLD(class FName SELabel, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "Request Play Event Se by Label_OLD");

	Params::ASoundManagerBP_C_Request_Play_Event_Se_by_Label_OLD_Params Parms{};

	Parms.SELabel = SELabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlay3DSeWithComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAtomComponent*              Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestPlay3DSeWithComponent(class UAtomComponent* Component, class FName BgmLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlay3DSeWithComponent");

	Params::ASoundManagerBP_C_RequestPlay3DSeWithComponent_Params Parms{};

	Parms.Component = Component;
	Parms.BgmLabel = BgmLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.SetDspBusToEnvSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSDspBusType           DspBusType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::SetDspBusToEnvSound(enum class EKSDspBusType DspBusType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "SetDspBusToEnvSound");

	Params::ASoundManagerBP_C_SetDspBusToEnvSound_Params Parms{};

	Parms.DspBusType = DspBusType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.ChangeNextBgmFadeInTime_OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::ChangeNextBgmFadeInTime_OLD(float FadeIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "ChangeNextBgmFadeInTime_OLD");

	Params::ASoundManagerBP_C_ChangeNextBgmFadeInTime_OLD_Params Parms{};

	Parms.FadeIn = FadeIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.SetCategoryVolumeByName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CategoryName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::SetCategoryVolumeByName(const class FString& CategoryName, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "SetCategoryVolumeByName");

	Params::ASoundManagerBP_C_SetCategoryVolumeByName_Params Parms{};

	Parms.CategoryName = CategoryName;
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.CancelInterrupt
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::CancelInterrupt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "CancelInterrupt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.SetBgmNextBlockIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BlockIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::SetBgmNextBlockIndex(int32 BlockIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "SetBgmNextBlockIndex");

	Params::ASoundManagerBP_C_SetBgmNextBlockIndex_Params Parms{};

	Parms.BlockIndex = BlockIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayBgmByLabel_Inner
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInterrupt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsDebugForcePlay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestPlayBgmByLabel_Inner(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool IsInterrupt, bool IsDebugForcePlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayBgmByLabel_Inner");

	Params::ASoundManagerBP_C_RequestPlayBgmByLabel_Inner_Params Parms{};

	Parms.BgmLabel = BgmLabel;
	Parms.FadeOutTime = FadeOutTime;
	Parms.FadeInTime = FadeInTime;
	Parms.Priority = Priority;
	Parms.IsInterrupt = IsInterrupt;
	Parms.IsDebugForcePlay = IsDebugForcePlay;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.Debug_ShowBgmState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::Debug_ShowBgmState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "Debug_ShowBgmState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.Debug_ShowBgmSoundData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Header                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSoundData                  PlaySoundData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ASoundManagerBP_C::Debug_ShowBgmSoundData(const class FString& Header, struct FSoundData& PlaySoundData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "Debug_ShowBgmSoundData");

	Params::ASoundManagerBP_C_Debug_ShowBgmSoundData_Params Parms{};

	Parms.Header = Header;
	Parms.PlaySoundData = PlaySoundData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.ResetPlayBgmData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundData                  PlayBgmData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ASoundManagerBP_C::ResetPlayBgmData(struct FSoundData& PlayBgmData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "ResetPlayBgmData");

	Params::ASoundManagerBP_C_ResetPlayBgmData_Params Parms{};

	Parms.PlayBgmData = PlayBgmData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.UpdateFadeIn
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundData                  CurrentSoundData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               IsEnd                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::UpdateFadeIn(struct FSoundData& CurrentSoundData, bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "UpdateFadeIn");

	Params::ASoundManagerBP_C_UpdateFadeIn_Params Parms{};

	Parms.CurrentSoundData = CurrentSoundData;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;

}


// Function SoundManagerBP.SoundManagerBP_C.UpdateFadeOut
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundData                  CurrentSoundData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               IsEnd                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::UpdateFadeOut(struct FSoundData& CurrentSoundData, bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "UpdateFadeOut");

	Params::ASoundManagerBP_C_UpdateFadeOut_Params Parms{};

	Parms.CurrentSoundData = CurrentSoundData;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;

}


// Function SoundManagerBP.SoundManagerBP_C.UpdateChangeBGM
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundData                  PlayBgmData_Current                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FSoundData                  PlayBgmData_Next                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ASoundManagerBP_C::UpdateChangeBGM(struct FSoundData& PlayBgmData_Current, struct FSoundData& PlayBgmData_Next)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "UpdateChangeBGM");

	Params::ASoundManagerBP_C_UpdateChangeBGM_Params Parms{};

	Parms.PlayBgmData_Current = PlayBgmData_Current;
	Parms.PlayBgmData_Next = PlayBgmData_Next;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.UpdateTick
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta_Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::UpdateTick(float Delta_Seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "UpdateTick");

	Params::ASoundManagerBP_C_UpdateTick_Params Parms{};

	Parms.Delta_Seconds = Delta_Seconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayInterruptBgmByLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestPlayInterruptBgmByLabel(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayInterruptBgmByLabel");

	Params::ASoundManagerBP_C_RequestPlayInterruptBgmByLabel_Params Parms{};

	Parms.BgmLabel = BgmLabel;
	Parms.FadeOutTime = FadeOutTime;
	Parms.FadeInTime = FadeInTime;
	Parms.Priority = Priority;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.OnExitHouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::OnExitHouse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "OnExitHouse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.OnEnterHouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::OnEnterHouse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "OnEnterHouse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.Debug_Tick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::Debug_Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "Debug_Tick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.Debug Show Env Sound Info_OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::Debug_Show_Env_Sound_Info_OLD(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "Debug Show Env Sound Info_OLD");

	Params::ASoundManagerBP_C_Debug_Show_Env_Sound_Info_OLD_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.PauseEnvSoundAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPause                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::PauseEnvSoundAll(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "PauseEnvSoundAll");

	Params::ASoundManagerBP_C_PauseEnvSoundAll_Params Parms{};

	Parms.bPause = bPause;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.CollectEnvSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::CollectEnvSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "CollectEnvSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.RequestStopFadeBgm
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               StopBoth                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestStopFadeBgm(float FadeOutTime, bool StopBoth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestStopFadeBgm");

	Params::ASoundManagerBP_C_RequestStopFadeBgm_Params Parms{};

	Parms.FadeOutTime = FadeOutTime;
	Parms.StopBoth = StopBoth;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.RequestPlayFadeBgmByLabel
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsDebugPlay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundManagerBP_C::RequestPlayFadeBgmByLabel(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RequestPlayFadeBgmByLabel");

	Params::ASoundManagerBP_C_RequestPlayFadeBgmByLabel_Params Parms{};

	Parms.BgmLabel = BgmLabel;
	Parms.FadeOutTime = FadeOutTime;
	Parms.FadeInTime = FadeInTime;
	Parms.Priority = Priority;
	Parms.bIsDebugPlay = bIsDebugPlay;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.GetVoiceCue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        VoiceLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAtomCue*               SoundCue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CueSheetName                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::GetVoiceCue(class FName VoiceLabel, class USoundAtomCue** SoundCue, class FName* CueSheetName, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "GetVoiceCue");

	Params::ASoundManagerBP_C_GetVoiceCue_Params Parms{};

	Parms.VoiceLabel = VoiceLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (SoundCue != nullptr)
		*SoundCue = Parms.SoundCue;

	if (CueSheetName != nullptr)
		*CueSheetName = Parms.CueSheetName;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function SoundManagerBP.SoundManagerBP_C.PlayVoiceFromCue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*               Voice_Cue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::PlayVoiceFromCue(class USoundAtomCue* Voice_Cue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "PlayVoiceFromCue");

	Params::ASoundManagerBP_C_PlayVoiceFromCue_Params Parms{};

	Parms.Voice_Cue = Voice_Cue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.RestoreSeVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::RestoreSeVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RestoreSeVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.RestoreBgmVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::RestoreBgmVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "RestoreBgmVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.SetSeVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::SetSeVolume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "SetSeVolume");

	Params::ASoundManagerBP_C_SetSeVolume_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.SetBgmVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::SetBgmVolume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "SetBgmVolume");

	Params::ASoundManagerBP_C_SetBgmVolume_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.StopAllLoopSe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::StopAllLoopSe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "StopAllLoopSe");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.GetBGMDataById
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BGMID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFound                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        BgmLabel                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Out_Row_ID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAtomCue*               GetSound                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::GetBGMDataById(int32 BGMID, bool* IsFound, class FName* BgmLabel, int32* Out_Row_ID, class USoundAtomCue** GetSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "GetBGMDataById");

	Params::ASoundManagerBP_C_GetBGMDataById_Params Parms{};

	Parms.BGMID = BGMID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFound != nullptr)
		*IsFound = Parms.IsFound;

	if (BgmLabel != nullptr)
		*BgmLabel = Parms.BgmLabel;

	if (Out_Row_ID != nullptr)
		*Out_Row_ID = Parms.Out_Row_ID;

	if (GetSound != nullptr)
		*GetSound = Parms.GetSound;

}


// Function SoundManagerBP.SoundManagerBP_C.GetBGMDataByLabel
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFound                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Out_Row_ID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAtomCue*               GetSound                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ASoundManagerBP_C::GetBGMDataByLabel(class FName BgmLabel, bool* IsFound, int32* Out_Row_ID, class USoundAtomCue** GetSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "GetBGMDataByLabel");

	Params::ASoundManagerBP_C_GetBGMDataByLabel_Params Parms{};

	Parms.BgmLabel = BgmLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFound != nullptr)
		*IsFound = Parms.IsFound;

	if (Out_Row_ID != nullptr)
		*Out_Row_ID = Parms.Out_Row_ID;

	if (GetSound != nullptr)
		*GetSound = Parms.GetSound;

	return Parms.ReturnValue;

}


// Function SoundManagerBP.SoundManagerBP_C.GetSECue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SELabel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAtomCue*               SoundCue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CueSheetName                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::GetSECue(class FName SELabel, class USoundAtomCue** SoundCue, class FName* CueSheetName, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "GetSECue");

	Params::ASoundManagerBP_C_GetSECue_Params Parms{};

	Parms.SELabel = SELabel;

	UObject::ProcessEvent(Func, &Parms);

	if (SoundCue != nullptr)
		*SoundCue = Parms.SoundCue;

	if (CueSheetName != nullptr)
		*CueSheetName = Parms.CueSheetName;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function SoundManagerBP.SoundManagerBP_C.SetChangeBGM
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundData                  NextChangeBgm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ASoundManagerBP_C::SetChangeBGM(const struct FSoundData& NextChangeBgm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "SetChangeBGM");

	Params::ASoundManagerBP_C_SetChangeBGM_Params Parms{};

	Parms.NextChangeBgm = NextChangeBgm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.SetupBGM
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*               Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BGMID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOut_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInterrupt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPlayedMusicRecord                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSoundData                  SoundData                                                        (Parm, OutParm, ContainsInstancedReference)

void ASoundManagerBP_C::SetupBGM(class USoundAtomCue* Sound, class FName BgmLabel, int32 BGMID, float FadeIn, float FadeOut_, float Volume, int32 Priority, float Time, bool IsInterrupt, bool IsPlayedMusicRecord, struct FSoundData* SoundData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "SetupBGM");

	Params::ASoundManagerBP_C_SetupBGM_Params Parms{};

	Parms.Sound = Sound;
	Parms.BgmLabel = BgmLabel;
	Parms.BGMID = BGMID;
	Parms.FadeIn = FadeIn;
	Parms.FadeOut_ = FadeOut_;
	Parms.Volume = Volume;
	Parms.Priority = Priority;
	Parms.Time = Time;
	Parms.IsInterrupt = IsInterrupt;
	Parms.IsPlayedMusicRecord = IsPlayedMusicRecord;

	UObject::ProcessEvent(Func, &Parms);

	if (SoundData != nullptr)
		*SoundData = std::move(Parms.SoundData);

}


// Function SoundManagerBP.SoundManagerBP_C.OnBeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASoundManagerBP_C::OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManagerBP.SoundManagerBP_C.UpdateManager
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::UpdateManager(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "UpdateManager");

	Params::ASoundManagerBP_C_UpdateManager_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.InitLastPlayeNormalBGM
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASoundManagerBP_C::InitLastPlayeNormalBGM(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "InitLastPlayeNormalBGM");

	Params::ASoundManagerBP_C_InitLastPlayeNormalBGM_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.PauseEnvGaya
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bBattle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bEvent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::PauseEnvGaya(bool bBattle, bool bEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "PauseEnvGaya");

	Params::ASoundManagerBP_C_PauseEnvGaya_Params Parms{};

	Parms.bBattle = bBattle;
	Parms.bEvent = bEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.ResumeEnvGaya
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bBattle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bEvent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundManagerBP_C::ResumeEnvGaya(bool bBattle, bool bEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "ResumeEnvGaya");

	Params::ASoundManagerBP_C_ResumeEnvGaya_Params Parms{};

	Parms.bBattle = bBattle;
	Parms.bEvent = bEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundManagerBP.SoundManagerBP_C.ExecuteUbergraph_SoundManagerBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundManagerBP_C::ExecuteUbergraph_SoundManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundManagerBP_C", "ExecuteUbergraph_SoundManagerBP");

	Params::ASoundManagerBP_C_ExecuteUbergraph_SoundManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


