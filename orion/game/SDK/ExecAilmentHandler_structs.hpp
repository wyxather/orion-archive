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

// 0x9C (0x9C - 0x0)
// UserDefinedStruct ExecAilmentHandler.ExecAilmentHandler
struct FExecAilmentHandler
{
public:
	enum class EAILMENT_TYPE                     AilmentType_21_E59B88A04E22F516091964B64ED976DA;   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EABILITY_TYPE                     AttackType_57_C915AB984999A15CC317BB91AA44A6F6;    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   Attribute_54_519344874B82DB508757658AF4D87FD9;     // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWEAPON_CATEGORY                  Weapon_55_23E8CBED47E546EFB913C6879DB58E57;        // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAilment                              Ailment_29_75475DD04B3C5EEC50F1BE921DE759E3;       // 0x8(0x49)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_1DB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAilmentHandler                       AilmentOption_56_F85884EE4AC9C18B8BAAB98975B996B5; // 0x58(0x14)(Edit, BlueprintVisible, NoDestructor)
	int32                                        HitRatio_47_CA9A9F7F4AA8CE50B17A6A94D8AFDF50;      // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CriticalRatio_48_D2C2721F424756425A68C5902B517816; // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  Enforcer_58_86723D6647D3A7C577D78DBEAB27607D;      // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBase*>          Target_59_2E347BFD49C7173CB5462C85E2AA9D4C;        // 0x80(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AActionCommandBase*                    CommandActor_60_B9ED06CF492FA9DA5A33E1846995CBCE;  // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BoostLv_53_E0A15B73413C0242F72BA59092BED332;       // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


