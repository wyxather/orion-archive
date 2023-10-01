#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_HYP_Shield_RestoreAmmo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.OnShieldCreated
struct UBP_HYP_Shield_RestoreAmmo_C_OnShieldCreated_Params
{
};

// Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.OnTakeWeaponShieldDamage
struct UBP_HYP_Shield_RestoreAmmo_C_OnTakeWeaponShieldDamage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShieldDamage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo
struct UBP_HYP_Shield_RestoreAmmo_C_ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
