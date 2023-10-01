#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_EchoLog_NonMission_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EchoLog_NonMission.EchoLog_NonMission_C.UserConstructionScript
struct AEchoLog_NonMission_C_UserConstructionScript_Params
{
};

// Function EchoLog_NonMission.EchoLog_NonMission_C.ReceiveBeginPlay
struct AEchoLog_NonMission_C_ReceiveBeginPlay_Params
{
};

// Function EchoLog_NonMission.EchoLog_NonMission_C.PickedUp
struct AEchoLog_NonMission_C_PickedUp_Params
{
	class AActor*                                      WasPickedUpBy;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EchoLog_NonMission.EchoLog_NonMission_C.__UserState_SpawnCondition_2
struct AEchoLog_NonMission_C___UserState_SpawnCondition_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EchoLog_NonMission.EchoLog_NonMission_C.ExecuteUbergraph_EchoLog_NonMission
struct AEchoLog_NonMission_C_ExecuteUbergraph_EchoLog_NonMission_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
