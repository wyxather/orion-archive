#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TinkBadassArmored_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_TinkBadassArmored.BPChar_TinkBadassArmored_C
// 0x0010 (0x2460 - 0x2450)
class ABPChar_TinkBadassArmored_C : public ABPChar_TinkBadass_C
{
public:
	class USkeletalMeshComponent*                      NewVar_0_0_1;                                             // 0x2450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      WhoDamagedMe_1;                                           // 0x2458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_TinkBadassArmored.BPChar_TinkBadassArmored_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
