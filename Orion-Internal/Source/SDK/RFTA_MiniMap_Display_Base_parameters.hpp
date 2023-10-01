#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_MiniMap_Display_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MiniMap_Display_Base.MiniMap_Display_Base_C.Toggle Mini Map
struct AMiniMap_Display_Base_C_Toggle_Mini_Map_Params
{
};

// Function MiniMap_Display_Base.MiniMap_Display_Base_C.OnInit
struct AMiniMap_Display_Base_C_OnInit_Params
{
	class ACharacter_Master_Player_C**                 Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     MiniMapRefActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniMap_Display_Base.MiniMap_Display_Base_C.ExecuteUbergraph_MiniMap_Display_Base
struct AMiniMap_Display_Base_C_ExecuteUbergraph_MiniMap_Display_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniMap_Display_Base.MiniMap_Display_Base_C.Map Initialized__DelegateSignature
struct AMiniMap_Display_Base_C_Map_Initialized__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
