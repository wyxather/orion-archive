#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ChallengeComponent_IconEridian_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ChallengeComponent_IconEridian.BP_ChallengeComponent_IconEridian_C
// 0x0008 (0x07D8 - 0x07D0)
class UBP_ChallengeComponent_IconEridian_C : public UChallengeLevelActorComponent
{
public:
	class AOakSpawner*                                 Spawner;                                                  // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChallengeComponent_IconEridian.BP_ChallengeComponent_IconEridian_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
