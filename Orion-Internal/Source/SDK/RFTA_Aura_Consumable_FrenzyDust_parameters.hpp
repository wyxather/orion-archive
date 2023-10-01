#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Aura_Consumable_FrenzyDust_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.ReceiveBeginPlay
struct AAura_Consumable_FrenzyDust_C_ReceiveBeginPlay_Params
{
};

// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.DoAction
struct AAura_Consumable_FrenzyDust_C_DoAction_Params
{
	class ACharacterGunfire**                          TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionComponent**                           ActionComp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.FadeOut
struct AAura_Consumable_FrenzyDust_C_FadeOut_Params
{
	float*                                             FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.StopAura
struct AAura_Consumable_FrenzyDust_C_StopAura_Params
{
};

// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.ExecuteUbergraph_Aura_Consumable_FrenzyDust
struct AAura_Consumable_FrenzyDust_C_ExecuteUbergraph_Aura_Consumable_FrenzyDust_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
