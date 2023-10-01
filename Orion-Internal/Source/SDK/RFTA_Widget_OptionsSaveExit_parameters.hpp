#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_OptionsSaveExit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.IsHardcoreSurvival
struct UWidget_OptionsSaveExit_C_IsHardcoreSurvival_Params
{
	bool                                               IsHardcoreSurvival;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.CanChangeMatchmakingOptions
struct UWidget_OptionsSaveExit_C_CanChangeMatchmakingOptions_Params
{
	bool                                               CanShow;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.CheckExitState
struct UWidget_OptionsSaveExit_C_CheckExitState_Params
{
	struct FName*                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowingWarning;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.ShowExitWarning
struct UWidget_OptionsSaveExit_C_ShowExitWarning_Params
{
	struct FName*                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUIActor*                                    UIActor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.IsInSurvival
struct UWidget_OptionsSaveExit_C_IsInSurvival_Params
{
	bool                                               IsSurvival;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.Get_ExitApplicationWarning_Visibility_1
struct UWidget_OptionsSaveExit_C_Get_ExitApplicationWarning_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.Get_ExitMainMenuWarning_Visibility_1
struct UWidget_OptionsSaveExit_C_Get_ExitMainMenuWarning_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.GetbIsEnabled_2
struct UWidget_OptionsSaveExit_C_GetbIsEnabled_2_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.GetbIsEnabled_1
struct UWidget_OptionsSaveExit_C_GetbIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.AddMatchmakingOptions
struct UWidget_OptionsSaveExit_C_AddMatchmakingOptions_Params
{
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.SaveUserSettings
struct UWidget_OptionsSaveExit_C_SaveUserSettings_Params
{
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.UpdateHostOptions
struct UWidget_OptionsSaveExit_C_UpdateHostOptions_Params
{
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.GetExitApplicationVis
struct UWidget_OptionsSaveExit_C_GetExitApplicationVis_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.SaveCharacterData
struct UWidget_OptionsSaveExit_C_SaveCharacterData_Params
{
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.Construct
struct UWidget_OptionsSaveExit_C_Construct_Params
{
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.BndEvt__Widget_FixedSetting_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_OptionsSaveExit_C_BndEvt__Widget_FixedSetting_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.BndEvt__Widget_FixedSetting_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_OptionsSaveExit_C_BndEvt__Widget_FixedSetting_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.RefocusList
struct UWidget_OptionsSaveExit_C_RefocusList_Params
{
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.BndEvt__Widget_FixedSetting_2_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_OptionsSaveExit_C_BndEvt__Widget_FixedSetting_2_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.OnExitKickBan
struct UWidget_OptionsSaveExit_C_OnExitKickBan_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.Destruct
struct UWidget_OptionsSaveExit_C_Destruct_Params
{
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.OnDialogResult
struct UWidget_OptionsSaveExit_C_OnDialogResult_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.UpdateMatchmakingSettings
struct UWidget_OptionsSaveExit_C_UpdateMatchmakingSettings_Params
{
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.ExitToMenuWarningResult
struct UWidget_OptionsSaveExit_C_ExitToMenuWarningResult_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.ExitGameWarningResult
struct UWidget_OptionsSaveExit_C_ExitGameWarningResult_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.ExecuteUbergraph_Widget_OptionsSaveExit
struct UWidget_OptionsSaveExit_C_ExecuteUbergraph_Widget_OptionsSaveExit_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
