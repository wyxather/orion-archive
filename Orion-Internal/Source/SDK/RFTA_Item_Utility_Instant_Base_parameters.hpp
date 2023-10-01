#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Item_Utility_Instant_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.DoAction
struct AItem_Utility_Instant_Base_C_DoAction_Params
{
	int                                                ActionID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.OnUse
struct AItem_Utility_Instant_Base_C_OnUse_Params
{
};

// Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.OnActivate
struct AItem_Utility_Instant_Base_C_OnActivate_Params
{
};

// Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.OnUnequipped
struct AItem_Utility_Instant_Base_C_OnUnequipped_Params
{
};

// Function Item_Utility_Instant_Base.Item_Utility_Instant_Base_C.ExecuteUbergraph_Item_Utility_Instant_Base
struct AItem_Utility_Instant_Base_C_ExecuteUbergraph_Item_Utility_Instant_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
