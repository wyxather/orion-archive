#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_CM_DLC1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnActivated
struct UOakAbility_Gunner_CM_DLC1_C_OnActivated_Params
{
};

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnClicked
struct UOakAbility_Gunner_CM_DLC1_C_OnClicked_Params
{
	unsigned char                                      InputChannel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnPutDown
struct UOakAbility_Gunner_CM_DLC1_C_OnPutDown_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnReloadStarted
struct UOakAbility_Gunner_CM_DLC1_C_OnReloadStarted_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnSwitchMode
struct UOakAbility_Gunner_CM_DLC1_C_OnSwitchMode_Params
{
};

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.StartClassModBonus
struct UOakAbility_Gunner_CM_DLC1_C_StartClassModBonus_Params
{
};

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.StopClassModBonus
struct UOakAbility_Gunner_CM_DLC1_C_StopClassModBonus_Params
{
};

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.UpdateScalar
struct UOakAbility_Gunner_CM_DLC1_C_UpdateScalar_Params
{
};

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnDeactivated
struct UOakAbility_Gunner_CM_DLC1_C_OnDeactivated_Params
{
};

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.BindWeaponEvents
struct UOakAbility_Gunner_CM_DLC1_C_BindWeaponEvents_Params
{
	class AWeapon*                                     NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.UnbindWeaponEvents
struct UOakAbility_Gunner_CM_DLC1_C_UnbindWeaponEvents_Params
{
	class AWeapon*                                     OldWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.OnWeaponChanged
struct UOakAbility_Gunner_CM_DLC1_C_OnWeaponChanged_Params
{
	class AWeapon*                                     NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     LastWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_DLC1.OakAbility_Gunner_CM_DLC1_C.ExecuteUbergraph_OakAbility_Gunner_CM_DLC1
struct UOakAbility_Gunner_CM_DLC1_C_ExecuteUbergraph_OakAbility_Gunner_CM_DLC1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
