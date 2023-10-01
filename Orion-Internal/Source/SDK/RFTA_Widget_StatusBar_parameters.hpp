#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_StatusBar.Widget_StatusBar_C.GetVisibility_1
struct UWidget_StatusBar_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusBar.Widget_StatusBar_C.ProgressionBar
struct UWidget_StatusBar_C_ProgressionBar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusBar.Widget_StatusBar_C.OnHealthChanged
struct UWidget_StatusBar_C_OnHealthChanged_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusBar.Widget_StatusBar_C.InitHealth
struct UWidget_StatusBar_C_InitHealth_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusBar.Widget_StatusBar_C.Flash
struct UWidget_StatusBar_C_Flash_Params
{
};

// Function Widget_StatusBar.Widget_StatusBar_C.SetPercentage
struct UWidget_StatusBar_C_SetPercentage_Params
{
	float*                                             Percentage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Ease_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StatusBar.Widget_StatusBar_C.PreConstruct
struct UWidget_StatusBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_StatusBar.Widget_StatusBar_C.DelayedSetPercentage
struct UWidget_StatusBar_C_DelayedSetPercentage_Params
{
	float*                                             Percentage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusBar.Widget_StatusBar_C.Tick
struct UWidget_StatusBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatusBar.Widget_StatusBar_C.ExecuteUbergraph_Widget_StatusBar
struct UWidget_StatusBar_C_ExecuteUbergraph_Widget_StatusBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
