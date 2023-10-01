#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Season01_MissionDropCondition_Repeatable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Season01_MissionDropCondition_Repeatable.Init_Season01_MissionDropCondition_Repeatable_C
// 0x0020 (0x0050 - 0x0030)
class UInit_Season01_MissionDropCondition_Repeatable_C : public UAttributeInitializer
{
public:
	class UGbxCondition*                               ConditionIsSeasonObjActive;                               // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDataTableValueHandle                       ItemDropChance;                                           // 0x0038(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Season01_MissionDropCondition_Repeatable.Init_Season01_MissionDropCondition_Repeatable_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
