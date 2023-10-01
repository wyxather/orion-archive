#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_PetLoader_Charge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnLoop
struct UACharge_PetLoader_Charge_C_OnLoop_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.AttackCommandUsed
struct UACharge_PetLoader_Charge_C_AttackCommandUsed_Params
{
};

// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.StrikeDamage
struct UACharge_PetLoader_Charge_C_StrikeDamage_Params
{
};

// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnStrike
struct UACharge_PetLoader_Charge_C_OnStrike_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnHitWall
struct UACharge_PetLoader_Charge_C_OnHitWall_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnServerEnd
struct UACharge_PetLoader_Charge_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnServerBegin
struct UACharge_PetLoader_Charge_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.CallAttackCommandUsed
struct UACharge_PetLoader_Charge_C_CallAttackCommandUsed_Params
{
};

// Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.ExecuteUbergraph_ACharge_PetLoader_Charge
struct UACharge_PetLoader_Charge_C_ExecuteUbergraph_ACharge_PetLoader_Charge_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
