#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Debug_QuestNode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.TeleportTo
struct UWidget_Debug_QuestNode_C_TeleportTo_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.GetVisibility_1
struct UWidget_Debug_QuestNode_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.SetIconIf
struct UWidget_Debug_QuestNode_C_SetIconIf_Params
{
	class UQuestComponent**                            QuestComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     QuestComponentType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D**                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.SetIcon
struct UWidget_Debug_QuestNode_C_SetIcon_Params
{
	class UQuestComponent**                            QuestComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.Get_Errors_Visibility_1
struct UWidget_Debug_QuestNode_C_Get_Errors_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.Get_Label_Text_1
struct UWidget_Debug_QuestNode_C_Get_Label_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Debug_QuestNode_C_BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.Construct
struct UWidget_Debug_QuestNode_C_Construct_Params
{
};

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
struct UWidget_Debug_QuestNode_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Debug_QuestNode_C_BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_43_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Debug_QuestNode_C_BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_43_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_QuestNode.Widget_Debug_QuestNode_C.ExecuteUbergraph_Widget_Debug_QuestNode
struct UWidget_Debug_QuestNode_C_ExecuteUbergraph_Widget_Debug_QuestNode_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
