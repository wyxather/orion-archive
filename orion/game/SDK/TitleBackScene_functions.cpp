#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass TitleBackScene.TitleBackScene_C
// (None)

class UClass* UTitleBackScene_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleBackScene_C");

	return Clss;
}


// TitleBackScene_C TitleBackScene.Default__TitleBackScene_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitleBackScene_C* UTitleBackScene_C::GetDefaultObj()
{
	static class UTitleBackScene_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitleBackScene_C*>(UTitleBackScene_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitleBackScene.TitleBackScene_C.SetIsLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleBackScene_C::SetIsLoop(bool IsLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "SetIsLoop");

	Params::UTitleBackScene_C_SetIsLoop_Params Parms{};

	Parms.IsLoop = IsLoop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleBackScene.TitleBackScene_C.GetIsLoop
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLoop                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleBackScene_C::GetIsLoop(bool* IsLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "GetIsLoop");

	Params::UTitleBackScene_C_GetIsLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsLoop != nullptr)
		*IsLoop = Parms.IsLoop;

}


// Function TitleBackScene.TitleBackScene_C.Debug_PrintCurrentTime
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::Debug_PrintCurrentTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "Debug_PrintCurrentTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.GetPlayMovieListNight
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UManaTexture*>        ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UManaTexture*> UTitleBackScene_C::GetPlayMovieListNight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "GetPlayMovieListNight");

	Params::UTitleBackScene_C_GetPlayMovieListNight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackScene.TitleBackScene_C.GetPlayMovieListDay
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UManaTexture*>        ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UManaTexture*> UTitleBackScene_C::GetPlayMovieListDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "GetPlayMovieListDay");

	Params::UTitleBackScene_C_GetPlayMovieListDay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackScene.TitleBackScene_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.Pause
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "Pause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.IsAllPlayerPlaying
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleBackScene_C::IsAllPlayerPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "IsAllPlayerPlaying");

	Params::UTitleBackScene_C_IsAllPlayerPlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackScene.TitleBackScene_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.Debug_StateLog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::Debug_StateLog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "Debug_StateLog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.IsAllPlayerStoped
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleBackScene_C::IsAllPlayerStoped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "IsAllPlayerStoped");

	Params::UTitleBackScene_C_IsAllPlayerStoped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackScene.TitleBackScene_C.Stop
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.IsAnyPlayerEndPlay
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleBackScene_C::IsAnyPlayerEndPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "IsAnyPlayerEndPlay");

	Params::UTitleBackScene_C_IsAnyPlayerEndPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackScene.TitleBackScene_C.Prepare
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::Prepare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "Prepare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.Set Movie
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleBackScene_C::Set_Movie(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "Set Movie");

	Params::UTitleBackScene_C_Set_Movie_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleBackScene.TitleBackScene_C.SeekMovie
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FrameNumber                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleBackScene_C::SeekMovie(int32 FrameNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "SeekMovie");

	Params::UTitleBackScene_C_SeekMovie_Params Parms{};

	Parms.FrameNumber = FrameNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleBackScene.TitleBackScene_C.PlayMovie
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::PlayMovie()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "PlayMovie");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.IsChangingTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleBackScene_C::IsChangingTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "IsChangingTime");

	Params::UTitleBackScene_C_IsChangingTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackScene.TitleBackScene_C.IsCreatedPlayers
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleBackScene_C::IsCreatedPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "IsCreatedPlayers");

	Params::UTitleBackScene_C_IsCreatedPlayers_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackScene.TitleBackScene_C.ChangeMovie
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETimeZoneType           Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsTimeChanged                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleBackScene_C::ChangeMovie(enum class ETimeZoneType Time, bool IsFast, bool* IsTimeChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "ChangeMovie");

	Params::UTitleBackScene_C_ChangeMovie_Params Parms{};

	Parms.Time = Time;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (IsTimeChanged != nullptr)
		*IsTimeChanged = Parms.IsTimeChanged;

}


// Function TitleBackScene.TitleBackScene_C.IsAllPlayerPrepared
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleBackScene_C::IsAllPlayerPrepared()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "IsAllPlayerPrepared");

	Params::UTitleBackScene_C_IsAllPlayerPrepared_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackScene.TitleBackScene_C.IsAllPlayerValid
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleBackScene_C::IsAllPlayerValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "IsAllPlayerValid");

	Params::UTitleBackScene_C_IsAllPlayerValid_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackScene.TitleBackScene_C.IsAllPlayerWaiting
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleBackScene_C::IsAllPlayerWaiting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "IsAllPlayerWaiting");

	Params::UTitleBackScene_C_IsAllPlayerWaiting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackScene.TitleBackScene_C.DestoryPlayer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::DestoryPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "DestoryPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.CreatePlayer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::CreatePlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "CreatePlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.ShowExSymbol
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::ShowExSymbol()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "ShowExSymbol");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleBackScene_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackScene.TitleBackScene_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETimeZoneType           Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleBackScene_C::Start(enum class ETimeZoneType Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackScene_C", "Start");

	Params::UTitleBackScene_C_Start_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}

}


