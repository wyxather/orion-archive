#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x4 (0x4 - 0x0)
// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCharacterID
struct UBP_MasqueradeComponent_C_GetMasqueradeCharacterID_Params
{
public:
	enum class EPlayableCharacterID              ECharaID;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7B (0x7B - 0x0)
// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.PlayMasqueradeBattleVoice
struct UBP_MasqueradeComponent_C_PlayMasqueradeBattleVoice_Params
{
public:
	enum class EBATTLE_VOICE_TYPE                EBattleVoiceType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_125C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBattleVoiceSetData                   CPlayCondition;                                    // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCommandNameSecondJob
struct UBP_MasqueradeComponent_C_GetMasqueradeCommandNameSecondJob_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCommandNameFirstJob
struct UBP_MasqueradeComponent_C_GetMasqueradeCommandNameFirstJob_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCommandDetailSecondJob
struct UBP_MasqueradeComponent_C_GetMasqueradeCommandDetailSecondJob_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCommandDetailFirstJob
struct UBP_MasqueradeComponent_C_GetMasqueradeCommandDetailFirstJob_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCommandListSecondJob
struct UBP_MasqueradeComponent_C_GetMasqueradeCommandListSecondJob_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x60 (0x60 - 0x0)
// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCommandListFirstJob
struct UBP_MasqueradeComponent_C_GetMasqueradeCommandListFirstJob_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x38 (0x38 - 0x0)
// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeEquipWeaponList
struct UBP_MasqueradeComponent_C_GetMasqueradeEquipWeaponList_Params
{
public:
	TArray<enum class EWEAPON_CATEGORY>          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x409 (0x409 - 0x0)
// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.ResumeMasquerade
struct UBP_MasqueradeComponent_C_ResumeMasquerade_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8B9 (0x8B9 - 0x0)
// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.ExecMasquerade
struct UBP_MasqueradeComponent_C_ExecMasquerade_Params
{
public:
	class ABattleCharacterBase*                  CTarget;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NInvocationTurn;                                   // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.ExecuteUbergraph_BP_MasqueradeComponent
struct UBP_MasqueradeComponent_C_ExecuteUbergraph_BP_MasqueradeComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


