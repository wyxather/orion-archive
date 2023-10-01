#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_EnforcerShield_ThrowShield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.OnBegin
struct UA_EnforcerShield_ThrowShield_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.OnEnd
struct UA_EnforcerShield_ThrowShield_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.Notify_ShieldThrow
struct UA_EnforcerShield_ThrowShield_C_Notify_ShieldThrow_Params
{
};

// Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.Notify_TransformToGun
struct UA_EnforcerShield_ThrowShield_C_Notify_TransformToGun_Params
{
};

// Function A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C.ExecuteUbergraph_A_EnforcerShield_ThrowShield
struct UA_EnforcerShield_ThrowShield_C_ExecuteUbergraph_A_EnforcerShield_ThrowShield_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
