#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_TraitStat_Minor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.Refresh
struct UWidget_TraitStat_Minor_C_Refresh_Params
{
};

// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.Init
struct UWidget_TraitStat_Minor_C_Init_Params
{
	struct FInspectStat*                               Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInspectStat*                               CompareState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.GetPostfix
struct UWidget_TraitStat_Minor_C_GetPostfix_Params
{
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.GetPrefix
struct UWidget_TraitStat_Minor_C_GetPrefix_Params
{
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.GetPrevStatValueLabel
struct UWidget_TraitStat_Minor_C_GetPrevStatValueLabel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.GetStatValueLabel
struct UWidget_TraitStat_Minor_C_GetStatValueLabel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.Construct
struct UWidget_TraitStat_Minor_C_Construct_Params
{
};

// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.ExecuteUbergraph_Widget_TraitStat_Minor
struct UWidget_TraitStat_Minor_C_ExecuteUbergraph_Widget_TraitStat_Minor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
