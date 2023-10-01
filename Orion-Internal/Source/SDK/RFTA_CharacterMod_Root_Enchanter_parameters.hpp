#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_CharacterMod_Root_Enchanter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.Get Player Location
struct UCharacterMod_Root_Enchanter_C_Get_Player_Location_Params
{
	bool                                               ValidIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnActionStart
struct UCharacterMod_Root_Enchanter_C_OnActionStart_Params
{
};

// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnSpawn
struct UCharacterMod_Root_Enchanter_C_OnSpawn_Params
{
	struct FVector*                                    SpawnLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.ReturnToTimer
struct UCharacterMod_Root_Enchanter_C_ReturnToTimer_Params
{
};

// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnStartTimer
struct UCharacterMod_Root_Enchanter_C_OnStartTimer_Params
{
};

// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnDead_Event_1
struct UCharacterMod_Root_Enchanter_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.OnCharacterEvent
struct UCharacterMod_Root_Enchanter_C_OnCharacterEvent_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C.ExecuteUbergraph_CharacterMod_Root_Enchanter
struct UCharacterMod_Root_Enchanter_C_ExecuteUbergraph_CharacterMod_Root_Enchanter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
