#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Skybox_A_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Skybox_A.BP_Skybox_A_C.UpdateAudioState
struct ABP_Skybox_A_C_UpdateAudioState_Params
{
};

// Function BP_Skybox_A.BP_Skybox_A_C.ResetSkyboxVFX
struct ABP_Skybox_A_C_ResetSkyboxVFX_Params
{
	bool*                                              ResetInactiveOnly;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              IsRefresh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Skybox_A.BP_Skybox_A_C.ToggleCharacterVFX
struct ABP_Skybox_A_C_ToggleCharacterVFX_Params
{
	bool*                                              DoActivate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              IsRefresh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Skybox_A.BP_Skybox_A_C.ToggleAmbientVFX
struct ABP_Skybox_A_C_ToggleAmbientVFX_Params
{
	bool*                                              DoActivate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              IsRefresh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Skybox_A.BP_Skybox_A_C.RefreshSkyBoxSettings
struct ABP_Skybox_A_C_RefreshSkyBoxSettings_Params
{
};

// Function BP_Skybox_A.BP_Skybox_A_C.OverrideTesting
struct ABP_Skybox_A_C_OverrideTesting_Params
{
	struct FName*                                      RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Skybox_A.BP_Skybox_A_C.Set Sun Light Properties
struct ABP_Skybox_A_C_Set_Sun_Light_Properties_Params
{
	bool*                                              Has_Sun_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float*                                             Sun_Inclination;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Sun_Rotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor*                               Sun_Light_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor*                                     Sun_Bloom_Tint;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Sun_Volumetric_Scattering_Intensity;                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance**                          Sun_Light_Function;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Sun_Angle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Shadow_Distance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Skybox_A.BP_Skybox_A_C.Get Current Data Table Row
struct ABP_Skybox_A_C_Get_Current_Data_Table_Row_Params
{
};

// Function BP_Skybox_A.BP_Skybox_A_C.Update Lighting Scheme
struct ABP_Skybox_A_C_Update_Lighting_Scheme_Params
{
};

// Function BP_Skybox_A.BP_Skybox_A_C.Set Solar Angle
struct ABP_Skybox_A_C_Set_Solar_Angle_Params
{
	float*                                             Sun_Rotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Sun_Inclination;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Sun_Angle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Skybox_A.BP_Skybox_A_C.UserConstructionScript
struct ABP_Skybox_A_C_UserConstructionScript_Params
{
};

// Function BP_Skybox_A.BP_Skybox_A_C.OnWorldReset
struct ABP_Skybox_A_C_OnWorldReset_Params
{
};

// Function BP_Skybox_A.BP_Skybox_A_C.ReceiveBeginPlay
struct ABP_Skybox_A_C_ReceiveBeginPlay_Params
{
};

// Function BP_Skybox_A.BP_Skybox_A_C.OnNotifyAllWorldReset
struct ABP_Skybox_A_C_OnNotifyAllWorldReset_Params
{
};

// Function BP_Skybox_A.BP_Skybox_A_C.OnSpectateTargetChanged
struct ABP_Skybox_A_C_OnSpectateTargetChanged_Params
{
	class AActor**                                     SpectateTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Skybox_A.BP_Skybox_A_C.ExecuteUbergraph_BP_Skybox_A
struct ABP_Skybox_A_C_ExecuteUbergraph_BP_Skybox_A_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
