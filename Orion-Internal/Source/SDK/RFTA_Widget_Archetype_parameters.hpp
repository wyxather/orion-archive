#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Archetype_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Archetype.Widget_Archetype_C.CheckHasAnyFocus
struct UWidget_Archetype_C_CheckHasAnyFocus_Params
{
	bool                                               HasAnyFocus;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Archetype.Widget_Archetype_C.InitArchetypeLabels
struct UWidget_Archetype_C_InitArchetypeLabels_Params
{
	class UClass**                                     HunterArchetypeRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     CultistArchetypeRef;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ScrapperArchetypeRef;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.Pin_Opacity
struct UWidget_Archetype_C_Pin_Opacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.InitFocus
struct UWidget_Archetype_C_InitFocus_Params
{
	class UWidget_ButtonEx_C*                          ExitMenuButton;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFocusWidget**                               ParentFocusWidget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.SetArchetypeBP
struct UWidget_Archetype_C_SetArchetypeBP_Params
{
	class UClass**                                     Archetype;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.SetArchetype
struct UWidget_Archetype_C_SetArchetype_Params
{
	class URemnantArchetype**                          Archetype;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.Get_Description_Text_1
struct UWidget_Archetype_C_Get_Description_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Archetype.Widget_Archetype_C.Get_Label_Text_1
struct UWidget_Archetype_C_Get_Label_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Archetype.Widget_Archetype_C.Construct
struct UWidget_Archetype_C_Construct_Params
{
};

// Function Widget_Archetype.Widget_Archetype_C.BndEvt__HunterButton_K2Node_ComponentBoundEvent_334_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Archetype_C_BndEvt__HunterButton_K2Node_ComponentBoundEvent_334_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.BndEvt__CultistButton_K2Node_ComponentBoundEvent_437_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Archetype_C_BndEvt__CultistButton_K2Node_ComponentBoundEvent_437_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_495_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Archetype_C_BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_495_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.OnExitClicked
struct UWidget_Archetype_C_OnExitClicked_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.BndEvt__HunterButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Archetype_C_BndEvt__HunterButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.BndEvt__CultistButton_K2Node_ComponentBoundEvent_346_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Archetype_C_BndEvt__CultistButton_K2Node_ComponentBoundEvent_346_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_403_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Archetype_C_BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_403_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_216_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Archetype_C_BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_216_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.BndEvt__CultistButton_K2Node_ComponentBoundEvent_265_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Archetype_C_BndEvt__CultistButton_K2Node_ComponentBoundEvent_265_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.BndEvt__HunterButton_K2Node_ComponentBoundEvent_321_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Archetype_C_BndEvt__HunterButton_K2Node_ComponentBoundEvent_321_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.ExecuteUbergraph_Widget_Archetype
struct UWidget_Archetype_C_ExecuteUbergraph_Widget_Archetype_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Archetype.Widget_Archetype_C.SelectArchetype__DelegateSignature
struct UWidget_Archetype_C_SelectArchetype__DelegateSignature_Params
{
	class URemnantArchetype**                          Archetype;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
