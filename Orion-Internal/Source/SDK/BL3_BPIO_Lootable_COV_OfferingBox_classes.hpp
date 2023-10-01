#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_COV_OfferingBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_Lootable_COV_OfferingBox.BPIO_Lootable_COV_OfferingBox_C
// 0x000C (0x08C0 - 0x08B4)
class ABPIO_Lootable_COV_OfferingBox_C : public ABPIO_Lootable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	class UGbxSkeletalMeshComponent*                   Skeletal_Mesh;                                            // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_Lootable_COV_OfferingBox.BPIO_Lootable_COV_OfferingBox_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
