#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Barrier_CinderBlock_Concrete_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PD_Barrier_CinderBlock_Concrete.PD_Barrier_CinderBlock_Concrete_C
// 0x0008 (0x0520 - 0x0518)
class APD_Barrier_CinderBlock_Concrete_C : public ABP_DestructibleGameplayOnlyRelevant_C
{
public:
	class UStaticMeshComponent*                        SM_Barrier_CinderBlockConcrete_Blocks;                    // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PD_Barrier_CinderBlock_Concrete.PD_Barrier_CinderBlock_Concrete_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
