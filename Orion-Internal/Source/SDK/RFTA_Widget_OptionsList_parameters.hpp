#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_OptionsList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_OptionsList.Widget_OptionsList_C.OnVSyncApplied
struct UWidget_OptionsList_C_OnVSyncApplied_Params
{
	class UUserSetting**                               AppliedSetting;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettingsGunfire**                   UserSettings;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsList.Widget_OptionsList_C.Get_Controller_Visibility_1
struct UWidget_OptionsList_C_Get_Controller_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsList.Widget_OptionsList_C.Get_Keybind_Visibility_1
struct UWidget_OptionsList_C_Get_Keybind_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsList.Widget_OptionsList_C.FocusFirst
struct UWidget_OptionsList_C_FocusFirst_Params
{
};

// Function Widget_OptionsList.Widget_OptionsList_C.ResetOptions
struct UWidget_OptionsList_C_ResetOptions_Params
{
};

// Function Widget_OptionsList.Widget_OptionsList_C.GetCategorySettings
struct UWidget_OptionsList_C_GetCategorySettings_Params
{
	class UGameUserSettingsGunfire**                   GameUserSettingsGunfire;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserSetting*>                        UserSettings;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_OptionsList.Widget_OptionsList_C.GetListMaxIndex
struct UWidget_OptionsList_C_GetListMaxIndex_Params
{
	int                                                MaxIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsList.Widget_OptionsList_C.CleanList
struct UWidget_OptionsList_C_CleanList_Params
{
};

// Function Widget_OptionsList.Widget_OptionsList_C.ToggleResolutionOptions
struct UWidget_OptionsList_C_ToggleResolutionOptions_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_OptionsList.Widget_OptionsList_C.OnFullscreenModeApplied
struct UWidget_OptionsList_C_OnFullscreenModeApplied_Params
{
	class UUserSetting**                               AppliedSetting;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettingsGunfire**                   UserSettings;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsList.Widget_OptionsList_C.UpdateVideoSetting
struct UWidget_OptionsList_C_UpdateVideoSetting_Params
{
	class UGameUserSettingsGunfire**                   UserSettings;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsList.Widget_OptionsList_C.IsKeyAlreadyBound
struct UWidget_OptionsList_C_IsKeyAlreadyBound_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_OptionsList.Widget_OptionsList_C.BuildList
struct UWidget_OptionsList_C_BuildList_Params
{
};

// Function Widget_OptionsList.Widget_OptionsList_C.Construct
struct UWidget_OptionsList_C_Construct_Params
{
};

// Function Widget_OptionsList.Widget_OptionsList_C.ResetScrollOffset
struct UWidget_OptionsList_C_ResetScrollOffset_Params
{
};

// Function Widget_OptionsList.Widget_OptionsList_C.Destruct
struct UWidget_OptionsList_C_Destruct_Params
{
};

// Function Widget_OptionsList.Widget_OptionsList_C.DeviceChanged
struct UWidget_OptionsList_C_DeviceChanged_Params
{
	int*                                               ControllerId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputDevice*                                      CurrentInputDevice;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsList.Widget_OptionsList_C.ResetToDefault
struct UWidget_OptionsList_C_ResetToDefault_Params
{
};

// Function Widget_OptionsList.Widget_OptionsList_C.PopulateList
struct UWidget_OptionsList_C_PopulateList_Params
{
};

// Function Widget_OptionsList.Widget_OptionsList_C.Conditionally Reset PC Image Cache
struct UWidget_OptionsList_C_Conditionally_Reset_PC_Image_Cache_Params
{
};

// Function Widget_OptionsList.Widget_OptionsList_C.ExecuteUbergraph_Widget_OptionsList
struct UWidget_OptionsList_C_ExecuteUbergraph_Widget_OptionsList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
