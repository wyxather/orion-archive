#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2 (0x2 - 0x0)
// Function WBP_SubActionCharacterPanel.WBP_SubActionCharacterPanel_C.Get Selecter Effect Visibility
struct UWBP_SubActionCharacterPanel_C_Get_Selecter_Effect_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function WBP_SubActionCharacterPanel.WBP_SubActionCharacterPanel_C.SetActiveCharacter
struct UWBP_SubActionCharacterPanel_C_SetActiveCharacter_Params
{
public:
	class ABattleCharacterBaseBP_C*              Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


