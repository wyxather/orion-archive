#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Rock_Formation_Pile_Eridian_Parent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.UserConstructionScript
struct APD_Rock_Formation_Pile_Eridian_Parent_C_UserConstructionScript_Params
{
};

// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.Dissolve__FinishedFunc
struct APD_Rock_Formation_Pile_Eridian_Parent_C_Dissolve__FinishedFunc_Params
{
};

// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.Dissolve__UpdateFunc
struct APD_Rock_Formation_Pile_Eridian_Parent_C_Dissolve__UpdateFunc_Params
{
};

// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_PD_Rock_Formation_Pile_Eridian
struct APD_Rock_Formation_Pile_Eridian_Parent_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_PD_Rock_Formation_Pile_Eridian_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.Damaged
struct APD_Rock_Formation_Pile_Eridian_Parent_C_Damaged_Params
{
	struct FVector                                     HitLocation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.ReceiveBeginPlay
struct APD_Rock_Formation_Pile_Eridian_Parent_C_ReceiveBeginPlay_Params
{
};

// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.DestroyCrystal
struct APD_Rock_Formation_Pile_Eridian_Parent_C_DestroyCrystal_Params
{
};

// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.FractureCrystal
struct APD_Rock_Formation_Pile_Eridian_Parent_C_FractureCrystal_Params
{
	class UDestructibleComponent*                      Crystal;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Parent
struct APD_Rock_Formation_Pile_Eridian_Parent_C_ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C.CrystalDestroyed__DelegateSignature
struct APD_Rock_Formation_Pile_Eridian_Parent_C_CrystalDestroyed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
