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

// 0x54 (0x54 - 0x0)
// UserDefinedStruct Disease.Disease
struct FDisease
{
public:
	int32                                        ID_93_0466AA454BE914ACAB331FB16CE46893;            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DisplayName_31_69D1C8434BF89D2182B3D0ADBC0CFF22;   // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Detail_32_413B55A3472B8A090F5126BBE2ECA85D;        // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_TYPE                     DiseaseType_95_E91444C547E6E3491B74E1A6A0CCCEF0;   // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableResist_86_EB3B3B484331E50B96FD568448986BFA;  // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDISEASE_TYPE                     ResistType_96_FE87D15947D2035C123966BC390EA2AB;    // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableTurnCount_90_949FBC59465057EFF9478999DA60D028; // 0x17(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDISEASE_CATEGORY                 DiseaseCategory_94_430A06164078B026D57295941FF55AE0; // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BattleEndContinue_22_5A40FD77464DAD58696A4E9002585EC9; // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1209[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AdvValue1_73_FACD087247D104F314BBBDA27281F2CB;     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AdvValue2_77_CEC9AE314FC2337B141AEC9EC9E8471F;     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AdvValue3_78_3DD3CE0E4B4920452F10E98568177A24;     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AdvValue4_79_604547084260D208477C1AAE2D652EBF;     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AdvLabel1_99_CC1BF225400B94838DC11E8FC5C3D143;     // 0x2C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ResorceLabel_105_9029E3D640BE812B62489D90CE8E3B26; // 0x34(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableBuffExtension_115_F5B0D62A4D72F614F287B88B34DAA2ED; // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableDiseaseCopy_107_DFFB01954F6181862C15CA950651747E; // 0x3D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_120A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EffectLabel_112_2FB406E143C3E39A01C10993E2678096;  // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachEffect_113_5C256FCC41BA05DFEEB071BD3499988C; // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         GroundEffect_114_F4CEA9BF4C22F5411FFCECA471B94437; // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableDebuffExtension_117_6F5CCAF540CCE9761E370B96F45EB8BF; // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableChangePermanent_119_784EC6304273CAC98F2AC2BD2EB52ECB; // 0x4B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableDeconditionExtension_121_F89E2F944E4ADD12CF6C72B2C35D9FE6; // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESTEALTH_DISEASE_TYPE             StealthType_125_4084F9F44F2C05AAF1B95E928D7BECAE;  // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDEBUFF_ATTACHSOCKET_TYPE         AttachSocketName_128_DF9B0AB0458FADECA66AC0917F0FC67E; // 0x4E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_120B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DisplayOrder_131_3852576648B8FED68A1F1A90216DD620; // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


