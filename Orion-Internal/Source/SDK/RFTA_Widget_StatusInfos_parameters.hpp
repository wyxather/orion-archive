#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusInfos_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_StatusInfos.Widget_StatusInfos_C.CanAddAction
struct UWidget_StatusInfos_C_CanAddAction_Params
{
	class UAction_StatusEffect_C**                     StatusEffect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionBuff**                                BuffEffect;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StatusInfos.Widget_StatusInfos_C.Init
struct UWidget_StatusInfos_C_Init_Params
{
};

// Function Widget_StatusInfos.Widget_StatusInfos_C.RemoveAction
struct UWidget_StatusInfos_C_RemoveAction_Params
{
	class UAction_StatusEffect_C**                     StatusEffect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAction_Buff_C**                             BuffEffect;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              IsTeamwork;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StatusInfos.Widget_StatusInfos_C.AddAction
struct UWidget_StatusInfos_C_AddAction_Params
{
	class UAction_StatusEffect_C**                     StatusEffect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAction_Buff_C**                             BuffEffect;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              IsStatusEffect;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              IsTeamwork;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StatusInfos.Widget_StatusInfos_C.Construct
struct UWidget_StatusInfos_C_Construct_Params
{
};

// Function Widget_StatusInfos.Widget_StatusInfos_C.OnActionAdded_Event_1
struct UWidget_StatusInfos_C_OnActionAdded_Event_1_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusInfos.Widget_StatusInfos_C.OnActionRemoved_Event_1
struct UWidget_StatusInfos_C_OnActionRemoved_Event_1_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusInfos.Widget_StatusInfos_C.ExecuteUbergraph_Widget_StatusInfos
struct UWidget_StatusInfos_C_ExecuteUbergraph_Widget_StatusInfos_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
