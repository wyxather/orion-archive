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

// 0x8A (0x8A - 0x0)
// UserDefinedStruct ExecDiseaseHandler.ExecDiseaseHandler
struct FExecDiseaseHandler
{
public:
	bool                                         Enable_9_F9D2B64940563C8B2CA58982E4C1B06F;         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Permanent_44_FFBD447645A1417E040CA39F4804103C;     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1257[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DiseaseLabel_47_FB53C6CE4EBB287C8B040C83B76B537E;  // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDisease                              DiseaseData_27_97F541284DF239C711F646952A80D4DC;   // 0xC(0x54)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InvocationValue_36_A914DB0041C4C2B196ABD3AC21AAA428; // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExInvocationValue_50_7037736A4F1FC49B2F1FEEBE385647AC; // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Counter_39_1CBC0E87438EDA125ABEE9873389C307;       // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BoostLevel_38_25A09D474C08B7CAFFE6438FEABD269D;    // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  Enforcer_58_E69AF93F4655D1D0F56623BDB8A27651;      // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              DiseaseEffect_42_3D4BF7EB4C4B53422C012DBE3A78279F; // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseAttachSocket_52_8AF4F3F94D9C862F892110B32834A755; // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1258[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DiseaseCounter_55_3D46147643888D24E5A9D997DBDFF88B; // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EquipmentDisease_59_2092F8024009F0ACE21603B27AB25FC9; // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SupPermanent_61_F7D3BF124646817FDC9D3CA61D869938;  // 0x89(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


