#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_DigiClone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.SetIsTeleporting
struct UIBPChar_DigiClone_C_SetIsTeleporting_Params
{
	bool                                               bIsTeleporting;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.StartProvoke
struct UIBPChar_DigiClone_C_StartProvoke_Params
{
};

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.OnDigicloneTeleport
struct UIBPChar_DigiClone_C_OnDigicloneTeleport_Params
{
};

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.UpdateMaxTeleportRange
struct UIBPChar_DigiClone_C_UpdateMaxTeleportRange_Params
{
};

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.DigiCloneThrowGrenade
struct UIBPChar_DigiClone_C_DigiCloneThrowGrenade_Params
{
};

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.AutomagicallyRemoveDamageOverride
struct UIBPChar_DigiClone_C_AutomagicallyRemoveDamageOverride_Params
{
};

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.AutomagicallyRegisterDamageOverride
struct UIBPChar_DigiClone_C_AutomagicallyRegisterDamageOverride_Params
{
	EOakElementalType                                  ElementalType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Grade;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.ReleaseDigiclone
struct UIBPChar_DigiClone_C_ReleaseDigiclone_Params
{
};

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.KillDigiCloneNow
struct UIBPChar_DigiClone_C_KillDigiCloneNow_Params
{
};

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.BlowUpDigiClone
struct UIBPChar_DigiClone_C_BlowUpDigiClone_Params
{
};

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.StopScalingDigiClone
struct UIBPChar_DigiClone_C_StopScalingDigiClone_Params
{
};

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.BeginScalingDigiClone
struct UIBPChar_DigiClone_C_BeginScalingDigiClone_Params
{
};

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.Get Owners Grenade Projectile Class
struct UIBPChar_DigiClone_C_Get_Owners_Grenade_Projectile_Class_Params
{
	class UClass*                                      Grenade_Projectile_Class;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
