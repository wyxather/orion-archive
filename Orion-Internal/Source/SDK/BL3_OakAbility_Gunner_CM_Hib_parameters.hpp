#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_CM_Hib_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnActivated
struct UOakAbility_Gunner_CM_Hib_C_OnActivated_Params
{
};

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnClicked
struct UOakAbility_Gunner_CM_Hib_C_OnClicked_Params
{
	unsigned char                                      InputChannel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnPutDown
struct UOakAbility_Gunner_CM_Hib_C_OnPutDown_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnReloadStarted
struct UOakAbility_Gunner_CM_Hib_C_OnReloadStarted_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnSwitchMode
struct UOakAbility_Gunner_CM_Hib_C_OnSwitchMode_Params
{
};

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.StartClassModBonus
struct UOakAbility_Gunner_CM_Hib_C_StartClassModBonus_Params
{
};

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.StopClassModBonus
struct UOakAbility_Gunner_CM_Hib_C_StopClassModBonus_Params
{
};

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.UpdateScalar
struct UOakAbility_Gunner_CM_Hib_C_UpdateScalar_Params
{
};

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnDeactivated
struct UOakAbility_Gunner_CM_Hib_C_OnDeactivated_Params
{
};

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.BindWeaponEvents
struct UOakAbility_Gunner_CM_Hib_C_BindWeaponEvents_Params
{
	class AWeapon*                                     NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.UnbindWeaponEvents
struct UOakAbility_Gunner_CM_Hib_C_UnbindWeaponEvents_Params
{
	class AWeapon*                                     OldWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.OnWeaponChanged
struct UOakAbility_Gunner_CM_Hib_C_OnWeaponChanged_Params
{
	class AWeapon*                                     NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     LastWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_Hib.OakAbility_Gunner_CM_Hib_C.ExecuteUbergraph_OakAbility_Gunner_CM_Hib
struct UOakAbility_Gunner_CM_Hib_C_ExecuteUbergraph_OakAbility_Gunner_CM_Hib_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
