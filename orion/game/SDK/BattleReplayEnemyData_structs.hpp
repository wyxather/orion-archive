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

// 0x1D (0x1D - 0x0)
// UserDefinedStruct BattleReplayEnemyData.BattleReplayEnemyData
struct FBattleReplayEnemyData
{
public:
	int32                                        BattleCharacterID_5_2F42838642EDFC373AD0919D4CEB34A9; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EnemyID_7_B624101E4865226DBE828D9CE4CAD48A;        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RawHP_2_BC08B94D46BC31938199F8B94ABDEC70;          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharacterDisease_21_419B8BA3471A1B512875C78BE5C2C822; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Position_10_425290F8471B0E1D7CBC23B748227D9E;      // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_REPLAY_CHARA_STATUS       CharacterStatus_24_272C89744005054CCF0E97886FDCF507; // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


