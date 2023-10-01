// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxAudio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.NominateSoundLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActiveAmbientSoundComponent* ActiveAmbientComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Out_Location                   (Parm, OutParm, IsPlainOldData)
// float                          Out_Radius                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActiveAmbientLocationChooser_Blueprint::NominateSoundLocation(class UActiveAmbientSoundComponent* ActiveAmbientComponent, float Out_Radius, struct FVector* Out_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.NominateSoundLocation");

	UActiveAmbientLocationChooser_Blueprint_NominateSoundLocation_Params params;
	params.ActiveAmbientComponent = ActiveAmbientComponent;
	params.Out_Radius = Out_Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Location != nullptr)
		*Out_Location = params.Out_Location;

	return params.ReturnValue;
}


// Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.InitLocationChooser
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActiveAmbientSoundComponent* ActiveAmbientComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UActiveAmbientLocationChooser_Blueprint::InitLocationChooser(class UActiveAmbientSoundComponent* ActiveAmbientComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.InitLocationChooser");

	UActiveAmbientLocationChooser_Blueprint_InitLocationChooser_Params params;
	params.ActiveAmbientComponent = ActiveAmbientComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.UpdateLocations
// (Final, Native, Public)

void UActiveAmbientLocationChooser_PreselectedLocation::UpdateLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.UpdateLocations");

	UActiveAmbientLocationChooser_PreselectedLocation_UpdateLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.DrawLocations
// (Final, Native, Public)

void UActiveAmbientLocationChooser_PreselectedLocation::DrawLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.DrawLocations");

	UActiveAmbientLocationChooser_PreselectedLocation_DrawLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.AddLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          InRadius                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActiveAmbientLocationChooser_PreselectedLocation::AddLocation(const struct FVector& InLocation, float InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.AddLocation");

	UActiveAmbientLocationChooser_PreselectedLocation_AddLocation_Params params;
	params.InLocation = InLocation;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAudio.ActiveAmbientLocationValidator_Blueprint.IsProposedLocationValid
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class UActiveAmbientSoundComponent* ActiveAmbientComponent         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActiveAmbientLocationValidator_Blueprint::IsProposedLocationValid(class UActiveAmbientSoundComponent* ActiveAmbientComponent, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationValidator_Blueprint.IsProposedLocationValid");

	UActiveAmbientLocationValidator_Blueprint_IsProposedLocationValid_Params params;
	params.ActiveAmbientComponent = ActiveAmbientComponent;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAudio.ActiveAmbientSound.EnableSounds
// (Final, Native, Public, BlueprintCallable)

void AActiveAmbientSound::EnableSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientSound.EnableSounds");

	AActiveAmbientSound_EnableSounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.ActiveAmbientSound.DisableSounds
// (Final, Native, Public, BlueprintCallable)

void AActiveAmbientSound::DisableSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientSound.DisableSounds");

	AActiveAmbientSound_DisableSounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.ActiveAmbientSoundComponent.Startle
// (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UActiveAmbientSoundComponent::Startle(const struct FVector& Location, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientSoundComponent.Startle");

	UActiveAmbientSoundComponent_Startle_Params params;
	params.Location = Location;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.ActiveAmbientUpdater_Blueprint.UpdateActiveAmbientInstance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActiveAmbientSoundComponent* ActiveAmbientComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FActiveAmbientInstance  ActiveAmbientInstance          (Parm, OutParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UActiveAmbientUpdater_Blueprint::UpdateActiveAmbientInstance(class UActiveAmbientSoundComponent* ActiveAmbientComponent, float DeltaTime, struct FActiveAmbientInstance* ActiveAmbientInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientUpdater_Blueprint.UpdateActiveAmbientInstance");

	UActiveAmbientUpdater_Blueprint_UpdateActiveAmbientInstance_Params params;
	params.ActiveAmbientComponent = ActiveAmbientComponent;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveAmbientInstance != nullptr)
		*ActiveAmbientInstance = params.ActiveAmbientInstance;
}


// Function GbxAudio.ActiveAmbientUpdater_Blueprint.InitializeActiveAmbientInstance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActiveAmbientSoundComponent* ActiveAmbientComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FActiveAmbientInstance  ActiveAmbientInstance          (Parm, OutParm)

void UActiveAmbientUpdater_Blueprint::InitializeActiveAmbientInstance(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FActiveAmbientInstance* ActiveAmbientInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientUpdater_Blueprint.InitializeActiveAmbientInstance");

	UActiveAmbientUpdater_Blueprint_InitializeActiveAmbientInstance_Params params;
	params.ActiveAmbientComponent = ActiveAmbientComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveAmbientInstance != nullptr)
		*ActiveAmbientInstance = params.ActiveAmbientInstance;
}


// Function GbxAudio.AudioOcclusionVoxelizerZone.Voxelize
// (Final, Native, Public)

void AAudioOcclusionVoxelizerZone::Voxelize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.AudioOcclusionVoxelizerZone.Voxelize");

	AAudioOcclusionVoxelizerZone_Voxelize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRLE
// (Final, Native, Public)

void AAudioOcclusionVoxelizerZone::ExportAsRLE()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRLE");

	AAudioOcclusionVoxelizerZone_ExportAsRLE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRaw
// (Final, Native, Public)

void AAudioOcclusionVoxelizerZone::ExportAsRaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRaw");

	AAudioOcclusionVoxelizerZone_ExportAsRaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UAudioPrepLocationFinder_Blueprint::AddLocation(const struct FVector& Location, const struct FRotator& Rotation, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddLocation");

	UAudioPrepLocationFinder_Blueprint_AddLocation_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddFoundLocations
// (Event, Public, BlueprintEvent)

void UAudioPrepLocationFinder_Blueprint::AddFoundLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddFoundLocations");

	UAudioPrepLocationFinder_Blueprint_AddFoundLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.ActiveAmbientLocationFinder_Blueprint.AddFoundLocations
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActiveAmbientSoundComponent* ActiveAmbientComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UActiveAmbientLocationChooser_PreselectedLocation* PreselectedLocationChooser     (Parm, ZeroConstructor, IsPlainOldData)

void UActiveAmbientLocationFinder_Blueprint::AddFoundLocations(class UActiveAmbientSoundComponent* ActiveAmbientComponent, class UActiveAmbientLocationChooser_PreselectedLocation* PreselectedLocationChooser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationFinder_Blueprint.AddFoundLocations");

	UActiveAmbientLocationFinder_Blueprint_AddFoundLocations_Params params;
	params.ActiveAmbientComponent = ActiveAmbientComponent;
	params.PreselectedLocationChooser = PreselectedLocationChooser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.CharacterSoundData.RefreshAll
// (Final, Native, Public)

void UCharacterSoundData::RefreshAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.CharacterSoundData.RefreshAll");

	UCharacterSoundData_RefreshAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.DistributedAmbientSound.DoUpdateTree
// (Final, Native, Public)

void ADistributedAmbientSound::DoUpdateTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.DistributedAmbientSound.DoUpdateTree");

	ADistributedAmbientSound_DoUpdateTree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.DistributedAmbientSound.DoFindNewLocationsAndRebuild
// (Final, Native, Public)

void ADistributedAmbientSound::DoFindNewLocationsAndRebuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.DistributedAmbientSound.DoFindNewLocationsAndRebuild");

	ADistributedAmbientSound_DoFindNewLocationsAndRebuild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.FluidSimExampleZone.UpdateVisualization
// (Final, Native, Public)

void AFluidSimExampleZone::UpdateVisualization()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.FluidSimExampleZone.UpdateVisualization");

	AFluidSimExampleZone_UpdateVisualization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.FluidSimExampleZone.ExportVectorField
// (Final, Native, Public)

void AFluidSimExampleZone::ExportVectorField()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.FluidSimExampleZone.ExportVectorField");

	AFluidSimExampleZone_ExportVectorField_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.FluidSimExampleZone.ApplyToOtherSim
// (Final, Native, Public)

void AFluidSimExampleZone::ApplyToOtherSim()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.FluidSimExampleZone.ApplyToOtherSim");

	AFluidSimExampleZone_ApplyToOtherSim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.FoleyMainComponent.SetSurfaceModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          FootstepVolumeMultiplier       (Parm, ZeroConstructor, IsPlainOldData)

void UFoleyMainComponent::SetSurfaceModifier(class UWwiseEvent* PlayEvent, float Volume, float FootstepVolumeMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.FoleyMainComponent.SetSurfaceModifier");

	UFoleyMainComponent_SetSurfaceModifier_Params params;
	params.PlayEvent = PlayEvent;
	params.Volume = Volume;
	params.FootstepVolumeMultiplier = FootstepVolumeMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.FoleyMainComponent.PlayFootstepEvent
// (Final, Native, Public)
// Parameters:
// struct FFoleyEventParams       EventParams                    (Parm)

void UFoleyMainComponent::PlayFootstepEvent(const struct FFoleyEventParams& EventParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.FoleyMainComponent.PlayFootstepEvent");

	UFoleyMainComponent_PlayFootstepEvent_Params params;
	params.EventParams = EventParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.FoleyMainComponent.PlayFootstep
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 FootstepLocation               (Parm, IsPlainOldData)
// struct FRotator                FootstepRotation               (Parm, IsPlainOldData)
// class UWwiseSwitch*            MaterialSwitch                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeAdjustment               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchAdjustment                (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             ConfigureEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreview                       (Parm, ZeroConstructor, IsPlainOldData)

void UFoleyMainComponent::PlayFootstep(const struct FVector& FootstepLocation, const struct FRotator& FootstepRotation, class UWwiseSwitch* MaterialSwitch, float VolumeAdjustment, float PitchAdjustment, class UWwiseEvent* ConfigureEvent, bool bPreview)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.FoleyMainComponent.PlayFootstep");

	UFoleyMainComponent_PlayFootstep_Params params;
	params.FootstepLocation = FootstepLocation;
	params.FootstepRotation = FootstepRotation;
	params.MaterialSwitch = MaterialSwitch;
	params.VolumeAdjustment = VolumeAdjustment;
	params.PitchAdjustment = PitchAdjustment;
	params.ConfigureEvent = ConfigureEvent;
	params.bPreview = bPreview;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.GbxAudioBlueprintLibrary.TriggerCharacterSound
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCharacterSoundTag*      SoundTag                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGbxAudioBlueprintLibrary::STATIC_TriggerCharacterSound(class AActor* Character, class UCharacterSoundTag* SoundTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.GbxAudioBlueprintLibrary.TriggerCharacterSound");

	UGbxAudioBlueprintLibrary_TriggerCharacterSound_Params params;
	params.Character = Character;
	params.SoundTag = SoundTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.GbxAudioBlueprintLibrary.RemoveListenerAudioEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseAuxBus*            Efx                            (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAudioBlueprintLibrary::STATIC_RemoveListenerAudioEffect(class AActor* Character, class UWwiseAuxBus* Efx)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.GbxAudioBlueprintLibrary.RemoveListenerAudioEffect");

	UGbxAudioBlueprintLibrary_RemoveListenerAudioEffect_Params params;
	params.Character = Character;
	params.Efx = Efx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationHitFilter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, IsPlainOldData)
// struct FAudioPrepHitResultFilter Filter                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAudioBlueprintLibrary::STATIC_PassesAudioPreparationHitFilter(const struct FHitResult& Hit, const struct FAudioPrepHitResultFilter& Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationHitFilter");

	UGbxAudioBlueprintLibrary_PassesAudioPreparationHitFilter_Params params;
	params.Hit = Hit;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationComponentFilter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAudioPrepComponentFilter Filter                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAudioBlueprintLibrary::STATIC_PassesAudioPreparationComponentFilter(class UPrimitiveComponent* Component, const struct FAudioPrepComponentFilter& Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationComponentFilter");

	UGbxAudioBlueprintLibrary_PassesAudioPreparationComponentFilter_Params params;
	params.Component = Component;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAudio.GbxAudioBlueprintLibrary.ApplyListenerAudioEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseAuxBus*            Efx                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          WetVolume                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DryVolume                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAudioBlueprintLibrary::STATIC_ApplyListenerAudioEffect(class AActor* Character, class UWwiseAuxBus* Efx, float WetVolume, float DryVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.GbxAudioBlueprintLibrary.ApplyListenerAudioEffect");

	UGbxAudioBlueprintLibrary_ApplyListenerAudioEffect_Params params;
	params.Character = Character;
	params.Efx = Efx;
	params.WetVolume = WetVolume;
	params.DryVolume = DryVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.LightAudioComponent.SetRTPCValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseRtpc*              GameParameter                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPersistent                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueChangeDuration            (Parm, ZeroConstructor, IsPlainOldData)
// EWwiseCurveInterpolation       FadeCurve                      (Parm, ZeroConstructor, IsPlainOldData)

void ULightAudioComponent::SetRTPCValue(class UWwiseRtpc* GameParameter, float Value, bool bPersistent, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.LightAudioComponent.SetRTPCValue");

	ULightAudioComponent_SetRTPCValue_Params params;
	params.GameParameter = GameParameter;
	params.Value = Value;
	params.bPersistent = bPersistent;
	params.ValueChangeDuration = ValueChangeDuration;
	params.FadeCurve = FadeCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.LightAudioComponent.PostWwiseEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FWwisePlaybackInstance  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWwisePlaybackInstance ULightAudioComponent::PostWwiseEvent(class UWwiseEvent* WwiseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.LightAudioComponent.PostWwiseEvent");

	ULightAudioComponent_PostWwiseEvent_Params params;
	params.WwiseEvent = WwiseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAudio.MusicSequencerComponent.StopSequence
// (Final, Native, Public, BlueprintCallable)

void UMusicSequencerComponent::StopSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.StopSequence");

	UMusicSequencerComponent_StopSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.MusicSequencerComponent.PostSequenceEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseAudioComponent*    WwiseComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Note                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartBeat                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UMusicSequencerComponent::PostSequenceEvent(class UWwiseAudioComponent* WwiseComponent, class UWwiseEvent* WwiseEvent, int Note, int Velocity, int Channel, float StartBeat, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.PostSequenceEvent");

	UMusicSequencerComponent_PostSequenceEvent_Params params;
	params.WwiseComponent = WwiseComponent;
	params.WwiseEvent = WwiseEvent;
	params.Note = Note;
	params.Velocity = Velocity;
	params.Channel = Channel;
	params.StartBeat = StartBeat;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.MusicSequencerComponent.PlaySequence
// (Final, Native, Public, BlueprintCallable)

void UMusicSequencerComponent::PlaySequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.PlaySequence");

	UMusicSequencerComponent_PlaySequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.MusicSequencerComponent.PauseSequence
// (Final, Native, Public, BlueprintCallable)

void UMusicSequencerComponent::PauseSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.PauseSequence");

	UMusicSequencerComponent_PauseSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.MusicSequencerComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMusicSequencerComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.IsPlaying");

	UMusicSequencerComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAudio.MusicSequencerComponent.GetRealTimeUntilBeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Beat                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMusicSequencerComponent::GetRealTimeUntilBeat(float Beat)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.GetRealTimeUntilBeat");

	UMusicSequencerComponent_GetRealTimeUntilBeat_Params params;
	params.Beat = Beat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAudio.MusicSequencerComponent.GetCurrentBeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMusicSequencerComponent::GetCurrentBeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.GetCurrentBeat");

	UMusicSequencerComponent_GetCurrentBeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAudio.WwiseListenerEffectComponent.RemoveAudioEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseAuxBus*            Efx                            (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseListenerEffectComponent::RemoveAudioEffect(class UWwiseAuxBus* Efx)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.WwiseListenerEffectComponent.RemoveAudioEffect");

	UWwiseListenerEffectComponent_RemoveAudioEffect_Params params;
	params.Efx = Efx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.WwiseListenerEffectComponent.RemoveAllAudioEffects
// (Final, Native, Public, BlueprintCallable)

void UWwiseListenerEffectComponent::RemoveAllAudioEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.WwiseListenerEffectComponent.RemoveAllAudioEffects");

	UWwiseListenerEffectComponent_RemoveAllAudioEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAudio.WwiseListenerEffectComponent.ApplyAudioEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseAuxBus*            Efx                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          WetPercent                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DryPercent                     (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseListenerEffectComponent::ApplyAudioEffect(class UWwiseAuxBus* Efx, float WetPercent, float DryPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAudio.WwiseListenerEffectComponent.ApplyAudioEffect");

	UWwiseListenerEffectComponent_ApplyAudioEffect_Params params;
	params.Efx = Efx;
	params.WetPercent = WetPercent;
	params.DryPercent = DryPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
