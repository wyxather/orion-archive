#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetMonkey_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.GetPetJabberIngenuityBarrel
struct ABPChar_PetMonkey_C_GetPetJabberIngenuityBarrel_Params
{
	class AActor*                                      Barrel;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.ClearBarrelStanceAndBB
struct ABPChar_PetMonkey_C_ClearBarrelStanceAndBB_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnRep_Ape_Barrel_Held
struct ABPChar_PetMonkey_C_OnRep_Ape_Barrel_Held_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.ReturnJabbermonGunWeapon
struct ABPChar_PetMonkey_C_ReturnJabbermonGunWeapon_Params
{
	class AWeapon*                                     NewWeapon;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.UserConstructionScript
struct ABPChar_PetMonkey_C_UserConstructionScript_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.AlignBarrelClient
struct ABPChar_PetMonkey_C_AlignBarrelClient_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.AttachBarrelClient
struct ABPChar_PetMonkey_C_AttachBarrelClient_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.ClientBarrelThrow
struct ABPChar_PetMonkey_C_ClientBarrelThrow_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelAlign
struct ABPChar_PetMonkey_C_PetJabbermon_BarrelAlign_Params
{
	class AActor**                                     NewBarrel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelSet
struct ABPChar_PetMonkey_C_PetJabbermon_BarrelSet_Params
{
	class AActor**                                     NewBarrel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelThrow
struct ABPChar_PetMonkey_C_PetJabbermon_BarrelThrow_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelDrop
struct ABPChar_PetMonkey_C_PetJabbermon_BarrelDrop_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.CleanupBarrel
struct ABPChar_PetMonkey_C_CleanupBarrel_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnTakeDamage_PetJabbermonBarrel
struct ABPChar_PetMonkey_C_OnTakeDamage_PetJabbermonBarrel_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.Pet_DownStateStart
struct ABPChar_PetMonkey_C_Pet_DownStateStart_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabb_CancelBarrelPickup
struct ABPChar_PetMonkey_C_PetJabb_CancelBarrelPickup_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_HeldBarrelExplode
struct ABPChar_PetMonkey_C_PetJabbermon_HeldBarrelExplode_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnPetReleased
struct ABPChar_PetMonkey_C_OnPetReleased_Params
{
	bool*                                              bForced;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPetReleaseReason*                                 Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey
struct ABPChar_PetMonkey_C_BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey_Params
{
	class AActor*                                      ChildActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_ChangeGunVis
struct ABPChar_PetMonkey_C_PetJabbermon_ChangeGunVis_Params
{
	bool*                                              NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnEnrageBegin
struct ABPChar_PetMonkey_C_OnEnrageBegin_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnEnrageEnd
struct ABPChar_PetMonkey_C_OnEnrageEnd_Params
{
};

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.ExecuteUbergraph_BPChar_PetMonkey
struct ABPChar_PetMonkey_C_ExecuteUbergraph_BPChar_PetMonkey_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
