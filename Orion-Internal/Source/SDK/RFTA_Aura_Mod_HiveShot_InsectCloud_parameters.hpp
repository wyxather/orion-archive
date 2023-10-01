#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Aura_Mod_HiveShot_InsectCloud_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.AbrasiveAmuletAddCorrosiveStack
struct AAura_Mod_HiveShot_InsectCloud_C_AbrasiveAmuletAddCorrosiveStack_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.DoActionToCharacter
struct AAura_Mod_HiveShot_InsectCloud_C_DoActionToCharacter_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.AddCorrodedStack
struct AAura_Mod_HiveShot_InsectCloud_C_AddCorrodedStack_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.CanDoAction
struct AAura_Mod_HiveShot_InsectCloud_C_CanDoAction_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.UpdateValidOverlaps
struct AAura_Mod_HiveShot_InsectCloud_C_UpdateValidOverlaps_Params
{
};

// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.DoAction
struct AAura_Mod_HiveShot_InsectCloud_C_DoAction_Params
{
	class ACharacterGunfire**                          TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionComponent**                           ActionComp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.ReceiveBeginPlay
struct AAura_Mod_HiveShot_InsectCloud_C_ReceiveBeginPlay_Params
{
};

// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.ReceiveEndPlay
struct AAura_Mod_HiveShot_InsectCloud_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.StopAction
struct AAura_Mod_HiveShot_InsectCloud_C_StopAction_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.ReceiveTick
struct AAura_Mod_HiveShot_InsectCloud_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.ExecuteUbergraph_Aura_Mod_HiveShot_InsectCloud
struct AAura_Mod_HiveShot_InsectCloud_C_ExecuteUbergraph_Aura_Mod_HiveShot_InsectCloud_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
