#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_PanicButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnServerBegin
struct UAction_Operative_PanicButton_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnServerEnd
struct UAction_Operative_PanicButton_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.StopButtonPress
struct UAction_Operative_PanicButton_C_StopButtonPress_Params
{
};

// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.DetonateClone
struct UAction_Operative_PanicButton_C_DetonateClone_Params
{
};

// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.StopDigicloneFX
struct UAction_Operative_PanicButton_C_StopDigicloneFX_Params
{
};

// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnBegin
struct UAction_Operative_PanicButton_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnEnd
struct UAction_Operative_PanicButton_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.ExecuteUbergraph_Action_Operative_PanicButton
struct UAction_Operative_PanicButton_C_ExecuteUbergraph_Action_Operative_PanicButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
