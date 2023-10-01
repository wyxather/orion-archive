#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Remnant_SpectatorTarget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.ReceiveBeginPlay
struct URemnant_SpectatorTarget_C_ReceiveBeginPlay_Params
{
};

// Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.OnDead_Event_1
struct URemnant_SpectatorTarget_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.ReceiveEndPlay
struct URemnant_SpectatorTarget_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.ExecuteUbergraph_Remnant_SpectatorTarget
struct URemnant_SpectatorTarget_C_ExecuteUbergraph_Remnant_SpectatorTarget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
