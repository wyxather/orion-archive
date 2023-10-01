#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_SingleTarget_FireProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C.GetFiringDirection
struct UAction_Mod_SingleTarget_FireProjectile_C_GetFiringDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C.Get Socket Location from owner
struct UAction_Mod_SingleTarget_FireProjectile_C_Get_Socket_Location_from_owner_Params
{
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C.OnActionStart
struct UAction_Mod_SingleTarget_FireProjectile_C_OnActionStart_Params
{
};

// Function Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C.ExecuteUbergraph_Action_Mod_SingleTarget_FireProjectile
struct UAction_Mod_SingleTarget_FireProjectile_C_ExecuteUbergraph_Action_Mod_SingleTarget_FireProjectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
