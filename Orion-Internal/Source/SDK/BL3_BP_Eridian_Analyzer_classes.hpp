#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Eridian_Analyzer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Eridian_Analyzer.BP_Eridian_Analyzer_C
// 0x0008 (0x04E8 - 0x04E0)
class ABP_Eridian_Analyzer_C : public AGbxSkeletalMeshActor
{
public:
	class UParticleSystemComponent*                    PS_Eridian_Analyzer_Beams;                                // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Eridian_Analyzer.BP_Eridian_Analyzer_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
