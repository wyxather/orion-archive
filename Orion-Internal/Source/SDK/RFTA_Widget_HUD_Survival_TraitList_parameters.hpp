#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_HUD_Survival_TraitList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.Initialize
struct UWidget_HUD_Survival_TraitList_C_Initialize_Params
{
};

// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.AnimationPlay
struct UWidget_HUD_Survival_TraitList_C_AnimationPlay_Params
{
};

// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.BuildTraitList
struct UWidget_HUD_Survival_TraitList_C_BuildTraitList_Params
{
};

// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.ShowTraitNotification
struct UWidget_HUD_Survival_TraitList_C_ShowTraitNotification_Params
{
	class UClass**                                     Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.GetRelevantCharacter
struct UWidget_HUD_Survival_TraitList_C_GetRelevantCharacter_Params
{
	class ACharacterGunfire*                           Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.Construct
struct UWidget_HUD_Survival_TraitList_C_Construct_Params
{
};

// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.OnTraitAdded
struct UWidget_HUD_Survival_TraitList_C_OnTraitAdded_Params
{
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.OnTraitLevelChanged
struct UWidget_HUD_Survival_TraitList_C_OnTraitLevelChanged_Params
{
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               PreviousLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.ExecuteUbergraph_Widget_HUD_Survival_TraitList
struct UWidget_HUD_Survival_TraitList_C_ExecuteUbergraph_Widget_HUD_Survival_TraitList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
