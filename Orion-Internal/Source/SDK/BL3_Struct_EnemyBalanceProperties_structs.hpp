#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_EEnemyExperienceType_classes.hpp"
#include "BL3_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_EnemyBalanceProperties.Struct_EnemyBalanceProperties
// 0x0030
struct FStruct_EnemyBalanceProperties
{
	TEnumAsByte<EEnemyExperienceType>                  ExperienceType_8_73D53DF14EC1787599308F9A13A91D97;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DamageMultiplier_LevelBased_23_3CAF34804D650A98AB8FAFAB37CB87FF;// 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthMultiplier_01_Primary_9_07801BE24749AFC87299AD91E1B82E12;// 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthMultiplier_02_Secondary_12_9204082C4992E4200D005C8CBA622E49;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthMultiplier_03_Tertiary_16_46D12ED24F464AF5278FAAA2927388E2;// 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthMultiplier_04_Quaternary_18_1B102342416A40A8DC163EA34FE48863;// 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthMultiplier_05_Quinary_20_EC017977469D43823CC907990EEF7113;// 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         LootRarityModifier_26_95E080A844632E94012641B3BA7B57DC;   // 0x0020(0x0010) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
