#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// Class CriWareMovieScenes.MovieSceneAtomSection
// (None)

class UClass* UMovieSceneAtomSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAtomSection");

	return Clss;
}


// MovieSceneAtomSection CriWareMovieScenes.Default__MovieSceneAtomSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAtomSection* UMovieSceneAtomSection::GetDefaultObj()
{
	static class UMovieSceneAtomSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAtomSection*>(UMovieSceneAtomSection::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareMovieScenes.MovieSceneAtomSection.SetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InStartOffset                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAtomSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MovieSceneAtomSection", "SetStartOffset");

	Params::UMovieSceneAtomSection_SetStartOffset_Params Parms{};

	Parms.InStartOffset = InStartOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareMovieScenes.MovieSceneAtomSection.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneAtomSection::IsLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MovieSceneAtomSection", "IsLooping");

	Params::UMovieSceneAtomSection_IsLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareMovieScenes.MovieSceneAtomSection.GetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameNumber                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UMovieSceneAtomSection::GetStartOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MovieSceneAtomSection", "GetStartOffset");

	Params::UMovieSceneAtomSection_GetStartOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareMovieScenes.MovieSceneAtomTrack
// (None)

class UClass* UMovieSceneAtomTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAtomTrack");

	return Clss;
}


// MovieSceneAtomTrack CriWareMovieScenes.Default__MovieSceneAtomTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAtomTrack* UMovieSceneAtomTrack::GetDefaultObj()
{
	static class UMovieSceneAtomTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAtomTrack*>(UMovieSceneAtomTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareMovieScenes.MovieSceneManaSection
// (None)

class UClass* UMovieSceneManaSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneManaSection");

	return Clss;
}


// MovieSceneManaSection CriWareMovieScenes.Default__MovieSceneManaSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneManaSection* UMovieSceneManaSection::GetDefaultObj()
{
	static class UMovieSceneManaSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneManaSection*>(UMovieSceneManaSection::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareMovieScenes.MovieSceneManaTrack
// (None)

class UClass* UMovieSceneManaTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneManaTrack");

	return Clss;
}


// MovieSceneManaTrack CriWareMovieScenes.Default__MovieSceneManaTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneManaTrack* UMovieSceneManaTrack::GetDefaultObj()
{
	static class UMovieSceneManaTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneManaTrack*>(UMovieSceneManaTrack::StaticClass()->DefaultObject);

	return Default;
}

}


