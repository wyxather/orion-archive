#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_TinyTinaGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.UserConstructionScript
struct AProj_TinyTinaGun_C_UserConstructionScript_Params
{
};

// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.HNT_Prime
struct AProj_TinyTinaGun_C_HNT_Prime_Params
{
};

// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.HNT_Drop
struct AProj_TinyTinaGun_C_HNT_Drop_Params
{
};

// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.HNT_Throw
struct AProj_TinyTinaGun_C_HNT_Throw_Params
{
};

// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee
struct AProj_TinyTinaGun_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.OnExplode
struct AProj_TinyTinaGun_C_OnExplode_Params
{
};

// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.ReceiveBeginPlay
struct AProj_TinyTinaGun_C_ReceiveBeginPlay_Params
{
};

// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.OnTakeDmg
struct AProj_TinyTinaGun_C_OnTakeDmg_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Sidewinder_old
struct AProj_TinyTinaGun_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Sidewinder_old_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.ExecuteUbergraph_Proj_TinyTinaGun
struct AProj_TinyTinaGun_C_ExecuteUbergraph_Proj_TinyTinaGun_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
