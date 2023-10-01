#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Screen_Option_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Screen_Option.Widget_Screen_Option_C.On Option Selected
struct UWidget_Screen_Option_C_On_Option_Selected_Params
{
};

// Function Widget_Screen_Option.Widget_Screen_Option_C.Set Option Value
struct UWidget_Screen_Option_C_Set_Option_Value_Params
{
	class UWidget_Screen_C**                           Screen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogOption*                              Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
