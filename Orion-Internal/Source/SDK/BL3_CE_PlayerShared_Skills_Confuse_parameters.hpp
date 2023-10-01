#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CE_PlayerShared_Skills_Confuse_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.On Confuse Target death
struct UCE_PlayerShared_Skills_Confuse_C_On_Confuse_Target_death_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.OnEnd
struct UCE_PlayerShared_Skills_Confuse_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.OnBegin
struct UCE_PlayerShared_Skills_Confuse_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.ExecuteUbergraph_CE_PlayerShared_Skills_Confuse
struct UCE_PlayerShared_Skills_Confuse_C_ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
