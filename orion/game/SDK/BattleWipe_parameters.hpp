#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xA8 (0xA8 - 0x0)
// Function BattleWipe.BattleWipe_C.SetState
struct UBattleWipe_C_SetState_Params
{
public:
	enum class EBATTLE_WIPE_STATE                NextState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleWipe.BattleWipe_C.IsReadyAnimation
struct UBattleWipe_C_IsReadyAnimation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x164 (0x164 - 0x0)
// Function BattleWipe.BattleWipe_C.ExecuteUbergraph_BattleWipe
struct UBattleWipe_C_ExecuteUbergraph_BattleWipe_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


