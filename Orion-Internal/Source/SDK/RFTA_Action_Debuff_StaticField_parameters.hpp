#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Debuff_StaticField_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.MarkTargetShocked
struct UAction_Debuff_StaticField_C_MarkTargetShocked_Params
{
	class AActor**                                     OtherTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAction_Debuff_StaticField_C**               OtherAction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Closeness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.GetSparkPoint
struct UAction_Debuff_StaticField_C_GetSparkPoint_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Point;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.UpdatePotentialTarget
struct UAction_Debuff_StaticField_C_UpdatePotentialTarget_Params
{
	class UAction_Debuff_StaticField_C**               OtherAction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          OtherCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.OnTick
struct UAction_Debuff_StaticField_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.OnTakeDamage
struct UAction_Debuff_StaticField_C_OnTakeDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.Trigger
struct UAction_Debuff_StaticField_C_Trigger_Params
{
	class ACharacterGunfire**                          OtherCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              DelayedExplode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor**                                     TriggerCause;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.DoSpark
struct UAction_Debuff_StaticField_C_DoSpark_Params
{
	class ACharacterGunfire**                          OtherCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Closeness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.OnActionStart
struct UAction_Debuff_StaticField_C_OnActionStart_Params
{
};

// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.ListenForShockDamage
struct UAction_Debuff_StaticField_C_ListenForShockDamage_Params
{
};

// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.ExecuteUbergraph_Action_Debuff_StaticField
struct UAction_Debuff_StaticField_C_ExecuteUbergraph_Action_Debuff_StaticField_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
