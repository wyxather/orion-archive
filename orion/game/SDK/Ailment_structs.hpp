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

// 0x49 (0x49 - 0x0)
// UserDefinedStruct Ailment.Ailment
struct FAilment
{
public:
	int32                                        ID_119_1049E96240F46B8E8A7772AA73CB5BB0;           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_TYPE                     AilmentType_90_83C2176A44884C5214E09CB7960725C7;   // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_CALC_TYPE_OLD            CalcType_98_EE3DC6C641F97E3E0DE9E9917815CEFC;      // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_ATTRIBUTE_TYPE           Attribute_99_F44EE95B46F4F03C985E8885FE555E18;     // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_TARGET_TYPE_OLD          Target_100_AC32A4AF450266B852A0AFABA6621862;       // 0x7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DiseaseRatio_116_D9555040467E7BC7EDEA4999BDEB691A; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BAF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDiseaseHandler>               AddDisease_105_48D7D93A4B672BF6B0204FA2F9145384;   // 0x10(0x10)(Edit, BlueprintVisible)
	enum class EAILMENT_REMOVE_DISEASE_TYPE      TargetDiseaseType_125_07AB104C454531158F68429ACA2C5F20; // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_ORDER_CHANGE_TYPE        OrderChangeType_111_16C1716E4D6D9D7553A2CB8154F4ACA9; // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAilmentCharacterParam                TargetParam_115_0B80984C434C1694753AF2AAB18309E1;  // 0x22(0xD)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB1[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AdvValue1_72_CADF26134934D5012104B1AFC02BA353;     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AdvValue2_80_311413CA49B5FC2CD58BEE8037B0165D;     // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AdvValue3_81_403DFB9A4529B2EAAB6D219D0785A5A4;     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AdvValue4_82_FE8695C94323A1270A6A04923A83D2CC;     // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TargetDiseaseName_124_ACC9C2664542C0123FF844974AF613CF; // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFIELD_DISEASE_TYPE               FieldDiseaseType_128_A28F6EC24FB5E76C0C6B258DECB7A108; // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


