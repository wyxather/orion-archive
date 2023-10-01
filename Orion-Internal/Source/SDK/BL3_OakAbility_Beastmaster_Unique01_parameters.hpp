#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_Unique01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.OnActivated
struct UOakAbility_Beastmaster_Unique01_C_OnActivated_Params
{
};

// Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.CausedDeath_UniqueClassMod01
struct UOakAbility_Beastmaster_Unique01_C_CausedDeath_UniqueClassMod01_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.AddPetDamageModifier
struct UOakAbility_Beastmaster_Unique01_C_AddPetDamageModifier_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique01
struct UOakAbility_Beastmaster_Unique01_C_ExecuteUbergraph_OakAbility_Beastmaster_Unique01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
