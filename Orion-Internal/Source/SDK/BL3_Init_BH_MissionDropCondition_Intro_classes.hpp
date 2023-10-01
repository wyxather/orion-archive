#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_BH_MissionDropCondition_Intro_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_BH_MissionDropCondition_Intro.Init_BH_MissionDropCondition_Intro_C
// 0x0028 (0x0058 - 0x0030)
class UInit_BH_MissionDropCondition_Intro_C : public UAttributeInitializer
{
public:
	class UGbxCondition*                               ConditionRemainingShards;                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               ConditionOnFirstShard;                                    // 0x0038(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDataTableValueHandle                       ItemDropChance;                                           // 0x0040(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_BH_MissionDropCondition_Intro.Init_BH_MissionDropCondition_Intro_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
