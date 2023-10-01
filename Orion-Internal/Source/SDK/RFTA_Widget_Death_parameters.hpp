#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Death_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Death.Widget_Death_C.Get_Exit_bIsEnabled_1
struct UWidget_Death_C_Get_Exit_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Death.Widget_Death_C.Get_Leave_Visibility_1
struct UWidget_Death_C_Get_Leave_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Death.Widget_Death_C.Get_KickBan_bIsEnabled_1
struct UWidget_Death_C_Get_KickBan_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Death.Widget_Death_C.Get_KickBan_Visibility_1
struct UWidget_Death_C_Get_KickBan_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Death.Widget_Death_C.UpdateKickBan
struct UWidget_Death_C_UpdateKickBan_Params
{
};

// Function Widget_Death.Widget_Death_C.ShowDeathScreen
struct UWidget_Death_C_ShowDeathScreen_Params
{
};

// Function Widget_Death.Widget_Death_C.Get_HUDRoot_Visibility_1
struct UWidget_Death_C_Get_HUDRoot_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Death.Widget_Death_C.HasMultipleSpectateOptions
struct UWidget_Death_C_HasMultipleSpectateOptions_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Death.Widget_Death_C.RemoveConfirmDialog
struct UWidget_Death_C_RemoveConfirmDialog_Params
{
};

// Function Widget_Death.Widget_Death_C.Get_Exit_Visibility_1
struct UWidget_Death_C_Get_Exit_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Death.Widget_Death_C.Check is Alive
struct UWidget_Death_C_Check_is_Alive_Params
{
	class UObject**                                    Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Alive;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Death.Widget_Death_C.PostTravel
struct UWidget_Death_C_PostTravel_Params
{
};

// Function Widget_Death.Widget_Death_C.EnsureValidTarget
struct UWidget_Death_C_EnsureValidTarget_Params
{
};

// Function Widget_Death.Widget_Death_C.SpectatePrev
struct UWidget_Death_C_SpectatePrev_Params
{
};

// Function Widget_Death.Widget_Death_C.SpectateNext
struct UWidget_Death_C_SpectateNext_Params
{
};

// Function Widget_Death.Widget_Death_C.BeginSpectating
struct UWidget_Death_C_BeginSpectating_Params
{
};

// Function Widget_Death.Widget_Death_C.GetQuote
struct UWidget_Death_C_GetQuote_Params
{
};

// Function Widget_Death.Widget_Death_C.FadeOut
struct UWidget_Death_C_FadeOut_Params
{
	bool*                                              Immediate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Death.Widget_Death_C.FadeIn
struct UWidget_Death_C_FadeIn_Params
{
	bool*                                              Immediate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Death.Widget_Death_C.Get Spectate Visibility
struct UWidget_Death_C_Get_Spectate_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Death.Widget_Death_C.Construct
struct UWidget_Death_C_Construct_Params
{
};

// Function Widget_Death.Widget_Death_C.OnValidTarget
struct UWidget_Death_C_OnValidTarget_Params
{
};

// Function Widget_Death.Widget_Death_C.OnInvalidTarget
struct UWidget_Death_C_OnInvalidTarget_Params
{
};

// Function Widget_Death.Widget_Death_C.SpectateFadingEffect
struct UWidget_Death_C_SpectateFadingEffect_Params
{
};

// Function Widget_Death.Widget_Death_C.BndEvt__Exit_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Death_C_BndEvt__Exit_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Death.Widget_Death_C.OnExitResult
struct UWidget_Death_C_OnExitResult_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Death.Widget_Death_C.BndEvt__Next_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Death_C_BndEvt__Next_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Death.Widget_Death_C.BndEvt__Prev_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Death_C_BndEvt__Prev_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Death.Widget_Death_C.ShowPartyUI
struct UWidget_Death_C_ShowPartyUI_Params
{
};

// Function Widget_Death.Widget_Death_C.OnSpectateTargetChanged_Event_1
struct UWidget_Death_C_OnSpectateTargetChanged_Event_1_Params
{
	class AActor**                                     SpectateTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Death.Widget_Death_C.BndEvt__KickBan_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Death_C_BndEvt__KickBan_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Death.Widget_Death_C.ExecuteUbergraph_Widget_Death
struct UWidget_Death_C_ExecuteUbergraph_Widget_Death_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
