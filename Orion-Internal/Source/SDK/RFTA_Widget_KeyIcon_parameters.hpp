#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_KeyIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_KeyIcon.Widget_KeyIcon_C.GetInputActionName
struct UWidget_KeyIcon_C_GetInputActionName_Params
{
	class FString                                      InputActionName;                                          // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_KeyIcon.Widget_KeyIcon_C.ModifyKeyName
struct UWidget_KeyIcon_C_ModifyKeyName_Params
{
	class FString*                                     KeyName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                      Result;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_KeyIcon.Widget_KeyIcon_C.SetActionText
struct UWidget_KeyIcon_C_SetActionText_Params
{
	class FString*                                     ActionKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_KeyIcon.Widget_KeyIcon_C.ExecuteUbergraph_Widget_KeyIcon
struct UWidget_KeyIcon_C_ExecuteUbergraph_Widget_KeyIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
