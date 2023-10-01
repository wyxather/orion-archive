#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Item_SkagDogDays_CactusFruit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_SkagDogDays_CactusFruit.Item_SkagDogDays_CactusFruit_C
// 0x0008 (0x05C0 - 0x05B8)
class AItem_SkagDogDays_CactusFruit_C : public ABP_OakMissionItem_C
{
public:
	class UStaticMeshComponent*                        SM_Plant_Leaf_Rafflesia_V2;                               // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_SkagDogDays_CactusFruit.Item_SkagDogDays_CactusFruit_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
