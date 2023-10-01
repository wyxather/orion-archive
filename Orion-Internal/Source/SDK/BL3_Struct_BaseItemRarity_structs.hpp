#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_BaseItemRarity.Struct_BaseItemRarity
// 0x0020
struct FStruct_BaseItemRarity
{
	float                                              IntroductionLevel_12_CD05BA604180709C1AE0B299377291B6;    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseWeight_7_F9F7E65D4BC13F8CB481169592B2D191;            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExponentForGrowthRate_11_A513926441E7F0780725D5AA7B68A29A;// 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RarityWeightLevelBiasMultiplier_19_7300719D4F7F4FC6DF1BFEB015FF4364;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           GlobalWeightModifierAttribute_20_C196FAF841A65378DE5076A565E943FE;// 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           LocalWeightModifierAttribute_23_F0BEB4F645240707F8B5889956796643;// 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
