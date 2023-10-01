#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TinkBadass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_TinkBadass.BPChar_TinkBadass_C
// 0x002F (0x2450 - 0x2421)
class ABPChar_TinkBadass_C : public ABPChar_Tink_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2421(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      NewVar_0_1;                                               // 0x2428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     WasHitLocation;                                           // 0x2430(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WasHitDirection;                                          // 0x243C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UDamageCauserComponent*                      WhoDamagedMe;                                             // 0x2448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_TinkBadass.BPChar_TinkBadass_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
