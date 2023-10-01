#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagBadass_SpitSlam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.OnBegin
struct UA_SkagBadass_SpitSlam_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.Notify_Wwise_FinalCharge
struct UA_SkagBadass_SpitSlam_C_Notify_Wwise_FinalCharge_Params
{
};

// Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.Notify_SpitAttack_Begin
struct UA_SkagBadass_SpitSlam_C_Notify_SpitAttack_Begin_Params
{
};

// Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.Notify_SpitAttack_End
struct UA_SkagBadass_SpitSlam_C_Notify_SpitAttack_End_Params
{
};

// Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.Notify_SpitAttack_Abort
struct UA_SkagBadass_SpitSlam_C_Notify_SpitAttack_Abort_Params
{
};

// Function A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C.ExecuteUbergraph_A_SkagBadass_SpitSlam
struct UA_SkagBadass_SpitSlam_C_ExecuteUbergraph_A_SkagBadass_SpitSlam_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
