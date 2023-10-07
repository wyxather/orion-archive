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

// 0x20 (0x20 - 0x0)
// UserDefinedStruct BattleReplayPlayerData.BattleReplayPlayerData
struct FBattleReplayPlayerData
{
public:
	int32                                        BattleCharacterID_5_9422F141481C9CF2C3902F8CA46E83C6; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharaID_7_652085E1432F3923D854E6BB52CF9F28;        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        JobID_9_D1B02EB4494E87BEB57AE997B29A2C56;          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Position_17_04791E26459EC1379E9343B914DD3A4F;      // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_REPLAY_CHARA_STATUS       CharacterStatus_35_E55355D441C104CFA4BEBDA7B0C9ABFC; // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_125A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterDisease_32_5FEE7D164A2100AEFA1AD587BB21D6FA; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


