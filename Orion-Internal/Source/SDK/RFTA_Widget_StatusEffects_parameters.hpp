#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusEffects_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_StatusEffects.Widget_StatusEffects_C.DetermineDrawableStacks
struct UWidget_StatusEffects_C_DetermineDrawableStacks_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              DrawnActions;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                NumStacks;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldDraw;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StatusEffects.Widget_StatusEffects_C.GetRemainingTimeForAction
struct UWidget_StatusEffects_C_GetRemainingTimeForAction_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffects.Widget_StatusEffects_C.StatusEffectSortPredicate
struct UWidget_StatusEffects_C_StatusEffectSortPredicate_Params
{
	class UObject**                                    A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Widget_StatusEffects.Widget_StatusEffects_C.UpdateRenderedActions
struct UWidget_StatusEffects_C_UpdateRenderedActions_Params
{
};

// Function Widget_StatusEffects.Widget_StatusEffects_C.AddAction
struct UWidget_StatusEffects_C_AddAction_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               StackSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffects.Widget_StatusEffects_C.Construct
struct UWidget_StatusEffects_C_Construct_Params
{
};

// Function Widget_StatusEffects.Widget_StatusEffects_C.OnActionRemoved_Event_1
struct UWidget_StatusEffects_C_OnActionRemoved_Event_1_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffects.Widget_StatusEffects_C.On Action Added
struct UWidget_StatusEffects_C_On_Action_Added_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffects.Widget_StatusEffects_C.ExecuteUbergraph_Widget_StatusEffects
struct UWidget_StatusEffects_C_ExecuteUbergraph_Widget_StatusEffects_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
