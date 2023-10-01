#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_Infusion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.GetShotModifier
struct UPassive_Siren_Infusion_C_GetShotModifier_Params
{
	class UWeaponShotModifier*                         res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.AddShotModifier
struct UPassive_Siren_Infusion_C_AddShotModifier_Params
{
};

// Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.RemoveAllShotModifiers
struct UPassive_Siren_Infusion_C_RemoveAllShotModifiers_Params
{
};

// Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.OnAttunedElementChanged
struct UPassive_Siren_Infusion_C_OnAttunedElementChanged_Params
{
};

// Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.ExecuteUbergraph_Passive_Siren_Infusion
struct UPassive_Siren_Infusion_C_ExecuteUbergraph_Passive_Siren_Infusion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
