#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_PS_JAK_Trickshot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnRegistered
struct UAbility_PS_JAK_Trickshot_C_OnRegistered_Params
{
};

// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnCausedDamage
struct UAbility_PS_JAK_Trickshot_C_OnCausedDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.ReloadEndedDelegate
struct UAbility_PS_JAK_Trickshot_C_ReloadEndedDelegate_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnDeactivated
struct UAbility_PS_JAK_Trickshot_C_OnDeactivated_Params
{
};

// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnUnregistered
struct UAbility_PS_JAK_Trickshot_C_OnUnregistered_Params
{
};

// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnPaused
struct UAbility_PS_JAK_Trickshot_C_OnPaused_Params
{
};

// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.ExecuteUbergraph_Ability_PS_JAK_Trickshot
struct UAbility_PS_JAK_Trickshot_C_ExecuteUbergraph_Ability_PS_JAK_Trickshot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
