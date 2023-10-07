#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x12D (0x12D - 0x0)
// UserDefinedStruct BattleActionParam.BattleActionParam
struct FBattleActionParam
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer_3_02AB7D134499BC46FC39CA97FE733823;       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBaseBP_C*>      Targets_8_A75476FD4EACD21BEA3EB2A17809075C;        // 0x8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FAbilityDataBase                      ActionCommand_54_401E1D884C02B9DA2E2207B5E82CEB0D; // 0x18(0xF0)(Edit, BlueprintVisible)
	int32                                        BoostLevel_29_6FFD77394CBE6B14D377DCBD66945156;    // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AddValueA_47_965A7932428BEEEB27F8189A2521013C;     // 0x10C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AddValueB_48_682678F2487C0C8FC5015EBB1B1DC477;     // 0x114(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MenuIndex_43_4A439A5A45F7DB313B9CFE8DD7DB27B4;     // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AdditiveTurn_50_A8A34CE045B0E6A6C09C869E8B6AD5C6;  // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_312[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UseActionLabel_53_9E9B05E942DB3EC2E07C78B5FE80D4FF; // 0x124(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseGrowMagicBuff_56_A9B12C924404AF951659869314DDDC26; // 0x12C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


