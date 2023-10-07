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

// 0x3D4 (0x3D4 - 0x0)
// UserDefinedStruct PartyCharacterData.PartyCharacterData
struct FPartyCharacterData
{
public:
	struct FPlayableCharacterData                PlayableCharaData_67_413EBFD34C5B00AEAC9824A345279F43; // 0x0(0x1B8)(Edit, BlueprintVisible)
	int32                                        Level_21_2C55857F499655FB07EEAF9B522AC5C8;         // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HP_24_2A6228A343851A451A886590D10A21ED;            // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MP_25_C2C61B2A434B19B1AB536EB051C9435F;            // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSaveEquipmentData                    Equipment_66_F3AC043C450FE4298AE68E8C885C651A;     // 0x1C8(0x60)(Edit, BlueprintVisible)
	struct FJobData                              FirstJobData_71_71C1CA0144EA82E9B0C3AEA85ABA59A2;  // 0x228(0xC8)(Edit, BlueprintVisible)
	struct FJobData                              SecondJobData_73_D4C3F91B4CD20A203CE36F9C6CA20666; // 0x2F0(0xC8)(Edit, BlueprintVisible)
	TArray<class FName>                          Disease_50_2C654DB04F5D81649744D2957FB203A3;       // 0x3B8(0x10)(Edit, BlueprintVisible)
	class FName                                  SupporterID_44_68527908446621C52F29B6BA201DF6D3;   // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PotentialityActionPoint_74_73EF7C3E46CA94EE92655B8B3C4D3C5A; // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


