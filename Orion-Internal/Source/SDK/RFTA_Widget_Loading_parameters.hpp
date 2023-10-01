#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Loading_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Loading.Widget_Loading_C.SetTipImageAndPlayAnimation
struct UWidget_Loading_C_SetTipImageAndPlayAnimation_Params
{
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Loading.Widget_Loading_C.UpdateTip
struct UWidget_Loading_C_UpdateTip_Params
{
};

// Function Widget_Loading.Widget_Loading_C.InitTips
struct UWidget_Loading_C_InitTips_Params
{
};

// Function Widget_Loading.Widget_Loading_C.IsFinishedTransitioning
struct UWidget_Loading_C_IsFinishedTransitioning_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Loading.Widget_Loading_C.HideLoadingScreen
struct UWidget_Loading_C_HideLoadingScreen_Params
{
};

// Function Widget_Loading.Widget_Loading_C.ShowLoadingScreen
struct UWidget_Loading_C_ShowLoadingScreen_Params
{
};

// Function Widget_Loading.Widget_Loading_C.OnLoaded_A42900CD43617034973CE2A28642000E
struct UWidget_Loading_C_OnLoaded_A42900CD43617034973CE2A28642000E_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Loading.Widget_Loading_C.PreConstruct
struct UWidget_Loading_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Loading.Widget_Loading_C.Construct
struct UWidget_Loading_C_Construct_Params
{
};

// Function Widget_Loading.Widget_Loading_C.PrecacheTipImage
struct UWidget_Loading_C_PrecacheTipImage_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Loading.Widget_Loading_C.ExecuteUbergraph_Widget_Loading
struct UWidget_Loading_C_ExecuteUbergraph_Widget_Loading_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
