#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_UserWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_UserWidget.Widget_UserWidget_C.GetRelevantPlayerPawn
struct UWidget_UserWidget_C_GetRelevantPlayerPawn_Params
{
	class APawn*                                       Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_UserWidget.Widget_UserWidget_C.GetLegacyProgression
struct UWidget_UserWidget_C_GetLegacyProgression_Params
{
	class UProgressionComponent*                       Out;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_UserWidget.Widget_UserWidget_C.IsDialogPushed
struct UWidget_UserWidget_C_IsDialogPushed_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_UserWidget.Widget_UserWidget_C.GetProgression
struct UWidget_UserWidget_C_GetProgression_Params
{
	class UProgressionComponent*                       Out;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_UserWidget.Widget_UserWidget_C.GetTraitsComponent
struct UWidget_UserWidget_C_GetTraitsComponent_Params
{
	class UTraitsComponent*                            Traits;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_UserWidget.Widget_UserWidget_C.EndDialog
struct UWidget_UserWidget_C_EndDialog_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_UserWidget.Widget_UserWidget_C.BeginDialog
struct UWidget_UserWidget_C_BeginDialog_Params
{
	class UClass**                                     DialogBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Caption;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AUIActor*                                    Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_UserWidget.Widget_UserWidget_C.GetContextInventory
struct UWidget_UserWidget_C_GetContextInventory_Params
{
	class UInventoryComponent*                         Inventory;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_UserWidget.Widget_UserWidget_C.GetHud
struct UWidget_UserWidget_C_GetHud_Params
{
	class AUIHud*                                      UIHud;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_UserWidget.Widget_UserWidget_C.GetCrafting
struct UWidget_UserWidget_C_GetCrafting_Params
{
	class UCraftingComponent*                          Crafting;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_UserWidget.Widget_UserWidget_C.GetInventory
struct UWidget_UserWidget_C_GetInventory_Params
{
	class UInventoryComponent*                         Inventory;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_UserWidget.Widget_UserWidget_C.GetContextActor
struct UWidget_UserWidget_C_GetContextActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_UserWidget.Widget_UserWidget_C.OnPushDialog
struct UWidget_UserWidget_C_OnPushDialog_Params
{
};

// Function Widget_UserWidget.Widget_UserWidget_C.OnPopDialog
struct UWidget_UserWidget_C_OnPopDialog_Params
{
};

// Function Widget_UserWidget.Widget_UserWidget_C.ExecuteUbergraph_Widget_UserWidget
struct UWidget_UserWidget_C_ExecuteUbergraph_Widget_UserWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
