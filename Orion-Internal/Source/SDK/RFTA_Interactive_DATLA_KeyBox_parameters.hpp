#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_DATLA_KeyBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.CanUseItem
struct AInteractive_DATLA_KeyBox_C_CanUseItem_Params
{
	class APlayerControllerGunfire**                   PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.Set DATLA
struct AInteractive_DATLA_KeyBox_C_Set_DATLA_Params
{
	class AInteractive_DATLA_C**                       DATLA;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.KeyLightEvents
struct AInteractive_DATLA_KeyBox_C_KeyLightEvents_Params
{
};

// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.Setup ItemSocket
struct AInteractive_DATLA_KeyBox_C_Setup_ItemSocket_Params
{
};

// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.IsLocked
struct AInteractive_DATLA_KeyBox_C_IsLocked_Params
{
	bool                                               LockVar;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.ReceiveBeginPlay
struct AInteractive_DATLA_KeyBox_C_ReceiveBeginPlay_Params
{
};

// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.On Key Used
struct AInteractive_DATLA_KeyBox_C_On_Key_Used_Params
{
};

// Function Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C.ExecuteUbergraph_Interactive_DATLA_KeyBox
struct AInteractive_DATLA_KeyBox_C_ExecuteUbergraph_Interactive_DATLA_KeyBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
