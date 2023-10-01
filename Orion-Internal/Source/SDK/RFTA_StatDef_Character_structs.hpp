#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct StatDef_Character.StatDef_Character
// 0x00E4
struct FStatDef_Character
{
	int                                                Value_46_0C8ADDC54C23CFC0C668D9ABC33D976A;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Grit_80_723285704F32B24819102792F11B94DB;                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Skill_81_9DCA95484373288AEEC97088CFC7D590;                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Spirit_82_231D359C4A74D9E95A748AA3A6321662;               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Vigor_125_470A9C1D41C877E788F88E929CD14966;               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExperienceValue_39_C05B157B4D95207C595EB2BCDFDF26C1;      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration_152_9FB40C6F42C98FD3A0FA018F33950096;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthMax_2_6CFDFE334A66D7A83A77BABA049E97FD;             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthMaxMod_4_245B8C3E4C09F35EAC2E089CF54059A1;          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthRegen_6_A1E9A48A436077F37DE672829DF1A224;           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaMax_8_9F08594F4684FB4DF329F1A066115FD6;            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaMaxMod_10_DFE8471F4AD9522A6F002DB7AAE87286;        // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaRegen_12_ECED7B8D49923619E6D824A7CAED5933;         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaRegenDelay_14_A2DCCBD34D1A30CE752F3BBE0B0D1552;    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaEmptyDelay_122_900C13AA41C028CA4CD9F185058573B2;   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage_22_5846DCE24EE022E0AA1C8094209A40AE;               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageMod_24_301DEC8A4E801E14C88D268D43391C71;            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Armor_47_96B8C67E46E628529EB50B81F8F81A8F;                // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ArmorMod_50_E669A3F247BCA7ADABA8B4AEAD4F5E46;             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BleedDamageMod_132_69F0E902420B60461CC11CA61C069097;      // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CritDamageMod_70_249F4C5846BD995BB7E8FA9BB0582A81;        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FireDamageMod_138_AD7249514F1339857F6CE282CA4F8159;       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MeleeDamageMod_140_66FE29084EF41BC8B8F172AA2F12D17B;      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PhysicalDamageMod_146_F80EDD6F4ACF6FAF4D5ADAAB09CC9B6D;   // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CorrosiveDamageMod_173_2C7E41C949F7B4CAEAF4B5AC0E5EDF17;  // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RadiationDamageMod_149_F4A51DAD4E8FD392D2A208AEBA534540;  // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RangedDamageMod_144_06EABB004129E143B6BE2DAF52801BAA;     // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RootDamageMod_142_3F210AA64E9B28D0A7AB1EAB99A3D828;       // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShockDamageMod_134_1DA1A5CF4AC99FFE4BD5E1922C2BAC27;      // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CritChance_68_729B64B04249EED5F77CF190F41ECA41;           // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BleedCritChance_160_B4F4CC824DC6B0EF567957AA5524E5FB;     // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WeaponRecoilMod_96_9CFCA88848FA6AF6B7F9259BDD04C0D4;      // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WeaponAccuracyMod_91_7620312041EE5153093BEB9198A82087;    // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WeaponSwayMod_97_4938A6CF46D9359EB720289984AC7F02;        // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AllResistance_52_DFF692EA4E3E973CB6FCA1AC4C28AA37;        // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PhysicalResistance_54_B15AF4C34FD8284AF9B81FBA44E069BF;   // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RootResistance_56_DD6D6FA0459D999C633F3B9FDA4B917B;       // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShockResistance_58_26D4ABFF42065FDB717F08B5FAFE21CA;      // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FireResistance_155_3E0D33EC463A458B2D5F92B59D89C01A;      // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CorrosiveResistance_172_604583B941A9CBEA59354E9C76E9C19B; // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RadiationResistance_62_ACAE046B43880BCF45E3A0B40EC75A91;  // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BleedResistance_158_3514528446E77A0E460323BD18070C40;     // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MeleeDamageReduction_64_F8936B3F432051BDBB3F4C93F166D318; // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RangedDamageReduction_66_A1BABDE64EBC83A24D9A819907DD5C4F;// 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmmoMax_73_0332827D427CCE5FD2B34DADFBF45ECF;              // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ThreatScalar_85_40BCAFB94649C9FFD78605BA28448EC0;         // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WeightMax_100_1F6B7CA24C4AE5FB1B61418F716C06D2;           // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WeightMaxMod_102_4AE79C77485E0AE566002C94CC428D21;        // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VisMod_105_B916FCE9472CDB4710164980701B6FCD;              // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveSpeedMod_116_5BE259B8477CA54629B1609F251BDF03;        // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrouchSpeedMod_117_50995E9248AB587B859D929078A32E95;      // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FireSpeedMod_118_D66EF8514616F6283B418EBFADC8F9BC;        // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReloadSpeedMod_119_30AD4F4348946C9BA05F8DA173B39662;      // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExperienceMod_128_4AA45DC64FD2ACDEDE6B939775E85679;       // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WoundedReviveSpeed_165_1ECD11944C59AFB01827AB9EA770D38C;  // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WoundedHealthMax_170_DF6DF944445736C9BEEB2E91C9B1DA5B;    // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WoundedHealthRegen_171_CE12FBD446FAD0F5348EB08DB2CBD99E;  // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
