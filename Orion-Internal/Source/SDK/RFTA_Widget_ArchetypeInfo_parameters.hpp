#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ArchetypeInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.SetSelected
struct UWidget_ArchetypeInfo_C_SetSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.Construct
struct UWidget_ArchetypeInfo_C_Construct_Params
{
};

// Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.UpdateInfo
struct UWidget_ArchetypeInfo_C_UpdateInfo_Params
{
};

// Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.ToggleInfo
struct UWidget_ArchetypeInfo_C_ToggleInfo_Params
{
};

// Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.ExecuteUbergraph_Widget_ArchetypeInfo
struct UWidget_ArchetypeInfo_C_ExecuteUbergraph_Widget_ArchetypeInfo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
