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

// 0x20E (0x20E - 0x0)
// UserDefinedStruct EnemyData.EnemyData
struct FEnemyData
{
public:
	int32                                        EnemyID_150_C340ADF44DDF1FA9859D9B9EB7A9BF4C;      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DisplayNameID_151_570F1B1240B0BB42C31AA7A4F6CFAF72; // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ResourceLabel_295_2D43957442A6F48343BB639C79635FAE; // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DisplayRank_163_164F613A4192DACE464EECAF9A382F9C;  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EnemyLevel_229_0B056BF4409D6AC56574BA9CB5219EA0;   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageRatio_232_9DA3B3A44497A1389F10A09C9A0121E5;  // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECHARACTER_SIZE                   Size_322_6D1B69254B5E5EBF0DC1AE98B16729D0;         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPCFlag_205_2349F79B4FBCFEAFF33C8F9B1C3D3107;      // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWEAPON_STANCE                    WeaponStance_291_9A9F2C10471020D014829BB1E44F3195; // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1006[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WeaponItemLabel_287_FC3FA16845388B6916B4C3B075BD7FA5; // 0x24(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DeadEffectSlow_243_D174CD5648F3EFBD52119D9A342F0764; // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         MainEnemy_244_B56C489E45163033A302468220E309F5;    // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NonPartBattle_252_B3D355EC43F64A3018387EA6C61CAE1F; // 0x2E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseCatDamageType_250_7BC801144E049115D990478615CEF9E0; // 0x2F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DisableDeadKnockBack_248_17E7BC0349DD6EE3FF0E98BA6B5BE8F3; // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1008[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterParam                       Param_288_26ADF7E94CDC32CEEDEF2CA219E264BF;        // 0x34(0x34)(Edit, BlueprintVisible, NoDestructor)
	int32                                        Exp_46_CDF6F63E46FF9E07F64326AB4F40DF38;           // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        JobPoint_153_D5FBB9B64751E2916C22F098CF1ED0D6;     // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Money_45_0D1763E0404AA80598B4B69F460861D1;         // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StealMoney_238_C35331A14C68B5E174DA5F86BED10FD9;   // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TameEnable_221_7C3129754DC5615D28C4EDA89AD88ABC;   // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1009[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultTameRate_222_6F7E391A4A5BF166F3FD38B95DDACE12; // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  InvadeMonsterID_217_72B46B25440B6DD2E58D809754070C43; // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FirstBP_157_A9BAE80B4AED1411EB63288E9043C107;      // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EENEMY_DEAD_TYPE                  DeadType_323_EE9C700E4D07A774EE44B9B5B22AA7C8;     // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_100C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EATTRIBUTE_RESIST>         AttributeResist_282_87881AFB4F4DD148EA692D8F63B73E16; // 0x90(0x10)(Edit, BlueprintVisible)
	TArray<enum class EATTRIBUTE_RESIST>         WeaponResist_283_0BB9356646F9B928F5FC1584A458ABBC; // 0xA0(0x10)(Edit, BlueprintVisible)
	TArray<enum class EATTRIBUTE_RESIST>         DiseaseResist_284_473D871A46E1123D4DB763B4629FFA22; // 0xB0(0x10)(Edit, BlueprintVisible)
	bool                                         StealGuard_296_148A86084818F42133C90C9D84C5E707;   // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_100D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  HaveItemID_141_F51E74424D8CB057EE57E79ABB6535B0;   // 0xC4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DropProbability_142_E0E84476427EF904B1835A8E1392E402; // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UBattleAIBase>           EnemyAI_321_C934EDCB46C8699CFAB4AD87D320D2DE;      // 0xD0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                          EnemyAbility_148_E45691CD473B1728502220B526E38185; // 0xF8(0x10)(Edit, BlueprintVisible)
	struct FVector                               DiseaseEffectOffset_170_AE4383354952AABE45DFF09F75199974; // 0x108(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EnemyEffectOffset_209_E85DBFD54B3A9E01510D57BB9B173272; // 0x114(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StatusUIOffset_203_A59981A54E1A07A82A500FBCB7C9A00E; // 0x120(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DamageUIOffset_204_F52C6E0E4C6648F8B440DEBCC9D4AC17; // 0x12C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             IconL_UV_182_9B6F0DC9467B0EC6E2BF0EA2122480F8;     // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PixelScaleL_191_5B47FD49499C355412E5208473C5275A;  // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             IconS_UV_183_96B9EBF74F9891A8C0235EAB8AB65C69;     // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PixelScaleS_192_1D2C46134B3AAB93EC7A2496E512F134;  // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SPDiseaseEffectOffset_278_C6CCE1D84091F806A184BA9316DA1D06; // 0x158(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SPEnemyEffectOffset_279_E95FAC374AA9C28AE80C879BA0829C7A; // 0x164(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SPStatusUIOffset_280_A90EECD24A0902DF07E28183C1A6863D; // 0x170(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SPDamageUIOffset_281_380963094519EE80932350A06F5B63B0; // 0x17C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StealMoneyGuard_298_E478E53B4DA8F726470B708E9AB69222; // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_100F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StealItemID_301_CE0FDB3A4138AFC8BFF2ADB1E0E175C6;  // 0x18C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AbilitySEDelay_304_A85AE60D45B90DFE38ECAB8C5BBA082C; // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TextInfoLabel_307_695F3F2C44AC0BA2DF615A8CFF0A3C1E; // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BribeGuard_312_564F274D4FA6ECBB36424A97AF2604D5;   // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1010[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BribeMoney_314_655670884C00B51408F90F87D9251708;   // 0x1A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RevealShieldPoint_318_33A2EAE54825316FAE75DD9F5F13CF15; // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1012[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UBattleAIBase>           RevealEnemyAI_320_D486C76644E549BF05A58686E82CAA3E; // 0x1B0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                  DismantlingLabel_327_6C38127B4012E8C3731B7385BF339279; // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WarpOffset_330_CEB1591C481C77C01DBA619F892B731B;   // 0x1E0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LegendTameMonster_333_703E7AB144B5501FFEE88D9DC3F752F0; // 0x1EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1013[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ActionModeResourceList_337_E0AEE5724C34C2B97E31158CB180A281; // 0x1F0(0x10)(Edit, BlueprintVisible)
	int32                                        WaitEnemyActionFrame_340_ACB4F9294FD876F4C8223CBDCA2494A4; // 0x200(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableBreakSlow_342_B5C09BB64422F22FE8880E84FB005AC3; // 0x204(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1014[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ID_347_21082F4D4A77C4ED6436339597BC7174;           // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NotInsertOrderWithCallEnemy_350_DEA51224409035A3ED5D06A43D7D752D; // 0x20C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EBREAK_CAMERA_TYPE                BreakCameraType_354_A4F1E4D84AD67752F2EA51ACE8A8AED1; // 0x20D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


