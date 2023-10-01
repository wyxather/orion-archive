#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged10_NEW_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.GetProjectileComponent
struct UPassive_Beastmaster_Ranged10_NEW_C_GetProjectileComponent_Params
{
	class AWeapon*                                     InWeapon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWeaponFireProjectileComponent*              FireComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.RandomChanceByGrade
struct UPassive_Beastmaster_Ranged10_NEW_C_RandomChanceByGrade_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnWeaponUsed_Ranged10
struct UPassive_Beastmaster_Ranged10_NEW_C_OnWeaponUsed_Ranged10_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnWeaponChanged_Ranged10
struct UPassive_Beastmaster_Ranged10_NEW_C_OnWeaponChanged_Ranged10_Params
{
	class AWeapon*                                     NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     LastWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnActivated
struct UPassive_Beastmaster_Ranged10_NEW_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.TryAddProjectileToNextShot
struct UPassive_Beastmaster_Ranged10_NEW_C_TryAddProjectileToNextShot_Params
{
	class AWeapon*                                     InWeapon;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnPaused
struct UPassive_Beastmaster_Ranged10_NEW_C_OnPaused_Params
{
};

// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnDeactivated
struct UPassive_Beastmaster_Ranged10_NEW_C_OnDeactivated_Params
{
};

// Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW
struct UPassive_Beastmaster_Ranged10_NEW_C_ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
