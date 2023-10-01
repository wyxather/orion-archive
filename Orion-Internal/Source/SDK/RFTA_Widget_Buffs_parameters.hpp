#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Buffs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Buffs.Widget_Buffs_C.RemoveAction
struct UWidget_Buffs_C_RemoveAction_Params
{
	class UAction_Buff_C**                             StatusEffect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Buffs.Widget_Buffs_C.AddAction
struct UWidget_Buffs_C_AddAction_Params
{
	class UAction_Buff_C**                             Buff;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Buffs.Widget_Buffs_C.Construct
struct UWidget_Buffs_C_Construct_Params
{
};

// Function Widget_Buffs.Widget_Buffs_C.OnActionRemoved_Event_1
struct UWidget_Buffs_C_OnActionRemoved_Event_1_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Buffs.Widget_Buffs_C.On Action Added
struct UWidget_Buffs_C_On_Action_Added_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Buffs.Widget_Buffs_C.ExecuteUbergraph_Widget_Buffs
struct UWidget_Buffs_C_ExecuteUbergraph_Widget_Buffs_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
