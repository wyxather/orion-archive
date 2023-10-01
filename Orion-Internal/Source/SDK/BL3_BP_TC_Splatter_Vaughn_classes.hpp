#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TC_Splatter_Vaughn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TC_Splatter_Vaughn.BP_TC_Splatter_Vaughn_C
// 0x000C (0x04F8 - 0x04EC)
class ABP_TC_Splatter_Vaughn_C : public ACine_TitleCardLettering_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Splatter;                                                 // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TC_Splatter_Vaughn.BP_TC_Splatter_Vaughn_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
