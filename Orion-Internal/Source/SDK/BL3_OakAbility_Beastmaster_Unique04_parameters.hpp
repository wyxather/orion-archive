#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_Unique04_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.OnActivated
struct UOakAbility_Beastmaster_Unique04_C_OnActivated_Params
{
};

// Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.PetSpawned_ClassModUnique04
struct UOakAbility_Beastmaster_Unique04_C_PetSpawned_ClassModUnique04_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.ApplyPetConditionalModifier
struct UOakAbility_Beastmaster_Unique04_C_ApplyPetConditionalModifier_Params
{
	class AOakCharacter*                               NewPet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.RemovePetModifier
struct UOakAbility_Beastmaster_Unique04_C_RemovePetModifier_Params
{
	class AOakCharacter*                               NewPet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique04
struct UOakAbility_Beastmaster_Unique04_C_ExecuteUbergraph_OakAbility_Beastmaster_Unique04_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
