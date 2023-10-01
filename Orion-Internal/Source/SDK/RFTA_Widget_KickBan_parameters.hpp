#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_KickBan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_KickBan.Widget_KickBan_C.GetPopulatedVisibility_1
struct UWidget_KickBan_C_GetPopulatedVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KickBan.Widget_KickBan_C.UpdatePlayerList
struct UWidget_KickBan_C_UpdatePlayerList_Params
{
};

// Function Widget_KickBan.Widget_KickBan_C.NavigateToPlayer
struct UWidget_KickBan_C_NavigateToPlayer_Params
{
	bool*                                              Forward;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KickBan.Widget_KickBan_C.GetEmptyVisibility_1
struct UWidget_KickBan_C_GetEmptyVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KickBan.Widget_KickBan_C.CanPress
struct UWidget_KickBan_C_CanPress_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_KickBan.Widget_KickBan_C.BuildPlayerList
struct UWidget_KickBan_C_BuildPlayerList_Params
{
};

// Function Widget_KickBan.Widget_KickBan_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_KickBan_C_BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KickBan.Widget_KickBan_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_KickBan_C_BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KickBan.Widget_KickBan_C.Construct
struct UWidget_KickBan_C_Construct_Params
{
};

// Function Widget_KickBan.Widget_KickBan_C.BndEvt__Ban_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_KickBan_C_BndEvt__Ban_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KickBan.Widget_KickBan_C.FocusList
struct UWidget_KickBan_C_FocusList_Params
{
};

// Function Widget_KickBan.Widget_KickBan_C.OnSelected
struct UWidget_KickBan_C_OnSelected_Params
{
	class APlayerStateGunfire**                        PlayerStateGunfire;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KickBan.Widget_KickBan_C.OnCooldown
struct UWidget_KickBan_C_OnCooldown_Params
{
};

// Function Widget_KickBan.Widget_KickBan_C.OnNavigate
struct UWidget_KickBan_C_OnNavigate_Params
{
	EUINavigation*                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_KickBan.Widget_KickBan_C.OnKick
struct UWidget_KickBan_C_OnKick_Params
{
};

// Function Widget_KickBan.Widget_KickBan_C.ExecuteUbergraph_Widget_KickBan
struct UWidget_KickBan_C_ExecuteUbergraph_Widget_KickBan_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
