#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.NominateSoundLocation
struct UActiveAmbientLocationChooser_Blueprint_NominateSoundLocation_Params
{
	class UActiveAmbientSoundComponent*                ActiveAmbientComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Out_Location;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              Out_Radius;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.InitLocationChooser
struct UActiveAmbientLocationChooser_Blueprint_InitLocationChooser_Params
{
	class UActiveAmbientSoundComponent*                ActiveAmbientComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.UpdateLocations
struct UActiveAmbientLocationChooser_PreselectedLocation_UpdateLocations_Params
{
};

// Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.DrawLocations
struct UActiveAmbientLocationChooser_PreselectedLocation_DrawLocations_Params
{
};

// Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.AddLocation
struct UActiveAmbientLocationChooser_PreselectedLocation_AddLocation_Params
{
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAudio.ActiveAmbientLocationValidator_Blueprint.IsProposedLocationValid
struct UActiveAmbientLocationValidator_Blueprint_IsProposedLocationValid_Params
{
	class UActiveAmbientSoundComponent*                ActiveAmbientComponent;                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAudio.ActiveAmbientSound.EnableSounds
struct AActiveAmbientSound_EnableSounds_Params
{
};

// Function GbxAudio.ActiveAmbientSound.DisableSounds
struct AActiveAmbientSound_DisableSounds_Params
{
};

// Function GbxAudio.ActiveAmbientSoundComponent.Startle
struct UActiveAmbientSoundComponent_Startle_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAudio.ActiveAmbientUpdater_Blueprint.UpdateActiveAmbientInstance
struct UActiveAmbientUpdater_Blueprint_UpdateActiveAmbientInstance_Params
{
	class UActiveAmbientSoundComponent*                ActiveAmbientComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActiveAmbientInstance                      ActiveAmbientInstance;                                    // (Parm, OutParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAudio.ActiveAmbientUpdater_Blueprint.InitializeActiveAmbientInstance
struct UActiveAmbientUpdater_Blueprint_InitializeActiveAmbientInstance_Params
{
	class UActiveAmbientSoundComponent*                ActiveAmbientComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActiveAmbientInstance                      ActiveAmbientInstance;                                    // (Parm, OutParm)
};

// Function GbxAudio.AudioOcclusionVoxelizerZone.Voxelize
struct AAudioOcclusionVoxelizerZone_Voxelize_Params
{
};

// Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRLE
struct AAudioOcclusionVoxelizerZone_ExportAsRLE_Params
{
};

// Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRaw
struct AAudioOcclusionVoxelizerZone_ExportAsRaw_Params
{
};

// Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddLocation
struct UAudioPrepLocationFinder_Blueprint_AddLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddFoundLocations
struct UAudioPrepLocationFinder_Blueprint_AddFoundLocations_Params
{
};

// Function GbxAudio.ActiveAmbientLocationFinder_Blueprint.AddFoundLocations
struct UActiveAmbientLocationFinder_Blueprint_AddFoundLocations_Params
{
	class UActiveAmbientSoundComponent*                ActiveAmbientComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActiveAmbientLocationChooser_PreselectedLocation* PreselectedLocationChooser;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAudio.CharacterSoundData.RefreshAll
struct UCharacterSoundData_RefreshAll_Params
{
};

// Function GbxAudio.DistributedAmbientSound.DoUpdateTree
struct ADistributedAmbientSound_DoUpdateTree_Params
{
};

// Function GbxAudio.DistributedAmbientSound.DoFindNewLocationsAndRebuild
struct ADistributedAmbientSound_DoFindNewLocationsAndRebuild_Params
{
};

// Function GbxAudio.FluidSimExampleZone.UpdateVisualization
struct AFluidSimExampleZone_UpdateVisualization_Params
{
};

// Function GbxAudio.FluidSimExampleZone.ExportVectorField
struct AFluidSimExampleZone_ExportVectorField_Params
{
};

// Function GbxAudio.FluidSimExampleZone.ApplyToOtherSim
struct AFluidSimExampleZone_ApplyToOtherSim_Params
{
};

// Function GbxAudio.FoleyMainComponent.SetSurfaceModifier
struct UFoleyMainComponent_SetSurfaceModifier_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FootstepVolumeMultiplier;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAudio.FoleyMainComponent.PlayFootstepEvent
struct UFoleyMainComponent_PlayFootstepEvent_Params
{
	struct FFoleyEventParams                           EventParams;                                              // (Parm)
};

// Function GbxAudio.FoleyMainComponent.PlayFootstep
struct UFoleyMainComponent_PlayFootstep_Params
{
	struct FVector                                     FootstepLocation;                                         // (Parm, IsPlainOldData)
	struct FRotator                                    FootstepRotation;                                         // (Parm, IsPlainOldData)
	class UWwiseSwitch*                                MaterialSwitch;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeAdjustment;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchAdjustment;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ConfigureEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreview;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAudio.GbxAudioBlueprintLibrary.TriggerCharacterSound
struct UGbxAudioBlueprintLibrary_TriggerCharacterSound_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCharacterSoundTag*                          SoundTag;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAudio.GbxAudioBlueprintLibrary.RemoveListenerAudioEffect
struct UGbxAudioBlueprintLibrary_RemoveListenerAudioEffect_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseAuxBus*                                Efx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationHitFilter
struct UGbxAudioBlueprintLibrary_PassesAudioPreparationHitFilter_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, IsPlainOldData)
	struct FAudioPrepHitResultFilter                   Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationComponentFilter
struct UGbxAudioBlueprintLibrary_PassesAudioPreparationComponentFilter_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAudioPrepComponentFilter                   Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAudio.GbxAudioBlueprintLibrary.ApplyListenerAudioEffect
struct UGbxAudioBlueprintLibrary_ApplyListenerAudioEffect_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseAuxBus*                                Efx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WetVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DryVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAudio.LightAudioComponent.SetRTPCValue
struct ULightAudioComponent_SetRTPCValue_Params
{
	class UWwiseRtpc*                                  GameParameter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ValueChangeDuration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EWwiseCurveInterpolation                           FadeCurve;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAudio.LightAudioComponent.PostWwiseEvent
struct ULightAudioComponent_PostWwiseEvent_Params
{
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWwisePlaybackInstance                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxAudio.MusicSequencerComponent.StopSequence
struct UMusicSequencerComponent_StopSequence_Params
{
};

// Function GbxAudio.MusicSequencerComponent.PostSequenceEvent
struct UMusicSequencerComponent_PostSequenceEvent_Params
{
	class UWwiseAudioComponent*                        WwiseComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Note;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartBeat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAudio.MusicSequencerComponent.PlaySequence
struct UMusicSequencerComponent_PlaySequence_Params
{
};

// Function GbxAudio.MusicSequencerComponent.PauseSequence
struct UMusicSequencerComponent_PauseSequence_Params
{
};

// Function GbxAudio.MusicSequencerComponent.IsPlaying
struct UMusicSequencerComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAudio.MusicSequencerComponent.GetRealTimeUntilBeat
struct UMusicSequencerComponent_GetRealTimeUntilBeat_Params
{
	float                                              Beat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAudio.MusicSequencerComponent.GetCurrentBeat
struct UMusicSequencerComponent_GetCurrentBeat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAudio.WwiseListenerEffectComponent.RemoveAudioEffect
struct UWwiseListenerEffectComponent_RemoveAudioEffect_Params
{
	class UWwiseAuxBus*                                Efx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxAudio.WwiseListenerEffectComponent.RemoveAllAudioEffects
struct UWwiseListenerEffectComponent_RemoveAllAudioEffects_Params
{
};

// Function GbxAudio.WwiseListenerEffectComponent.ApplyAudioEffect
struct UWwiseListenerEffectComponent_ApplyAudioEffect_Params
{
	class UWwiseAuxBus*                                Efx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WetPercent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DryPercent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
