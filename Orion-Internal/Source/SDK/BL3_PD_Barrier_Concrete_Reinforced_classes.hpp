#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Barrier_Concrete_Reinforced_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PD_Barrier_Concrete_Reinforced.PD_Barrier_Concrete_Reinforced_C
// 0x0010 (0x0528 - 0x0518)
class APD_Barrier_Concrete_Reinforced_C : public ABP_DestructibleGameplayOnlyRelevant_C
{
public:
	class UStaticMeshComponent*                        StaticMesh_Rebar;                                         // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh_Frame;                                         // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PD_Barrier_Concrete_Reinforced.PD_Barrier_Concrete_Reinforced_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
