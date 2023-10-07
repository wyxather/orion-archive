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

// 0x7A (0x7A - 0x0)
// UserDefinedStruct EnemyGroup.EnemyGroup
struct FEnemyGroup
{
public:
	class FName                                  VoiceID_8_88ABE9D14C8376A4464354B009EEE27D;        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              TalkPlayerID_59_120BD4E7412030C4A7451F94ADA561E6;  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PlayerVoiceID_60_93D85FE44B08FEC5471232A608853FBB; // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BGMID_7_B47857404179EE90049AD8A2FCC54983;          // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseBattleBGM_44_F63B1CBE40C700E06FCF2AB83B85A37E;  // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseVictoryBGM_45_F4B15CC0414BE79A3DCEA6AEE16AE729; // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ViewResult_46_700B4A7149794C6B852D1A8F34067738;    // 0x1E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ResumeBGM_51_8AA71C014C38BF84FA39589539D2091A;     // 0x1F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         BossBattle_39_C41476624E5271E08774A5BC3C8A87B5;    // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EscapeEnable_11_FEBCB2D446F7E7DFD4AEBC80CC938A9D;  // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FA4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PlacementType_14_0BECBBB0413FADBA41048FAB127C7CF6; // 0x24(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          EnemyID_37_DA234CE645A15970D15D82AA5102880C;       // 0x30(0x10)(Edit, BlueprintVisible)
	enum class EEndRollSegmentSet                SaveEndrollSegment_50_5B46BB3C410146887FD218ADB4E764DD; // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ID_63_E582E26A49ACDE5B91CC488DD80CA0E2;            // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BattleStartDashEnable_68_F33F272245D13218ECFEEFBD592D96B3; // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseVictoryAction_70_4B0D29114F6CC42C709F6B992E51D342; // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ResultDashEnable_71_E5F54B894116409B6B94AEB69BDA07C0; // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ItemEnable_75_D98869564F81B427D7AA06A18FEA4F75;    // 0x4B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         GuardEnable_76_7F7944DA49D139D355D6D592C4AEB8EC;   // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         BoostEnable_82_1CA0BBD2466E29C80182CA8974243BC4;   // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         BoostFinishResultEnable_80_362894EE48E086F97C9351B79E6BA95B; // 0x4E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FA8[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class ULevelSequence>         BattleStartEvent_74_4F9751D74FBEF91A1104168C3CE9152E; // 0x50(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         BattleStartEnemyVoiceEnable_84_F1D6C1AD47FB2C9FBB7337B5F61A973A; // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWEAPON_UNLOAD_GC_TYPE            WeaponUnloadGCType_87_5F0613304F7B4AC65B1A54A6120CB317; // 0x79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


