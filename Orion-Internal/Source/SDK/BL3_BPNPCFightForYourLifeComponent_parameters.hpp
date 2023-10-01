#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPNPCFightForYourLifeComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.Reviving_Stopped_Host
struct UBPNPCFightForYourLifeComponent_C_Reviving_Stopped_Host_Params
{
	bool                                               IsHealed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.Reviving_Started_Host
struct UBPNPCFightForYourLifeComponent_C_Reviving_Started_Host_Params
{
	class AActor*                                      ActorBeingRevived;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ReplenishHealthAndShields
struct UBPNPCFightForYourLifeComponent_C_ReplenishHealthAndShields_Params
{
	float                                              HealthPercent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShieldPercent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.InjuredStop
struct UBPNPCFightForYourLifeComponent_C_InjuredStop_Params
{
};

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.InjuredLive
struct UBPNPCFightForYourLifeComponent_C_InjuredLive_Params
{
};

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.BeingRevived_Stopped_Host
struct UBPNPCFightForYourLifeComponent_C_BeingRevived_Stopped_Host_Params
{
};

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.BeingRevived_Started_Host
struct UBPNPCFightForYourLifeComponent_C_BeingRevived_Started_Host_Params
{
};

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Finished_Host
struct UBPNPCFightForYourLifeComponent_C_DownState_Finished_Host_Params
{
};

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Stopped_Host
struct UBPNPCFightForYourLifeComponent_C_DownState_Stopped_Host_Params
{
};

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Started_Host
struct UBPNPCFightForYourLifeComponent_C_DownState_Started_Host_Params
{
};

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ReceiveBeginPlay
struct UBPNPCFightForYourLifeComponent_C_ReceiveBeginPlay_Params
{
};

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.OnRevivingState_StartHost_Event_1
struct UBPNPCFightForYourLifeComponent_C_OnRevivingState_StartHost_Event_1_Params
{
	class AActor*                                      ActorBeingRevived;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ExecuteUbergraph_BPNPCFightForYourLifeComponent
struct UBPNPCFightForYourLifeComponent_C_ExecuteUbergraph_BPNPCFightForYourLifeComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
