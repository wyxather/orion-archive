#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x56 (0x56 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.SwitchCamera
struct ABP_3DWorldMapActorV2_C_SwitchCamera_Params
{
public:
	enum class EKSCameraType                     SwitchTarget;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingTimeZoneSequencer
struct ABP_3DWorldMapActorV2_C_IsPlayingTimeZoneSequencer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingZoomSequencer
struct ABP_3DWorldMapActorV2_C_IsPlayingZoomSequencer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingAnySequencer
struct ABP_3DWorldMapActorV2_C_IsPlayingAnySequencer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetClosePlayerSelectSequencerDuration
struct ABP_3DWorldMapActorV2_C_GetClosePlayerSelectSequencerDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingClosePlayerSelectSequencer
struct ABP_3DWorldMapActorV2_C_IsPlayingClosePlayerSelectSequencer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingOpenPlayerSelectSequencer
struct ABP_3DWorldMapActorV2_C_IsPlayingOpenPlayerSelectSequencer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingCloseSequencer
struct ABP_3DWorldMapActorV2_C_IsPlayingCloseSequencer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsPlayingOpenSequencer
struct ABP_3DWorldMapActorV2_C_IsPlayingOpenSequencer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetPrevZoomState
struct ABP_3DWorldMapActorV2_C_GetPrevZoomState_Params
{
public:
	enum class EWorldMapZoomType                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetNextZoomState
struct ABP_3DWorldMapActorV2_C_GetNextZoomState_Params
{
public:
	enum class EWorldMapZoomType                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetZoomAlpha
struct ABP_3DWorldMapActorV2_C_GetZoomAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.SetGlobeLocation
struct ABP_3DWorldMapActorV2_C_SetGlobeLocation_Params
{
public:
	struct FVector                               NewLocation;                                       // 0x0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OutClanpedNewLocation;                             // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetGlobeLocation
struct ABP_3DWorldMapActorV2_C_GetGlobeLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.ScrubToSeconds
struct ABP_3DWorldMapActorV2_C_ScrubToSeconds_Params
{
public:
	class UMovieSceneSequencePlayer*             SequencerPlayer;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time;                                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.ScrubToFrame
struct ABP_3DWorldMapActorV2_C_ScrubToFrame_Params
{
public:
	class UMovieSceneSequencePlayer*             SequencerPlayer;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFrameTime                            Frame;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.UpdateAutoRotate
struct ABP_3DWorldMapActorV2_C_UpdateAutoRotate_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x119 (0x119 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.RotateToCenterByLebelWithAnim
struct ABP_3DWorldMapActorV2_C_RotateToCenterByLebelWithAnim_Params
{
public:
	class FName                                  WorldMapLabel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           AnimCurve;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.RotateToCenterByLebel
struct ABP_3DWorldMapActorV2_C_RotateToCenterByLebel_Params
{
public:
	class FName                                  WorldMapLabel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB4 (0xB4 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetGlobeRotationOffset
struct ABP_3DWorldMapActorV2_C_GetGlobeRotationOffset_Params
{
public:
	struct FRotator                              Rotate;                                            // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               Vector;                                            // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.to360Rotate
struct ABP_3DWorldMapActorV2_C_To360Rotate_Params
{
public:
	struct FRotator                              Input;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Output;                                            // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.to360Vector
struct ABP_3DWorldMapActorV2_C_To360Vector_Params
{
public:
	struct FVector                               Input;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Output;                                            // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsWorldRotate
struct ABP_3DWorldMapActorV2_C_IsWorldRotate_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetGlobeActor
struct ABP_3DWorldMapActorV2_C_GetGlobeActor_Params
{
public:
	class AWorldMapGlobeActorBase*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetGlobeComponent
struct ABP_3DWorldMapActorV2_C_GetGlobeComponent_Params
{
public:
	class USceneComponent*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetGlobeRotation
struct ABP_3DWorldMapActorV2_C_GetGlobeRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.UpdateRotationLimit
struct ABP_3DWorldMapActorV2_C_UpdateRotationLimit_Params
{
public:
	struct FVector2D                             NewLimit;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Delta;                                             // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.StartCameraZoomIfPossible
struct ABP_3DWorldMapActorV2_C_StartCameraZoomIfPossible_Params
{
public:
	enum class EWorldMapZoomType                 NewZoomType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             GazePoint;                                         // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.OverrideGazePoint
struct ABP_3DWorldMapActorV2_C_OverrideGazePoint_Params
{
public:
	struct FVector2D                             GazePoint;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.SetupZoom
struct ABP_3DWorldMapActorV2_C_SetupZoom_Params
{
public:
	class FString                                StartMarkerLabel;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                FinishMarkerLabel;                                 // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.OpenWorldMapActor
struct ABP_3DWorldMapActorV2_C_OpenWorldMapActor_Params
{
public:
	enum class EWorldMapZoomType                 InitZoomType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.to360
struct ABP_3DWorldMapActorV2_C_To360_Params
{
public:
	float                                        Angle;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.IsReachedGlobeInRotationLimit
struct ABP_3DWorldMapActorV2_C_IsReachedGlobeInRotationLimit_Params
{
public:
	bool                                         IsReachedX;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsReachedY;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetGlobeWorldPosition
struct ABP_3DWorldMapActorV2_C_GetGlobeWorldPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.RotateGlobe
struct ABP_3DWorldMapActorV2_C_RotateGlobe_Params
{
public:
	struct FVector2D                             RotateDelta;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             OutClampedRotateDelta;                             // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetIsZooming
struct ABP_3DWorldMapActorV2_C_GetIsZooming_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetCurrentZoomState
struct ABP_3DWorldMapActorV2_C_GetCurrentZoomState_Params
{
public:
	enum class EWorldMapZoomType                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.UpdateZoom
struct ABP_3DWorldMapActorV2_C_UpdateZoom_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMovedCursor;                                     // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             RotationDelta;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.GetCameraManager
struct ABP_3DWorldMapActorV2_C_GetCameraManager_Params
{
public:
	class AKSCameraManager*                      Output_Get;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.UpdateTimeZoneSequencer
struct ABP_3DWorldMapActorV2_C_UpdateTimeZoneSequencer_Params
{
public:
	bool                                         IsForceUpdate;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0
struct ABP_3DWorldMapActorV2_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1
struct ABP_3DWorldMapActorV2_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.ReceiveTick
struct ABP_3DWorldMapActorV2_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.WaitToLoad
struct ABP_3DWorldMapActorV2_C_WaitToLoad_Params
{
public:
	enum class EWorldMapZoomType                 InitZoomType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C.ExecuteUbergraph_BP_3DWorldMapActorV2
struct ABP_3DWorldMapActorV2_C_ExecuteUbergraph_BP_3DWorldMapActorV2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


