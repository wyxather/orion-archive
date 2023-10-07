#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xF8 (0xF8 - 0x0)
// Function BP_SupporterAndEnemyToNpcTableMaker.BP_SupporterAndEnemyToNpcTableMaker_C.GetEnemyLabelsByEnemyGroup
struct UBP_SupporterAndEnemyToNpcTableMaker_C_GetEnemyLabelsByEnemyGroup_Params
{
public:
	TArray<class FName>                          OutEnemeyLabels;                                   // 0x0(0x10)(Parm, OutParm)
	class FName                                  EnemyGroupLabel;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}
}


