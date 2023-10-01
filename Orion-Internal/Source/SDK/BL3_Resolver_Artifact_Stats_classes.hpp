#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Resolver_Artifact_Stats_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Resolver_Artifact_Stats.Resolver_Artifact_Stats_C
// 0x0010 (0x0038 - 0x0028)
class UResolver_Artifact_Stats_C : public UAttributeValueResolver
{
public:
	struct FDataTableRowHandle                         Table_Stat;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Resolver_Artifact_Stats.Resolver_Artifact_Stats_C");
		return ptr;
	}


	float GetValueForAttribute(class UGbxAttributeData** Attribute, class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
