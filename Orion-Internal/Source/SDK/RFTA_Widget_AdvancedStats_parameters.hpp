#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_AdvancedStats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetPlayerOffDefLevel
struct UWidget_AdvancedStats_C_GetPlayerOffDefLevel_Params
{
	bool*                                              Offense;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Rating;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetZoneRating
struct UWidget_AdvancedStats_C_GetZoneRating_Params
{
	int                                                Rating;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateOffsetOnController
struct UWidget_AdvancedStats_C_UpdateOffsetOnController_Params
{
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateRatings
struct UWidget_AdvancedStats_C_UpdateRatings_Params
{
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetWeaponName
struct UWidget_AdvancedStats_C_GetWeaponName_Params
{
	struct FInspectStat*                               InspectStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetEncumberanceState
struct UWidget_AdvancedStats_C_GetEncumberanceState_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       State;                                                    // (Parm, OutParm)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateEncumberance
struct UWidget_AdvancedStats_C_UpdateEncumberance_Params
{
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetValueColor
struct UWidget_AdvancedStats_C_GetValueColor_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateResistances
struct UWidget_AdvancedStats_C_UpdateResistances_Params
{
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetPostfix
struct UWidget_AdvancedStats_C_GetPostfix_Params
{
	struct FInspectStat*                               InspectStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Value;                                                    // (Parm, OutParm)
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetPrefix
struct UWidget_AdvancedStats_C_GetPrefix_Params
{
	struct FInspectStat*                               InspectStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Value;                                                    // (Parm, OutParm)
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetStatValue
struct UWidget_AdvancedStats_C_GetStatValue_Params
{
	struct FInspectStat*                               InspectStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text;                                                     // (Parm, OutParm)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateArmor
struct UWidget_AdvancedStats_C_UpdateArmor_Params
{
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.RefreshDetails
struct UWidget_AdvancedStats_C_RefreshDetails_Params
{
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.Construct
struct UWidget_AdvancedStats_C_Construct_Params
{
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.OnPostComputeStats_Event_1
struct UWidget_AdvancedStats_C_OnPostComputeStats_Event_1_Params
{
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.PlayerJoined
struct UWidget_AdvancedStats_C_PlayerJoined_Params
{
	class APlayerState**                               Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.ExecuteUbergraph_Widget_AdvancedStats
struct UWidget_AdvancedStats_C_ExecuteUbergraph_Widget_AdvancedStats_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
