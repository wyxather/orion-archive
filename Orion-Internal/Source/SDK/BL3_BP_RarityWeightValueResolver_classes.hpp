#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_RarityWeightValueResolver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RarityWeightValueResolver.BP_RarityWeightValueResolver_C
// 0x0010 (0x0038 - 0x0028)
class UBP_RarityWeightValueResolver_C : public UAttributeValueResolver
{
public:
	struct FDataTableRowHandle                         RarityTableRowHandle;                                     // 0x0028(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RarityWeightValueResolver.BP_RarityWeightValueResolver_C");
		return ptr;
	}


	void ProposedNewVersionOfGetValue(class UObject* Context, float* Value);
	float GetValueForAttribute(class UGbxAttributeData** Attribute, class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
