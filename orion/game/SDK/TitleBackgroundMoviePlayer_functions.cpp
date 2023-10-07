#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C
// (Actor)

class UClass* ATitleBackgroundMoviePlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleBackgroundMoviePlayer_C");

	return Clss;
}


// TitleBackgroundMoviePlayer_C TitleBackgroundMoviePlayer.Default__TitleBackgroundMoviePlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATitleBackgroundMoviePlayer_C* ATitleBackgroundMoviePlayer_C::GetDefaultObj()
{
	static class ATitleBackgroundMoviePlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATitleBackgroundMoviePlayer_C*>(ATitleBackgroundMoviePlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.GetCurrentTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Current                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Total                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATitleBackgroundMoviePlayer_C::GetCurrentTime(float* Current, float* Total)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "GetCurrentTime");

	Params::ATitleBackgroundMoviePlayer_C_GetCurrentTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Current != nullptr)
		*Current = Parms.Current;

	if (Total != nullptr)
		*Total = Parms.Total;

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.GetCurrentFrame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ATitleBackgroundMoviePlayer_C::GetCurrentFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "GetCurrentFrame");

	Params::ATitleBackgroundMoviePlayer_C_GetCurrentFrame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.Prepare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATitleBackgroundMoviePlayer_C::Prepare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "Prepare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.Seek
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FrameNumber                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATitleBackgroundMoviePlayer_C::Seek(int32 FrameNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "Seek");

	Params::ATitleBackgroundMoviePlayer_C_Seek_Params Parms{};

	Parms.FrameNumber = FrameNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.TogglePause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATitleBackgroundMoviePlayer_C::TogglePause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "TogglePause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.IsPaused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ATitleBackgroundMoviePlayer_C::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "IsPaused");

	Params::ATitleBackgroundMoviePlayer_C_IsPaused_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.Pause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPause                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATitleBackgroundMoviePlayer_C::Pause(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "Pause");

	Params::ATitleBackgroundMoviePlayer_C_Pause_Params Parms{};

	Parms.bPause = bPause;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATitleBackgroundMoviePlayer_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.IsWailting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ATitleBackgroundMoviePlayer_C::IsWailting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "IsWailting");

	Params::ATitleBackgroundMoviePlayer_C_IsWailting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.IsPrepared
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ATitleBackgroundMoviePlayer_C::IsPrepared()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "IsPrepared");

	Params::ATitleBackgroundMoviePlayer_C_IsPrepared_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.PlayPreparedMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATitleBackgroundMoviePlayer_C::PlayPreparedMovie()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "PlayPreparedMovie");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.SetMovie
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlaylistIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATitleBackgroundMoviePlayer_C::SetMovie(int32 PlaylistIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "SetMovie");

	Params::ATitleBackgroundMoviePlayer_C_SetMovie_Params Parms{};

	Parms.PlaylistIndex = PlaylistIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.SetPlayList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UManaTexture*>        MovieList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATitleBackgroundMoviePlayer_C::SetPlayList(TArray<class UManaTexture*>& MovieList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "SetPlayList");

	Params::ATitleBackgroundMoviePlayer_C_SetPlayList_Params Parms{};

	Parms.MovieList = MovieList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleBackgroundMoviePlayer.TitleBackgroundMoviePlayer_C.SetImageWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPureImage*                  ImageWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATitleBackgroundMoviePlayer_C::SetImageWidget(class UPureImage* ImageWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleBackgroundMoviePlayer_C", "SetImageWidget");

	Params::ATitleBackgroundMoviePlayer_C_SetImageWidget_Params Parms{};

	Parms.ImageWidget = ImageWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


