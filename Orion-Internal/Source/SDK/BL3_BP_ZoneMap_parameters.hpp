#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ZoneMap.BP_ZoneMap_C.PlanetMap_ZoneMagnetism
struct ABP_ZoneMap_C_PlanetMap_ZoneMagnetism_Params
{
	bool                                               Magnetized;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Initialize_Level_Map_DMIs
struct ABP_ZoneMap_C_Initialize_Level_Map_DMIs_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Set_Keyframes
struct ABP_ZoneMap_C_Set_Keyframes_Params
{
	struct FVector                                     Transform_Target_Keyframe;                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Rotation_Pitch_Target_Keyframe;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale_Target_Keyframe;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Clear_Keyframes
struct ABP_ZoneMap_C_Clear_Keyframes_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Get_Planet_Gimbal_Target
struct ABP_ZoneMap_C_Get_Planet_Gimbal_Target_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Get_Planet_and_Galaxy_Scale_Target
struct ABP_ZoneMap_C_Get_Planet_and_Galaxy_Scale_Target_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Get_Planet_Rotation_Target
struct ABP_ZoneMap_C_Get_Planet_Rotation_Target_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Initialize_LevelMap_Camera_Properties
struct ABP_ZoneMap_C_Initialize_LevelMap_Camera_Properties_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.SetGamma
struct ABP_ZoneMap_C_SetGamma_Params
{
	float                                              Gamma;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Planet_Recenter
struct ABP_ZoneMap_C_Planet_Recenter_Params
{
	bool                                               bInstant;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.SetCameraLag
struct ABP_ZoneMap_C_SetCameraLag_Params
{
	bool                                               Location_Lag;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Rotation_Lag;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Location_Lag_Speed;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation_Lag_Speed;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.ViewChanged
struct ABP_ZoneMap_C_ViewChanged_Params
{
	bool                                               bShowingZoneMap;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Update_ZoneMap_DMIs
struct ABP_ZoneMap_C_Update_ZoneMap_DMIs_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.FocusOnPlanet
struct ABP_ZoneMap_C_FocusOnPlanet_Params
{
	class UPlanetData*                                 Planet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.SpawnGalaxyMapPOIs
struct ABP_ZoneMap_C_SpawnGalaxyMapPOIs_Params
{
	class UGalaxyMapData_C*                            Galaxy_Map_Data;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.GetGalaxyRotationTarget
struct ABP_ZoneMap_C_GetGalaxyRotationTarget_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.SetLevelMapPostProcess
struct ABP_ZoneMap_C_SetLevelMapPostProcess_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_GetRotationYawTarget
struct ABP_ZoneMap_C_K2_GetRotationYawTarget_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YawMin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YawMax;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_GetRotationPitchTarget
struct ABP_ZoneMap_C_K2_GetRotationPitchTarget_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_GetNewTransformTarget
struct ABP_ZoneMap_C_K2_GetNewTransformTarget_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TransformMin;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    TransformMax;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             TransformBuffer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             GlobalTransformScale;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ZoomDelta;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_GetNewScaleTarget
struct ABP_ZoneMap_C_K2_GetNewScaleTarget_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZoomDelta;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_UpdateTransforms
struct ABP_ZoneMap_C_K2_UpdateTransforms_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.SetVisibleRadiusBP
struct ABP_ZoneMap_C_SetVisibleRadiusBP_Params
{
	TArray<class UMaterialInstanceDynamic*>            DMIArray;                                                 // (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RadiusAlpha;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distortion;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.LevelMapTickNative
struct ABP_ZoneMap_C_LevelMapTickNative_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Set Transitioning
struct ABP_ZoneMap_C_Set_Transitioning_Params
{
	bool                                               transitioning;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Set Global LUT Visibility
struct ABP_ZoneMap_C_Set_Global_LUT_Visibility_Params
{
	bool                                               Visibile;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Get New Scale Target
struct ABP_ZoneMap_C_Get_New_Scale_Target_Params
{
	float                                              Delta_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale_Min;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale_Max;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale_Rate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Zoom_Delta;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Get Normalized Distance To POI Center
struct ABP_ZoneMap_C_Get_Normalized_Distance_To_POI_Center_Params
{
	class USphereComponent*                            POI_Collision_Sphere;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Hit_Location;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Reset Axis Input
struct ABP_ZoneMap_C_Reset_Axis_Input_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_HandleInputAction
struct ABP_ZoneMap_C_K2_HandleInputAction_Params
{
	struct FName*                                      InputAction;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_HandleAxisInput
struct ABP_ZoneMap_C_K2_HandleAxisInput_Params
{
	struct FName*                                      InputAction;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             AxisValue;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Update Party Memeber Locations
struct ABP_ZoneMap_C_Update_Party_Memeber_Locations_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Focus Level
struct ABP_ZoneMap_C_Focus_Level_Params
{
	class UZoneMapData*                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstant;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Get Rotation For Level Transition
struct ABP_ZoneMap_C_Get_Rotation_For_Level_Transition_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.TransitionToLevel
struct ABP_ZoneMap_C_TransitionToLevel_Params
{
	class UZoneMapData*                                Level_Data;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.TransitionToPlanet
struct ABP_ZoneMap_C_TransitionToPlanet_Params
{
	class UPlanetMapData_C*                            Planet_Map_Data;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Get Default Level Map Pivot
struct ABP_ZoneMap_C_Get_Default_Level_Map_Pivot_Params
{
	struct FVector                                     Point_Of_Interest_Transform_Location;                     // (Parm, OutParm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Base Tick
struct ABP_ZoneMap_C_Base_Tick_Params
{
	float                                              Delta_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.DestroyGalaxyMapComponents
struct ABP_ZoneMap_C_DestroyGalaxyMapComponents_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.GalaxyMapTick
struct ABP_ZoneMap_C_GalaxyMapTick_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.InitializeMapForGalaxy
struct ABP_ZoneMap_C_InitializeMapForGalaxy_Params
{
	class UGalaxyMapData_C*                            Galaxy_Map_Data;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Destroy Planet Map Components
struct ABP_ZoneMap_C_Destroy_Planet_Map_Components_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Destroy Map Actor
struct ABP_ZoneMap_C_Destroy_Map_Actor_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Get Rotation Pitch Target
struct ABP_ZoneMap_C_Get_Rotation_Pitch_Target_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Get Rotation Yaw Target
struct ABP_ZoneMap_C_Get_Rotation_Yaw_Target_Params
{
	float                                              Delta_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              YawMin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              YawMax;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Planet Map Tick
struct ABP_ZoneMap_C_Planet_Map_Tick_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Level Map Tick
struct ABP_ZoneMap_C_Level_Map_Tick_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Create Compass and Grid
struct ABP_ZoneMap_C_Create_Compass_and_Grid_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.InitializeMapForPlanet
struct ABP_ZoneMap_C_InitializeMapForPlanet_Params
{
	class UPlanetData*                                 Planet_Data;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Set Pivot to Actor World Location
struct ABP_ZoneMap_C_Set_Pivot_to_Actor_World_Location_Params
{
	struct FVector                                     World_Location;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Destroy Level Map Components
struct ABP_ZoneMap_C_Destroy_Level_Map_Components_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Get New Transform Target
struct ABP_ZoneMap_C_Get_New_Transform_Target_Params
{
	float                                              Delta_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TransformMin;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     TransformMax;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              TransformBuffer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Global_Transform_Scale;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Zoom_Delta;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Add Zone Map Mesh Sections
struct ABP_ZoneMap_C_Add_Zone_Map_Mesh_Sections_Params
{
	class UZoneMapMeshData*                            Zone_Map_Mesh_Data;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Get Player's Current Zone Section
struct ABP_ZoneMap_C_Get_Player_s_Current_Zone_Section_Params
{
	int                                                Section_Index;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Cycle Zone Map Sections
struct ABP_ZoneMap_C_Cycle_Zone_Map_Sections_Params
{
	int                                                Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Box Constraint
struct ABP_ZoneMap_C_Box_Constraint_Params
{
	struct FVector                                     Vector_To_Constrain;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Bounds_Origin;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Bounds_Extent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Initialize Point Cloud Particle System
struct ABP_ZoneMap_C_Initialize_Point_Cloud_Particle_System_Params
{
	class UZoneMapMeshData*                            Zone_Map_Mesh_Data;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Update Transforms For Level Map
struct ABP_ZoneMap_C_Update_Transforms_For_Level_Map_Params
{
	float                                              Delta_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.InitializeMapForLevel
struct ABP_ZoneMap_C_InitializeMapForLevel_Params
{
	class UZoneMapData*                                Level_Map_Data;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Set Pivot To Actor
struct ABP_ZoneMap_C_Set_Pivot_To_Actor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstant;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Reset Map Orienation 
struct ABP_ZoneMap_C_Reset_Map_Orienation__Params
{
	bool                                               Snap_to_Player;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset_Orientation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Instant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Add Decoration Meshes
struct ABP_ZoneMap_C_Add_Decoration_Meshes_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.UserConstructionScript
struct ABP_ZoneMap_C_UserConstructionScript_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Alpha__FinishedFunc
struct ABP_ZoneMap_C_Alpha__FinishedFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Alpha__UpdateFunc
struct ABP_ZoneMap_C_Alpha__UpdateFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Alpha__Transition Done__EventFunc
struct ABP_ZoneMap_C_Alpha__Transition_Done__EventFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Dismiss__FinishedFunc
struct ABP_ZoneMap_C_Dismiss__FinishedFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Dismiss__UpdateFunc
struct ABP_ZoneMap_C_Dismiss__UpdateFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Galaxy To Planet__FinishedFunc
struct ABP_ZoneMap_C_Galaxy_To_Planet__FinishedFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Galaxy To Planet__UpdateFunc
struct ABP_ZoneMap_C_Galaxy_To_Planet__UpdateFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Planet From Galaxy__FinishedFunc
struct ABP_ZoneMap_C_Planet_From_Galaxy__FinishedFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Planet From Galaxy__UpdateFunc
struct ABP_ZoneMap_C_Planet_From_Galaxy__UpdateFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Planet From Galaxy__Transition Over__EventFunc
struct ABP_ZoneMap_C_Planet_From_Galaxy__Transition_Over__EventFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Timeline_1__FinishedFunc
struct ABP_ZoneMap_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Timeline_1__UpdateFunc
struct ABP_ZoneMap_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Timeline_1__Transition Over__EventFunc
struct ABP_ZoneMap_C_Timeline_1__Transition_Over__EventFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Planet to Galaxy__FinishedFunc
struct ABP_ZoneMap_C_Planet_to_Galaxy__FinishedFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Planet to Galaxy__UpdateFunc
struct ABP_ZoneMap_C_Planet_to_Galaxy__UpdateFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Planet To Level__FinishedFunc
struct ABP_ZoneMap_C_Planet_To_Level__FinishedFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Planet To Level__UpdateFunc
struct ABP_ZoneMap_C_Planet_To_Level__UpdateFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Timeline_0__FinishedFunc
struct ABP_ZoneMap_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Timeline_0__UpdateFunc
struct ABP_ZoneMap_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Timeline_0__Transition Over__EventFunc
struct ABP_ZoneMap_C_Timeline_0__Transition_Over__EventFunc_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16
struct ABP_ZoneMap_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15
struct ABP_ZoneMap_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14
struct ABP_ZoneMap_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_13
struct ABP_ZoneMap_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12
struct ABP_ZoneMap_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11
struct ABP_ZoneMap_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_10
struct ABP_ZoneMap_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_9
struct ABP_ZoneMap_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ZoneMap.BP_ZoneMap_C.ReceiveBeginPlay
struct ABP_ZoneMap_C_ReceiveBeginPlay_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.ReceiveTick
struct ABP_ZoneMap_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.ReceiveDestroyed
struct ABP_ZoneMap_C_ReceiveDestroyed_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_RightStickAxisX
struct ABP_ZoneMap_C_GbxMenu_RightStickAxisX_Params
{
	float                                              Axis_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_RightStickAxisY
struct ABP_ZoneMap_C_GbxMenu_RightStickAxisY_Params
{
	float                                              Axis_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.OakMenu_MapZoomOut
struct ABP_ZoneMap_C_OakMenu_MapZoomOut_Params
{
	float                                              Axis_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.OakMenu_MapZoomIn
struct ABP_ZoneMap_C_OakMenu_MapZoomIn_Params
{
	float                                              Axis_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Stop Level Map Effects
struct ABP_ZoneMap_C_Stop_Level_Map_Effects_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Open Parent Menu
struct ABP_ZoneMap_C_Open_Parent_Menu_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Shutdown Map
struct ABP_ZoneMap_C_Shutdown_Map_Params
{
	bool                                               bInstantShutdown;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_LeftStickAxisX
struct ABP_ZoneMap_C_GbxMenu_LeftStickAxisX_Params
{
	float                                              Axis_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_LeftStickAxisY
struct ABP_ZoneMap_C_GbxMenu_LeftStickAxisY_Params
{
	float                                              Axis_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.Play Planet Map Effects
struct ABP_ZoneMap_C_Play_Planet_Map_Effects_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Stop Planet Map Effects
struct ABP_ZoneMap_C_Stop_Planet_Map_Effects_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Play Galaxy Map Effects
struct ABP_ZoneMap_C_Play_Galaxy_Map_Effects_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Stop Galaxy Map Effects
struct ABP_ZoneMap_C_Stop_Galaxy_Map_Effects_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Close Level Mode
struct ABP_ZoneMap_C_Close_Level_Mode_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Close Planet Mode
struct ABP_ZoneMap_C_Close_Planet_Mode_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.On Completed Dismissal Effects
struct ABP_ZoneMap_C_On_Completed_Dismissal_Effects_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Close Galaxy Mode
struct ABP_ZoneMap_C_Close_Galaxy_Mode_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Set Local Waypoint
struct ABP_ZoneMap_C_Set_Local_Waypoint_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Manual Recenter
struct ABP_ZoneMap_C_Manual_Recenter_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_GotoLevelMap
struct ABP_ZoneMap_C_K2_GotoLevelMap_Params
{
	class UZoneMapData**                               InLevelData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_GotoPlanetMap
struct ABP_ZoneMap_C_K2_GotoPlanetMap_Params
{
	class UPlanetData**                                InPlanetData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_GotoParentMap
struct ABP_ZoneMap_C_K2_GotoParentMap_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_ResetAxisInput
struct ABP_ZoneMap_C_K2_ResetAxisInput_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_FocusOnTransform
struct ABP_ZoneMap_C_K2_FocusOnTransform_Params
{
	struct FTransform*                                 Transform;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_CenterOnPlayer
struct ABP_ZoneMap_C_K2_CenterOnPlayer_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_FocusOnLevel
struct ABP_ZoneMap_C_K2_FocusOnLevel_Params
{
	class UZoneMapData**                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_FocusOnPlanet
struct ABP_ZoneMap_C_K2_FocusOnPlanet_Params
{
	class UPlanetData**                                Planet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_SetCustomWaypoint
struct ABP_ZoneMap_C_K2_SetCustomWaypoint_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_PostLoadedMapMesh
struct ABP_ZoneMap_C_K2_PostLoadedMapMesh_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_OnMiniMapShown
struct ABP_ZoneMap_C_K2_OnMiniMapShown_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_OnEchoOpened
struct ABP_ZoneMap_C_K2_OnEchoOpened_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_OnZoneMapShown
struct ABP_ZoneMap_C_K2_OnZoneMapShown_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_OnEchoClosed
struct ABP_ZoneMap_C_K2_OnEchoClosed_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.CustomEvent_1
struct ABP_ZoneMap_C_CustomEvent_1_Params
{
	class AActor*                                      NewlyFocusedPOI;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.DEBUG Cycle Planet Map POIs
struct ABP_ZoneMap_C_DEBUG_Cycle_Planet_Map_POIs_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.Play Level Map Effects
struct ABP_ZoneMap_C_Play_Level_Map_Effects_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_OnZoneMapHidden
struct ABP_ZoneMap_C_K2_OnZoneMapHidden_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.K2_PostLoadedPlanetClass
struct ABP_ZoneMap_C_K2_PostLoadedPlanetClass_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.ExecuteUbergraph_BP_ZoneMap
struct ABP_ZoneMap_C_ExecuteUbergraph_BP_ZoneMap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoneMap.BP_ZoneMap_C.On Close Level Mode__DelegateSignature
struct ABP_ZoneMap_C_On_Close_Level_Mode__DelegateSignature_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.On Close Galaxy Mode__DelegateSignature
struct ABP_ZoneMap_C_On_Close_Galaxy_Mode__DelegateSignature_Params
{
};

// Function BP_ZoneMap.BP_ZoneMap_C.On Close Planet Mode__DelegateSignature
struct ABP_ZoneMap_C_On_Close_Planet_Mode__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
