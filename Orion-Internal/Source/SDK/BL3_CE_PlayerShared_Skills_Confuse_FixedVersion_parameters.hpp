#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CE_PlayerShared_Skills_Confuse_FixedVersion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CE_PlayerShared_Skills_Confuse_FixedVersion.CE_PlayerShared_Skills_Confuse_FixedVersion_C.On Confuse Target death
struct UCE_PlayerShared_Skills_Confuse_FixedVersion_C_On_Confuse_Target_death_Params
{
	class AActor**                                     DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CE_PlayerShared_Skills_Confuse_FixedVersion.CE_PlayerShared_Skills_Confuse_FixedVersion_C.ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_FixedVersion
struct UCE_PlayerShared_Skills_Confuse_FixedVersion_C_ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_FixedVersion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
