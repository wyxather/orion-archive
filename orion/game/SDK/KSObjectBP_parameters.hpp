#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x48 (0x48 - 0x0)
// Function KSObjectBP.KSObjectBP_C.SetObjectData
struct AKSObjectBP_C_SetObjectData_Params
{
public:
	struct FKSObjectData                         ObjectData;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x121 (0x121 - 0x0)
// Function KSObjectBP.KSObjectBP_C.SetInitLocation
struct AKSObjectBP_C_SetInitLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSObjectBP.KSObjectBP_C.ReceiveEndPlay
struct AKSObjectBP_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function KSObjectBP.KSObjectBP_C.ExecuteUbergraph_KSObjectBP
struct AKSObjectBP_C_ExecuteUbergraph_KSObjectBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


