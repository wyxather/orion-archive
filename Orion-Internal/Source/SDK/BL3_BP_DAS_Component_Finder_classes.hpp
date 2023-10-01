#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DAS_Component_Finder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DAS_Component_Finder.BP_DAS_Component_Finder_C
// 0x0008 (0x04F0 - 0x04E8)
class ABP_DAS_Component_Finder_C : public ADistributedAmbientSound
{
public:
	class UTextRenderComponent*                        TextRender;                                               // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DAS_Component_Finder.BP_DAS_Component_Finder_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
