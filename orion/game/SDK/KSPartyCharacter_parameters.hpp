#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xD (0xD - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.IsFollowNpcCharacter
struct AKSPartyCharacter_C_IsFollowNpcCharacter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.IsPartyCharacter
struct AKSPartyCharacter_C_IsPartyCharacter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.SetWaitHistoryIndex
struct AKSPartyCharacter_C_SetWaitHistoryIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.GetHunterPartnerFbComponent
struct AKSPartyCharacter_C_GetHunterPartnerFbComponent_Params
{
public:
	class UHunterPartnerFbComponent*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.GetFormationNumber
struct AKSPartyCharacter_C_GetFormationNumber_Params
{
public:
	int32                                        FormationNumber;                                   // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.GetFollowIndex
struct AKSPartyCharacter_C_GetFollowIndex_Params
{
public:
	int32                                        FollowIndex;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.Debug_GetDebugFollowInfo
struct AKSPartyCharacter_C_Debug_GetDebugFollowInfo_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.Debug_GetDebugInfo
struct AKSPartyCharacter_C_Debug_GetDebugInfo_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.GetPartyCharaPropertyComponent
struct AKSPartyCharacter_C_GetPartyCharaPropertyComponent_Params
{
public:
	class UPartyCharaPropertyComponent*          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.UpdateFollow
struct AKSPartyCharacter_C_UpdateFollow_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.UpdateFollowMove
struct AKSPartyCharacter_C_UpdateFollowMove_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.SetFollowEnable
struct AKSPartyCharacter_C_SetFollowEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.GetFollowTarget
struct AKSPartyCharacter_C_GetFollowTarget_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.SetFollowTarget
struct AKSPartyCharacter_C_SetFollowTarget_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      FollowTarget;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPartner;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.UpdateMove
struct AKSPartyCharacter_C_UpdateMove_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.ReceiveTick
struct AKSPartyCharacter_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.SetCharacterLocation
struct AKSPartyCharacter_C_SetCharacterLocation_Params
{
public:
	struct FVector                               InLocation;                                        // 0x0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   InDir;                                             // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.SetCharacterEnable
struct AKSPartyCharacter_C_SetCharacterEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function KSPartyCharacter.KSPartyCharacter_C.ExecuteUbergraph_KSPartyCharacter
struct AKSPartyCharacter_C_ExecuteUbergraph_KSPartyCharacter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


