#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_TraitList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_TraitList.Widget_TraitList_C.CreateBackgroundSlots
struct UWidget_TraitList_C_CreateBackgroundSlots_Params
{
};

// Function Widget_TraitList.Widget_TraitList_C.SetShowLore
struct UWidget_TraitList_C_SetShowLore_Params
{
	bool*                                              ShowLore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_TraitList.Widget_TraitList_C.GetVisibility_1
struct UWidget_TraitList_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TraitList.Widget_TraitList_C.ClearTraits
struct UWidget_TraitList_C_ClearTraits_Params
{
};

// Function Widget_TraitList.Widget_TraitList_C.IsEmpty
struct UWidget_TraitList_C_IsEmpty_Params
{
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_TraitList.Widget_TraitList_C.AddTrait
struct UWidget_TraitList_C_AddTrait_Params
{
	struct FTraitInfo*                                 TraitInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TraitList.Widget_TraitList_C.HasTrait
struct UWidget_TraitList_C_HasTrait_Params
{
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_TraitList.Widget_TraitList_C.UpdateTraitList
struct UWidget_TraitList_C_UpdateTraitList_Params
{
};

// Function Widget_TraitList.Widget_TraitList_C.Focus
struct UWidget_TraitList_C_Focus_Params
{
};

// Function Widget_TraitList.Widget_TraitList_C.BuildTraitList
struct UWidget_TraitList_C_BuildTraitList_Params
{
};

// Function Widget_TraitList.Widget_TraitList_C.Construct
struct UWidget_TraitList_C_Construct_Params
{
};

// Function Widget_TraitList.Widget_TraitList_C.OnTraitAdded_Event_1
struct UWidget_TraitList_C_OnTraitAdded_Event_1_Params
{
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TraitList.Widget_TraitList_C.ExecuteUbergraph_Widget_TraitList
struct UWidget_TraitList_C_ExecuteUbergraph_Widget_TraitList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TraitList.Widget_TraitList_C.OnTraitClicked__DelegateSignature
struct UWidget_TraitList_C_OnTraitClicked__DelegateSignature_Params
{
	struct FTraitInfo*                                 TraitInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Widget_TraitList.Widget_TraitList_C.OnSelectTrait__DelegateSignature
struct UWidget_TraitList_C_OnSelectTrait__DelegateSignature_Params
{
	struct FTraitInfo*                                 TraitInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UWidget_Trait_C**                            TraitWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
