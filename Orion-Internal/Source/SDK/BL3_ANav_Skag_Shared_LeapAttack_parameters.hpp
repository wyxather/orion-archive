#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_Skag_Shared_LeapAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ANav_Skag_Shared_LeapAttack.ANav_Skag_Shared_LeapAttack_C.OnBegin
struct UANav_Skag_Shared_LeapAttack_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ANav_Skag_Shared_LeapAttack.ANav_Skag_Shared_LeapAttack_C.Notify_Bite
struct UANav_Skag_Shared_LeapAttack_C_Notify_Bite_Params
{
};

// Function ANav_Skag_Shared_LeapAttack.ANav_Skag_Shared_LeapAttack_C.ExecuteUbergraph_ANav_Skag_Shared_LeapAttack
struct UANav_Skag_Shared_LeapAttack_C_ExecuteUbergraph_ANav_Skag_Shared_LeapAttack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
