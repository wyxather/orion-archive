#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibSound.LibSound_C
// (None)

class UClass* ULibSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibSound_C");

	return Clss;
}


// LibSound_C LibSound.Default__LibSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibSound_C* ULibSound_C::GetDefaultObj()
{
	static class ULibSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibSound_C*>(ULibSound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibSound.LibSound_C.StopVoice
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibSound_C::StopVoice(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibSound_C", "StopVoice");

	Params::ULibSound_C_StopVoice_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibSound.LibSound_C.PlayMapBGM
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibSound_C::PlayMapBGM(float FadeOutTime, float FadeInTime, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibSound_C", "PlayMapBGM");

	Params::ULibSound_C_PlayMapBGM_Params Parms{};

	Parms.FadeOutTime = FadeOutTime;
	Parms.FadeInTime = FadeInTime;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibSound.LibSound_C.PlayVoiceByLabel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        SELabel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibSound_C::PlayVoiceByLabel(class FName SELabel, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibSound_C", "PlayVoiceByLabel");

	Params::ULibSound_C_PlayVoiceByLabel_Params Parms{};

	Parms.SELabel = SELabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibSound.LibSound_C.StopLoopSe
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HandleId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibSound_C::StopLoopSe(int32 HandleId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibSound_C", "StopLoopSe");

	Params::ULibSound_C_StopLoopSe_Params Parms{};

	Parms.HandleId = HandleId;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibSound.LibSound_C.PlayLoopSeByLabel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SELabel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HandleId                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibSound_C::PlayLoopSeByLabel(class FName SELabel, class UObject* __WorldContext, int32* HandleId, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibSound_C", "PlayLoopSeByLabel");

	Params::ULibSound_C_PlayLoopSeByLabel_Params Parms{};

	Parms.SELabel = SELabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HandleId != nullptr)
		*HandleId = Parms.HandleId;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibSound.LibSound_C.PlayMenuSe
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMENU_SE_TYPE           SeType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibSound_C::PlayMenuSe(enum class EMENU_SE_TYPE SeType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibSound_C", "PlayMenuSe");

	Params::ULibSound_C_PlayMenuSe_Params Parms{};

	Parms.SeType = SeType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibSound.LibSound_C.StopBgm
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibSound_C::StopBgm(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibSound_C", "StopBgm");

	Params::ULibSound_C_StopBgm_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibSound.LibSound_C.PlaySeById
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              SEID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibSound_C::PlaySeById(int32 SEID, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibSound_C", "PlaySeById");

	Params::ULibSound_C_PlaySeById_Params Parms{};

	Parms.SEID = SEID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibSound.LibSound_C.PlayBgmById
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              BGMID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSoundData                  BeforSoundData                                                   (Parm, OutParm, ContainsInstancedReference)

void ULibSound_C::PlayBgmById(int32 BGMID, int32 Priority, class UObject* __WorldContext, bool* Success, struct FSoundData* BeforSoundData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibSound_C", "PlayBgmById");

	Params::ULibSound_C_PlayBgmById_Params Parms{};

	Parms.BGMID = BGMID;
	Parms.Priority = Priority;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (BeforSoundData != nullptr)
		*BeforSoundData = std::move(Parms.BeforSoundData);

}


// Function LibSound.LibSound_C.PlayBgmByLabel
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        BgmLable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSoundData                  BeforSoundData                                                   (Parm, OutParm, ContainsInstancedReference)

void ULibSound_C::PlayBgmByLabel(class FName BgmLable, int32 Priority, class UObject* __WorldContext, bool* Success, struct FSoundData* BeforSoundData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibSound_C", "PlayBgmByLabel");

	Params::ULibSound_C_PlayBgmByLabel_Params Parms{};

	Parms.BgmLable = BgmLable;
	Parms.Priority = Priority;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (BeforSoundData != nullptr)
		*BeforSoundData = std::move(Parms.BeforSoundData);

}

}


