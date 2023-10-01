#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_DragonHearts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_DragonHearts.Widget_DragonHearts_C.RefreshDragonHearts
struct UWidget_DragonHearts_C_RefreshDragonHearts_Params
{
	class AItem**                                      DragonHearts;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_DragonHearts.Widget_DragonHearts_C.RefreshCharacter
struct UWidget_DragonHearts_C_RefreshCharacter_Params
{
};

// Function Widget_DragonHearts.Widget_DragonHearts_C.Construct
struct UWidget_DragonHearts_C_Construct_Params
{
};

// Function Widget_DragonHearts.Widget_DragonHearts_C.InitCharacter
struct UWidget_DragonHearts_C_InitCharacter_Params
{
	class ACharacterGunfire**                          NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_DragonHearts.Widget_DragonHearts_C.Destruct
struct UWidget_DragonHearts_C_Destruct_Params
{
};

// Function Widget_DragonHearts.Widget_DragonHearts_C.ExecuteUbergraph_Widget_DragonHearts
struct UWidget_DragonHearts_C_ExecuteUbergraph_Widget_DragonHearts_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
