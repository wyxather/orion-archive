#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Harden_Action_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.PlayMaterialTransitionSound
struct UArmorSkill_Harden_Action_C_PlayMaterialTransitionSound_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.FilterIncomingDamage
struct UArmorSkill_Harden_Action_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.OnReapplyBuff
struct UArmorSkill_Harden_Action_C_OnReapplyBuff_Params
{
};

// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.OnLevelChanged
struct UArmorSkill_Harden_Action_C_OnLevelChanged_Params
{
};

// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.OnActionStart
struct UArmorSkill_Harden_Action_C_OnActionStart_Params
{
};

// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.OnActionStop
struct UArmorSkill_Harden_Action_C_OnActionStop_Params
{
};

// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.ExecuteUbergraph_ArmorSkill_Harden_Action
struct UArmorSkill_Harden_Action_C_ExecuteUbergraph_ArmorSkill_Harden_Action_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
