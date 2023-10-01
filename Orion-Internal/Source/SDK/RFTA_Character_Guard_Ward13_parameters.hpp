#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Guard_Ward13_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Guard_Ward13.Character_Guard_Ward13_C.SetCustomLipFlap
struct ACharacter_Guard_Ward13_C_SetCustomLipFlap_Params
{
	bool*                                              SetCustomLipFlap;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Guard_Ward13.Character_Guard_Ward13_C.ReceiveTick
struct ACharacter_Guard_Ward13_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Guard_Ward13.Character_Guard_Ward13_C.OnSetCustomFlap
struct ACharacter_Guard_Ward13_C_OnSetCustomFlap_Params
{
	bool*                                              UseCustomFlap;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Guard_Ward13.Character_Guard_Ward13_C.ExecuteUbergraph_Character_Guard_Ward13
struct ACharacter_Guard_Ward13_C_ExecuteUbergraph_Character_Guard_Ward13_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
