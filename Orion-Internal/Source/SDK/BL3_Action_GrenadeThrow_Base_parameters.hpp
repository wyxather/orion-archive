#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_GrenadeThrow_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_GrenadeThrow_Base.Action_GrenadeThrow_Base_C.OnBegin
struct UAction_GrenadeThrow_Base_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_GrenadeThrow_Base.Action_GrenadeThrow_Base_C.OnEnd
struct UAction_GrenadeThrow_Base_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_GrenadeThrow_Base.Action_GrenadeThrow_Base_C.OnBeginBringUpWeapon
struct UAction_GrenadeThrow_Base_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_GrenadeThrow_Base.Action_GrenadeThrow_Base_C.ExecuteUbergraph_Action_GrenadeThrow_Base
struct UAction_GrenadeThrow_Base_C_ExecuteUbergraph_Action_GrenadeThrow_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
