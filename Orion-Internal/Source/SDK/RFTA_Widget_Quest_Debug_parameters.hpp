#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Quest_Debug_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_BaseQuestLabel_Text_1
struct UWidget_Quest_Debug_C_Get_BaseQuestLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_RootQuestLabel_Text_1
struct UWidget_Quest_Debug_C_Get_RootQuestLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_ParentQuestLabel_Text_1
struct UWidget_Quest_Debug_C_Get_ParentQuestLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetText_1
struct UWidget_Quest_Debug_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_RootQuest_Visibility_1
struct UWidget_Quest_Debug_C_Get_RootQuest_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_ParentQuest_Visibility_1
struct UWidget_Quest_Debug_C_Get_ParentQuest_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_BaseQuest_Visibility_1
struct UWidget_Quest_Debug_C_Get_BaseQuest_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.SelectComponent
struct UWidget_Quest_Debug_C_SelectComponent_Params
{
	class UQuestComponent**                            QuestComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Init
struct UWidget_Quest_Debug_C_Init_Params
{
	class ARemnantQuest**                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetTile
struct UWidget_Quest_Debug_C_GetTile_Params
{
	class URemnantQuestTile*                           Tile;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetTileID
struct UWidget_Quest_Debug_C_GetTileID_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetTileVector
struct UWidget_Quest_Debug_C_GetTileVector_Params
{
	struct FTileCoord*                                 Coord;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetMinPosition
struct UWidget_Quest_Debug_C_GetMinPosition_Params
{
	class AZoneActor**                                 Zone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetZone
struct UWidget_Quest_Debug_C_GetZone_Params
{
	class UQuestComponent**                            QuestComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZoneActor*                                  Zone;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.SetZone
struct UWidget_Quest_Debug_C_SetZone_Params
{
	class AZoneActor**                                 Zone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Construct
struct UWidget_Quest_Debug_C_Construct_Params
{
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_40_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Quest_Debug_C_BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_40_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__QuestTree_K2Node_ComponentBoundEvent_86_OnComponentSelected__DelegateSignature
struct UWidget_Quest_Debug_C_BndEvt__QuestTree_K2Node_ComponentBoundEvent_86_OnComponentSelected__DelegateSignature_Params
{
	class UQuestComponent**                            QuestComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__QuestTree_K2Node_ComponentBoundEvent_16_OnComponentClick__DelegateSignature
struct UWidget_Quest_Debug_C_BndEvt__QuestTree_K2Node_ComponentBoundEvent_16_OnComponentClick__DelegateSignature_Params
{
	class UQuestComponent**                            QuestComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__BaseQuest_K2Node_ComponentBoundEvent_676_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Quest_Debug_C_BndEvt__BaseQuest_K2Node_ComponentBoundEvent_676_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__ParentQuest_K2Node_ComponentBoundEvent_131_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Quest_Debug_C_BndEvt__ParentQuest_K2Node_ComponentBoundEvent_131_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__RootQuest_K2Node_ComponentBoundEvent_320_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Quest_Debug_C_BndEvt__RootQuest_K2Node_ComponentBoundEvent_320_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.ExecuteUbergraph_Widget_Quest_Debug
struct UWidget_Quest_Debug_C_ExecuteUbergraph_Widget_Quest_Debug_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
