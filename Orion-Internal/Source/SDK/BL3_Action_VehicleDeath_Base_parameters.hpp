#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_VehicleDeath_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_VehicleDeath_Base.Action_VehicleDeath_Base_C.OnBegin
struct UAction_VehicleDeath_Base_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_VehicleDeath_Base.Action_VehicleDeath_Base_C.OnAnimEnd
struct UAction_VehicleDeath_Base_C_OnAnimEnd_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_VehicleDeath_Base.Action_VehicleDeath_Base_C.ExecuteUbergraph_Action_VehicleDeath_Base
struct UAction_VehicleDeath_Base_C_ExecuteUbergraph_Action_VehicleDeath_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
