#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Att_Artifact_CosmicCrater_Damage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Att_Artifact_CosmicCrater_Damage.Init_Att_Artifact_CosmicCrater_Damage_C
// 0x0004 (0x0034 - 0x0030)
class UInit_Att_Artifact_CosmicCrater_Damage_C : public UAttributeInitializer
{
public:
	float                                              Scalar;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Att_Artifact_CosmicCrater_Damage.Init_Att_Artifact_CosmicCrater_Damage_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
