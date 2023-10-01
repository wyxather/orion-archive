#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_Unique03_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_Unique03.OakAbility_Beastmaster_Unique03_C.OnActivated
struct UOakAbility_Beastmaster_Unique03_C_OnActivated_Params
{
};

// Function OakAbility_Beastmaster_Unique03.OakAbility_Beastmaster_Unique03_C.OnCausedDamage_UniqueClassMod03
struct UOakAbility_Beastmaster_Unique03_C_OnCausedDamage_UniqueClassMod03_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OakAbility_Beastmaster_Unique03.OakAbility_Beastmaster_Unique03_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique03
struct UOakAbility_Beastmaster_Unique03_C_ExecuteUbergraph_OakAbility_Beastmaster_Unique03_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
