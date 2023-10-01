#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Cinematic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Cinematic.Widget_Cinematic_C.DetermineSkipControl
struct UWidget_Cinematic_C_DetermineSkipControl_Params
{
};

// Function Widget_Cinematic.Widget_Cinematic_C.Get_SkipInfo_Visibility_1
struct UWidget_Cinematic_C_Get_SkipInfo_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Cinematic.Widget_Cinematic_C.OnSkipVoteChanged
struct UWidget_Cinematic_C_OnSkipVoteChanged_Params
{
	TArray<class APlayerGunfire*>                      RelevantPlayers;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              ShouldSkip;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Cinematic.Widget_Cinematic_C.UnbindEvents
struct UWidget_Cinematic_C_UnbindEvents_Params
{
};

// Function Widget_Cinematic.Widget_Cinematic_C.End
struct UWidget_Cinematic_C_End_Params
{
	struct FSequencerPlayerSettings*                   SequenceSettings;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ULevelSequence**                             InLevelSequence;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Cinematic.Widget_Cinematic_C.BindEvents
struct UWidget_Cinematic_C_BindEvents_Params
{
};

// Function Widget_Cinematic.Widget_Cinematic_C.Construct
struct UWidget_Cinematic_C_Construct_Params
{
};

// Function Widget_Cinematic.Widget_Cinematic_C.BndEvt__Widget_ButtonEx_132_K2Node_ComponentBoundEvent_134_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Cinematic_C_BndEvt__Widget_ButtonEx_132_K2Node_ComponentBoundEvent_134_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Cinematic.Widget_Cinematic_C.DelayShowPrompt
struct UWidget_Cinematic_C_DelayShowPrompt_Params
{
};

// Function Widget_Cinematic.Widget_Cinematic_C.Destruct
struct UWidget_Cinematic_C_Destruct_Params
{
};

// Function Widget_Cinematic.Widget_Cinematic_C.ExecuteUbergraph_Widget_Cinematic
struct UWidget_Cinematic_C_ExecuteUbergraph_Widget_Cinematic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
