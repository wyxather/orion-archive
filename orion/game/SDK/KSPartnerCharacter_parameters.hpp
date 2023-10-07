#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xB0 (0xB0 - 0x0)
// Function KSPartnerCharacter.KSPartnerCharacter_C.SetDir
struct AKSPartnerCharacter_C_SetDir_Params
{
public:
	enum class EKSCharacterDir                   EDir;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SetIdle;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSPartnerCharacter.KSPartnerCharacter_C.IsHunterPartner
struct AKSPartnerCharacter_C_IsHunterPartner_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSPartnerCharacter.KSPartnerCharacter_C.ReceiveTick
struct AKSPartnerCharacter_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function KSPartnerCharacter.KSPartnerCharacter_C.ExecuteUbergraph_KSPartnerCharacter
struct AKSPartnerCharacter_C_ExecuteUbergraph_KSPartnerCharacter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


