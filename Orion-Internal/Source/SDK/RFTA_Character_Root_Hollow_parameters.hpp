#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Hollow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Root_Hollow.Character_Root_Hollow_C.ReceiveBeginPlay
struct ACharacter_Root_Hollow_C_ReceiveBeginPlay_Params
{
};

// Function Character_Root_Hollow.Character_Root_Hollow_C.OnTeleportOut
struct ACharacter_Root_Hollow_C_OnTeleportOut_Params
{
};

// Function Character_Root_Hollow.Character_Root_Hollow_C.OnTeleportIn
struct ACharacter_Root_Hollow_C_OnTeleportIn_Params
{
};

// Function Character_Root_Hollow.Character_Root_Hollow_C.OnShieldBreak
struct ACharacter_Root_Hollow_C_OnShieldBreak_Params
{
};

// Function Character_Root_Hollow.Character_Root_Hollow_C.OnFXLoopStart
struct ACharacter_Root_Hollow_C_OnFXLoopStart_Params
{
};

// Function Character_Root_Hollow.Character_Root_Hollow_C.OnFXLoopEnd
struct ACharacter_Root_Hollow_C_OnFXLoopEnd_Params
{
};

// Function Character_Root_Hollow.Character_Root_Hollow_C.OnHollowAbsorbStart
struct ACharacter_Root_Hollow_C_OnHollowAbsorbStart_Params
{
};

// Function Character_Root_Hollow.Character_Root_Hollow_C.DissolveOut
struct ACharacter_Root_Hollow_C_DissolveOut_Params
{
};

// Function Character_Root_Hollow.Character_Root_Hollow_C.OnDead_Event_2
struct ACharacter_Root_Hollow_C_OnDead_Event_2_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Root_Hollow.Character_Root_Hollow_C.ExecuteUbergraph_Character_Root_Hollow
struct ACharacter_Root_Hollow_C_ExecuteUbergraph_Character_Root_Hollow_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
