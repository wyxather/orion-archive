#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C.Update Text
struct UWBP_BattlePartyChangeGuide_C_Update_Text_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C.SetColor
struct UWBP_BattlePartyChangeGuide_C_SetColor_Params
{
public:
	enum class EGameColor                        ColorType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C.ChangeInputMode
struct UWBP_BattlePartyChangeGuide_C_ChangeInputMode_Params
{
public:
	enum class EKSUseInputType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C.ExecuteUbergraph_WBP_BattlePartyChangeGuide
struct UWBP_BattlePartyChangeGuide_C_ExecuteUbergraph_WBP_BattlePartyChangeGuide_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


