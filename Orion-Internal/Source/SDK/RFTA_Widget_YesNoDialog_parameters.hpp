#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_YesNoDialog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_YesNoDialog.Widget_YesNoDialog_C.Init
struct UWidget_YesNoDialog_C_Init_Params
{
	struct FText*                                      Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_YesNoDialog.Widget_YesNoDialog_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_YesNoDialog_C_BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_YesNoDialog.Widget_YesNoDialog_C.Construct
struct UWidget_YesNoDialog_C_Construct_Params
{
};

// Function Widget_YesNoDialog.Widget_YesNoDialog_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_YesNoDialog_C_BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_YesNoDialog.Widget_YesNoDialog_C.ExecuteUbergraph_Widget_YesNoDialog
struct UWidget_YesNoDialog_C_ExecuteUbergraph_Widget_YesNoDialog_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
