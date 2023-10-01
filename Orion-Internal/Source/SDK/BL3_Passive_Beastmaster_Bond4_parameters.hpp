#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.ApplyFirstHit
struct UPassive_Beastmaster_Bond4_C_ApplyFirstHit_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.OnActivated
struct UPassive_Beastmaster_Bond4_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.PetCausedDamage_Bond4
struct UPassive_Beastmaster_Bond4_C_PetCausedDamage_Bond4_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.RegisterNewModifier
struct UPassive_Beastmaster_Bond4_C_RegisterNewModifier_Params
{
	class AOakCharacter*                               NewPet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.UnregisterModifier
struct UPassive_Beastmaster_Bond4_C_UnregisterModifier_Params
{
	class AOakCharacter*                               NewPet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.OnNewPetSpawned_Bond4
struct UPassive_Beastmaster_Bond4_C_OnNewPetSpawned_Bond4_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.OnPetReleased_Bond4
struct UPassive_Beastmaster_Bond4_C_OnPetReleased_Bond4_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.ExecuteUbergraph_Passive_Beastmaster_Bond4
struct UPassive_Beastmaster_Bond4_C_ExecuteUbergraph_Passive_Beastmaster_Bond4_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
