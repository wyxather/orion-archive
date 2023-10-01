#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Inspectable_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.TogglePageTurnBindings
struct ABP_Inspectable_HUD_C_TogglePageTurnBindings_Params
{
	bool*                                              DoBind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.ClearInspectable
struct ABP_Inspectable_HUD_C_ClearInspectable_Params
{
};

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.Set Display Message
struct ABP_Inspectable_HUD_C_Set_Display_Message_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.Set Inspectable
struct ABP_Inspectable_HUD_C_Set_Inspectable_Params
{
	class ABP_Inspectable_C**                          Inspectable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_InspectableHUDMode>*                 Inspectable_Mode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.ReceiveBeginPlay
struct ABP_Inspectable_HUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.OnBeginDialog
struct ABP_Inspectable_HUD_C_OnBeginDialog_Params
{
};

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.PageNext
struct ABP_Inspectable_HUD_C_PageNext_Params
{
};

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.PagePrev
struct ABP_Inspectable_HUD_C_PagePrev_Params
{
};

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.RequestEndInspectWithContext
struct ABP_Inspectable_HUD_C_RequestEndInspectWithContext_Params
{
};

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.ExecuteUbergraph_BP_Inspectable_HUD
struct ABP_Inspectable_HUD_C_ExecuteUbergraph_BP_Inspectable_HUD_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.ForceUpdateUI__DelegateSignature
struct ABP_Inspectable_HUD_C_ForceUpdateUI__DelegateSignature_Params
{
};

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.OnDialogPrev__DelegateSignature
struct ABP_Inspectable_HUD_C_OnDialogPrev__DelegateSignature_Params
{
};

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.OnDialogNext__DelegateSignature
struct ABP_Inspectable_HUD_C_OnDialogNext__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
