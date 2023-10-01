#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Skag_Rare01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Skag_Rare01.BPChar_Skag_Rare01_C
// 0x0008 (0x2608 - 0x2600)
class ABPChar_Skag_Rare01_C : public ABPChar_SkagShared_C
{
public:
	class UPointLightComponent*                        PointLight;                                               // 0x2600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Skag_Rare01.BPChar_Skag_Rare01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
