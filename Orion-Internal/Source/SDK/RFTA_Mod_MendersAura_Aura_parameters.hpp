#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_MendersAura_Aura_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.CanDoAction
struct AMod_MendersAura_Aura_C_CanDoAction_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.ReceiveBeginPlay
struct AMod_MendersAura_Aura_C_ReceiveBeginPlay_Params
{
};

// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.DoAction
struct AMod_MendersAura_Aura_C_DoAction_Params
{
	class ACharacterGunfire**                          TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionComponent**                           ActionComp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.StopAction
struct AMod_MendersAura_Aura_C_StopAction_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.FadeOut
struct AMod_MendersAura_Aura_C_FadeOut_Params
{
	float*                                             FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.ReceiveTick
struct AMod_MendersAura_Aura_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.ExecuteUbergraph_Mod_MendersAura_Aura
struct AMod_MendersAura_Aura_C_ExecuteUbergraph_Mod_MendersAura_Aura_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
