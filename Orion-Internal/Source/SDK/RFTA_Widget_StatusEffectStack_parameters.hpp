#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusEffectStack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.StopListeningForLevelChange
struct UWidget_StatusEffectStack_C_StopListeningForLevelChange_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.ListenForLevelChange
struct UWidget_StatusEffectStack_C_ListenForLevelChange_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.DetermineDrawableStacks
struct UWidget_StatusEffectStack_C_DetermineDrawableStacks_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              DrawnActions;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                NumStacks;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldDraw;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.GetRemainingTimeForAction
struct UWidget_StatusEffectStack_C_GetRemainingTimeForAction_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.StatusEffectSortPredicate
struct UWidget_StatusEffectStack_C_StatusEffectSortPredicate_Params
{
	class UObject**                                    A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.IsValidStatusEffect
struct UWidget_StatusEffectStack_C_IsValidStatusEffect_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.UpdateStatusEffects
struct UWidget_StatusEffectStack_C_UpdateStatusEffects_Params
{
};

// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.Init
struct UWidget_StatusEffectStack_C_Init_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.OnActionRemoved
struct UWidget_StatusEffectStack_C_OnActionRemoved_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.OnActionAdded
struct UWidget_StatusEffectStack_C_OnActionAdded_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusEffectStack.Widget_StatusEffectStack_C.ExecuteUbergraph_Widget_StatusEffectStack
struct UWidget_StatusEffectStack_C_ExecuteUbergraph_Widget_StatusEffectStack_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
