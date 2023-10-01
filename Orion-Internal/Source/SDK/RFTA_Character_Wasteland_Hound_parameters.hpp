#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Wasteland_Hound_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.MassSummon
struct ACharacter_Wasteland_Hound_C_MassSummon_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.Bandit Neary by
struct ACharacter_Wasteland_Hound_C_Bandit_Neary_by_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.UserConstructionScript
struct ACharacter_Wasteland_Hound_C_UserConstructionScript_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.ReceiveBeginPlay
struct ACharacter_Wasteland_Hound_C_ReceiveBeginPlay_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.ReceiveTick
struct ACharacter_Wasteland_Hound_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.SFX_Pant_On
struct ACharacter_Wasteland_Hound_C_SFX_Pant_On_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.SFX_Pant_Off
struct ACharacter_Wasteland_Hound_C_SFX_Pant_Off_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.SFX_Alert
struct ACharacter_Wasteland_Hound_C_SFX_Alert_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.RodBusted
struct ACharacter_Wasteland_Hound_C_RodBusted_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.KillMaster
struct ACharacter_Wasteland_Hound_C_KillMaster_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.HerdFollow
struct ACharacter_Wasteland_Hound_C_HerdFollow_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.HerdEat
struct ACharacter_Wasteland_Hound_C_HerdEat_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.ArmorVFX
struct ACharacter_Wasteland_Hound_C_ArmorVFX_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.HealthVFX
struct ACharacter_Wasteland_Hound_C_HealthVFX_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.DamageVFX
struct ACharacter_Wasteland_Hound_C_DamageVFX_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.OnDead_Event_1
struct ACharacter_Wasteland_Hound_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.ResetAdds
struct ACharacter_Wasteland_Hound_C_ResetAdds_Params
{
};

// Function Character_Wasteland_Hound.Character_Wasteland_Hound_C.ExecuteUbergraph_Character_Wasteland_Hound
struct ACharacter_Wasteland_Hound_C_ExecuteUbergraph_Character_Wasteland_Hound_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
