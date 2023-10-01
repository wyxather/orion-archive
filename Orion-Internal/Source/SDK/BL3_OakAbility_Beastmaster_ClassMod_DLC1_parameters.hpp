#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_ClassMod_DLC1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_ClassMod_DLC1.OakAbility_Beastmaster_ClassMod_DLC1_C.OnActivated
struct UOakAbility_Beastmaster_ClassMod_DLC1_C_OnActivated_Params
{
};

// Function OakAbility_Beastmaster_ClassMod_DLC1.OakAbility_Beastmaster_ClassMod_DLC1_C.Beastmaster DLC1 Class Mod On Caused Any Damage
struct UOakAbility_Beastmaster_ClassMod_DLC1_C_Beastmaster_DLC1_Class_Mod_On_Caused_Any_Damage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OakAbility_Beastmaster_ClassMod_DLC1.OakAbility_Beastmaster_ClassMod_DLC1_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_DLC1
struct UOakAbility_Beastmaster_ClassMod_DLC1_C_ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_DLC1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
