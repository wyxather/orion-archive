#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_Flamethrower_FirePuddle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.AddFireStack
struct AMod_Flamethrower_FirePuddle_C_AddFireStack_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.DoAction
struct AMod_Flamethrower_FirePuddle_C_DoAction_Params
{
	class ACharacterGunfire**                          TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionComponent**                           ActionComp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.StopAction
struct AMod_Flamethrower_FirePuddle_C_StopAction_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.MulticastFadeOut
struct AMod_Flamethrower_FirePuddle_C_MulticastFadeOut_Params
{
};

// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.FX_Start
struct AMod_Flamethrower_FirePuddle_C_FX_Start_Params
{
};

// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.FX_Stop
struct AMod_Flamethrower_FirePuddle_C_FX_Stop_Params
{
};

// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ReceiveBeginPlay
struct AMod_Flamethrower_FirePuddle_C_ReceiveBeginPlay_Params
{
};

// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ReceiveTick
struct AMod_Flamethrower_FirePuddle_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ExecuteUbergraph_Mod_Flamethrower_FirePuddle
struct AMod_Flamethrower_FirePuddle_C_ExecuteUbergraph_Mod_Flamethrower_FirePuddle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
