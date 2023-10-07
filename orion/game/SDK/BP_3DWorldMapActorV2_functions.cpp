#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C
// (Actor)

class UClass* ABP_3DWorldMapActorV2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_3DWorldMapActorV2_C");

	return Clss;
}


// BP_3DWorldMapActorV2_C BP_3DWorldMapActorV2.Default__BP_3DWorldMapActorV2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_3DWorldMapActorV2_C* ABP_3DWorldMapActorV2_C::GetDefaultObj()
{
	static class ABP_3DWorldMapActorV2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_3DWorldMapActorV2_C*>(ABP_3DWorldMapActorV2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.SwitchCameraToField_FromSequencer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::SwitchCameraToField_FromSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "SwitchCameraToField_FromSequencer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.SwitchCameraToField
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::SwitchCameraToField()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "SwitchCameraToField");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.SwitchCameraToWorldmap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::SwitchCameraToWorldmap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "SwitchCameraToWorldmap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.SwitchCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCameraType           SwitchTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::SwitchCamera(enum class EKSCameraType SwitchTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "SwitchCamera");

	Params::ABP_3DWorldMapActorV2_C_SwitchCamera_Params Parms{};

	Parms.SwitchTarget = SwitchTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingTimeZoneSequencer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_3DWorldMapActorV2_C::IsPlayingTimeZoneSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "IsPlayingTimeZoneSequencer");

	Params::ABP_3DWorldMapActorV2_C_IsPlayingTimeZoneSequencer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingZoomSequencer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_3DWorldMapActorV2_C::IsPlayingZoomSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "IsPlayingZoomSequencer");

	Params::ABP_3DWorldMapActorV2_C_IsPlayingZoomSequencer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingAnySequencer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_3DWorldMapActorV2_C::IsPlayingAnySequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "IsPlayingAnySequencer");

	Params::ABP_3DWorldMapActorV2_C_IsPlayingAnySequencer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetClosePlayerSelectSequencerDuration
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_3DWorldMapActorV2_C::GetClosePlayerSelectSequencerDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetClosePlayerSelectSequencerDuration");

	Params::ABP_3DWorldMapActorV2_C_GetClosePlayerSelectSequencerDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingClosePlayerSelectSequencer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_3DWorldMapActorV2_C::IsPlayingClosePlayerSelectSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "IsPlayingClosePlayerSelectSequencer");

	Params::ABP_3DWorldMapActorV2_C_IsPlayingClosePlayerSelectSequencer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.PlayClosePlayerSelectSequencer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::PlayClosePlayerSelectSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "PlayClosePlayerSelectSequencer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingOpenPlayerSelectSequencer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_3DWorldMapActorV2_C::IsPlayingOpenPlayerSelectSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "IsPlayingOpenPlayerSelectSequencer");

	Params::ABP_3DWorldMapActorV2_C_IsPlayingOpenPlayerSelectSequencer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.PlayOpenPlayerSelectSequencer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::PlayOpenPlayerSelectSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "PlayOpenPlayerSelectSequencer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingCloseSequencer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_3DWorldMapActorV2_C::IsPlayingCloseSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "IsPlayingCloseSequencer");

	Params::ABP_3DWorldMapActorV2_C_IsPlayingCloseSequencer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.PlayCloseSequencer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::PlayCloseSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "PlayCloseSequencer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingOpenSequencer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_3DWorldMapActorV2_C::IsPlayingOpenSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "IsPlayingOpenSequencer");

	Params::ABP_3DWorldMapActorV2_C_IsPlayingOpenSequencer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.PlayOpenSequencer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::PlayOpenSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "PlayOpenSequencer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetPrevZoomState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWorldMapZoomType       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EWorldMapZoomType ABP_3DWorldMapActorV2_C::GetPrevZoomState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetPrevZoomState");

	Params::ABP_3DWorldMapActorV2_C_GetPrevZoomState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetNextZoomState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWorldMapZoomType       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EWorldMapZoomType ABP_3DWorldMapActorV2_C::GetNextZoomState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetNextZoomState");

	Params::ABP_3DWorldMapActorV2_C_GetNextZoomState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetZoomAlpha
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_3DWorldMapActorV2_C::GetZoomAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetZoomAlpha");

	Params::ABP_3DWorldMapActorV2_C_GetZoomAlpha_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.SetGlobeLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NewLocation                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OutClanpedNewLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::SetGlobeLocation(struct FVector& NewLocation, struct FVector* OutClanpedNewLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "SetGlobeLocation");

	Params::ABP_3DWorldMapActorV2_C_SetGlobeLocation_Params Parms{};

	Parms.NewLocation = NewLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (OutClanpedNewLocation != nullptr)
		*OutClanpedNewLocation = std::move(Parms.OutClanpedNewLocation);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetGlobeLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_3DWorldMapActorV2_C::GetGlobeLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetGlobeLocation");

	Params::ABP_3DWorldMapActorV2_C_GetGlobeLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.ScrubToSeconds
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMovieSceneSequencePlayer*   SequencerPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::ScrubToSeconds(class UMovieSceneSequencePlayer* SequencerPlayer, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "ScrubToSeconds");

	Params::ABP_3DWorldMapActorV2_C_ScrubToSeconds_Params Parms{};

	Parms.SequencerPlayer = SequencerPlayer;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.ScrubToFrame
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMovieSceneSequencePlayer*   SequencerPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFrameTime                  Frame                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::ScrubToFrame(class UMovieSceneSequencePlayer* SequencerPlayer, const struct FFrameTime& Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "ScrubToFrame");

	Params::ABP_3DWorldMapActorV2_C_ScrubToFrame_Params Parms{};

	Parms.SequencerPlayer = SequencerPlayer;
	Parms.Frame = Frame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.RefreshWorldMapMaskInPlayerSelect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::RefreshWorldMapMaskInPlayerSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "RefreshWorldMapMaskInPlayerSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.RefreshWorldMapMask
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::RefreshWorldMapMask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "RefreshWorldMapMask");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.Switch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::Switch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "Switch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.UpdateAutoRotate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::UpdateAutoRotate(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "UpdateAutoRotate");

	Params::ABP_3DWorldMapActorV2_C_UpdateAutoRotate_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.RotateToCenterByLebelWithAnim
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WorldMapLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 AnimCurve                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::RotateToCenterByLebelWithAnim(class FName WorldMapLabel, class UCurveFloat* AnimCurve, float Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "RotateToCenterByLebelWithAnim");

	Params::ABP_3DWorldMapActorV2_C_RotateToCenterByLebelWithAnim_Params Parms{};

	Parms.WorldMapLabel = WorldMapLabel;
	Parms.AnimCurve = AnimCurve;
	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.RotateToCenterByLebel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WorldMapLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::RotateToCenterByLebel(class FName WorldMapLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "RotateToCenterByLebel");

	Params::ABP_3DWorldMapActorV2_C_RotateToCenterByLebel_Params Parms{};

	Parms.WorldMapLabel = WorldMapLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetGlobeRotationOffset
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rotate                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Vector                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::GetGlobeRotationOffset(struct FRotator* Rotate, struct FVector* Vector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetGlobeRotationOffset");

	Params::ABP_3DWorldMapActorV2_C_GetGlobeRotationOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rotate != nullptr)
		*Rotate = std::move(Parms.Rotate);

	if (Vector != nullptr)
		*Vector = std::move(Parms.Vector);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.UpdateAttractToSelectingPivot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::UpdateAttractToSelectingPivot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "UpdateAttractToSelectingPivot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.to360Rotate
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_3DWorldMapActorV2_C::To360Rotate(const struct FRotator& Input, struct FRotator* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "to360Rotate");

	Params::ABP_3DWorldMapActorV2_C_To360Rotate_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.to360Vector
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::To360Vector(const struct FVector& Input, struct FVector* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "to360Vector");

	Params::ABP_3DWorldMapActorV2_C_To360Vector_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsWorldRotate
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_3DWorldMapActorV2_C::IsWorldRotate(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "IsWorldRotate");

	Params::ABP_3DWorldMapActorV2_C_IsWorldRotate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetGlobeActor
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AWorldMapGlobeActorBase*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AWorldMapGlobeActorBase* ABP_3DWorldMapActorV2_C::GetGlobeActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetGlobeActor");

	Params::ABP_3DWorldMapActorV2_C_GetGlobeActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetGlobeComponent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USceneComponent* ABP_3DWorldMapActorV2_C::GetGlobeComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetGlobeComponent");

	Params::ABP_3DWorldMapActorV2_C_GetGlobeComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetGlobeRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator ABP_3DWorldMapActorV2_C::GetGlobeRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetGlobeRotation");

	Params::ABP_3DWorldMapActorV2_C_GetGlobeRotation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.UpdateRotationLimit
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewLimit                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Delta                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::UpdateRotationLimit(struct FVector2D& NewLimit, struct FVector2D* Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "UpdateRotationLimit");

	Params::ABP_3DWorldMapActorV2_C_UpdateRotationLimit_Params Parms{};

	Parms.NewLimit = NewLimit;

	UObject::ProcessEvent(Func, &Parms);

	if (Delta != nullptr)
		*Delta = std::move(Parms.Delta);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.StartCameraZoomIfPossible
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldMapZoomType       NewZoomType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   GazePoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_3DWorldMapActorV2_C::StartCameraZoomIfPossible(enum class EWorldMapZoomType NewZoomType, const struct FVector2D& GazePoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "StartCameraZoomIfPossible");

	Params::ABP_3DWorldMapActorV2_C_StartCameraZoomIfPossible_Params Parms{};

	Parms.NewZoomType = NewZoomType;
	Parms.GazePoint = GazePoint;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.OverrideGazePoint
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   GazePoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::OverrideGazePoint(const struct FVector2D& GazePoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "OverrideGazePoint");

	Params::ABP_3DWorldMapActorV2_C_OverrideGazePoint_Params Parms{};

	Parms.GazePoint = GazePoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.SetupZoom
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      StartMarkerLabel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      FinishMarkerLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::SetupZoom(const class FString& StartMarkerLabel, const class FString& FinishMarkerLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "SetupZoom");

	Params::ABP_3DWorldMapActorV2_C_SetupZoom_Params Parms{};

	Parms.StartMarkerLabel = StartMarkerLabel;
	Parms.FinishMarkerLabel = FinishMarkerLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.OpenWorldMapActor
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldMapZoomType       InitZoomType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::OpenWorldMapActor(enum class EWorldMapZoomType InitZoomType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "OpenWorldMapActor");

	Params::ABP_3DWorldMapActorV2_C_OpenWorldMapActor_Params Parms{};

	Parms.InitZoomType = InitZoomType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.to360
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Angle                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_3DWorldMapActorV2_C::To360(float Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "to360");

	Params::ABP_3DWorldMapActorV2_C_To360_Params Parms{};

	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsReachedGlobeInRotationLimit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsReachedX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsReachedY                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_3DWorldMapActorV2_C::IsReachedGlobeInRotationLimit(bool* IsReachedX, bool* IsReachedY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "IsReachedGlobeInRotationLimit");

	Params::ABP_3DWorldMapActorV2_C_IsReachedGlobeInRotationLimit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsReachedX != nullptr)
		*IsReachedX = Parms.IsReachedX;

	if (IsReachedY != nullptr)
		*IsReachedY = Parms.IsReachedY;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.CloseWorldMapActor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::CloseWorldMapActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "CloseWorldMapActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetGlobeWorldPosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_3DWorldMapActorV2_C::GetGlobeWorldPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetGlobeWorldPosition");

	Params::ABP_3DWorldMapActorV2_C_GetGlobeWorldPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.RotateGlobe
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   RotateDelta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   OutClampedRotateDelta                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::RotateGlobe(const struct FVector2D& RotateDelta, struct FVector2D* OutClampedRotateDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "RotateGlobe");

	Params::ABP_3DWorldMapActorV2_C_RotateGlobe_Params Parms{};

	Parms.RotateDelta = RotateDelta;

	UObject::ProcessEvent(Func, &Parms);

	if (OutClampedRotateDelta != nullptr)
		*OutClampedRotateDelta = std::move(Parms.OutClampedRotateDelta);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetIsZooming
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_3DWorldMapActorV2_C::GetIsZooming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetIsZooming");

	Params::ABP_3DWorldMapActorV2_C_GetIsZooming_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetCurrentZoomState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWorldMapZoomType       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EWorldMapZoomType ABP_3DWorldMapActorV2_C::GetCurrentZoomState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetCurrentZoomState");

	Params::ABP_3DWorldMapActorV2_C_GetCurrentZoomState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.UpdateZoom
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMovedCursor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   RotationDelta                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_3DWorldMapActorV2_C::UpdateZoom(float DeltaTime, bool IsMovedCursor, struct FVector2D* RotationDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "UpdateZoom");

	Params::ABP_3DWorldMapActorV2_C_UpdateZoom_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.IsMovedCursor = IsMovedCursor;

	UObject::ProcessEvent(Func, &Parms);

	if (RotationDelta != nullptr)
		*RotationDelta = std::move(Parms.RotationDelta);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetCameraManager
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCameraManager*            Output_Get                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::GetCameraManager(class AKSCameraManager** Output_Get)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "GetCameraManager");

	Params::ABP_3DWorldMapActorV2_C_GetCameraManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.UpdateTimeZoneSequencer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsForceUpdate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_3DWorldMapActorV2_C::UpdateTimeZoneSequencer(bool IsForceUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "UpdateTimeZoneSequencer");

	Params::ABP_3DWorldMapActorV2_C_UpdateTimeZoneSequencer_Params Parms{};

	Parms.IsForceUpdate = IsForceUpdate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.SetupWorldMap
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::SetupWorldMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "SetupWorldMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0");

	Params::ABP_3DWorldMapActorV2_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1");

	Params::ABP_3DWorldMapActorV2_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActorV2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "ReceiveTick");

	Params::ABP_3DWorldMapActorV2_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.WaitToLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldMapZoomType       InitZoomType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::WaitToLoad(enum class EWorldMapZoomType InitZoomType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "WaitToLoad");

	Params::ABP_3DWorldMapActorV2_C_WaitToLoad_Params Parms{};

	Parms.InitZoomType = InitZoomType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.ExecuteUbergraph_BP_3DWorldMapActorV2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActorV2_C::ExecuteUbergraph_BP_3DWorldMapActorV2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActorV2_C", "ExecuteUbergraph_BP_3DWorldMapActorV2");

	Params::ABP_3DWorldMapActorV2_C_ExecuteUbergraph_BP_3DWorldMapActorV2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


