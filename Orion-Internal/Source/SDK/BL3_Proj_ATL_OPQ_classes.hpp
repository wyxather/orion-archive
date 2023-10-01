#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_OPQ_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_ATL_OPQ.Proj_ATL_OPQ_C
// 0x0017 (0x07A1 - 0x078A)
class AProj_ATL_OPQ_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Trail;                                                    // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               NoImpact;                                                 // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_ATL_OPQ.Proj_ATL_OPQ_C");
		return ptr;
	}


	void UserConstructionScript();
	void GbxAsyncRequest_Spawned_9C35FAAF46B286381928AF9A06BE659F(class AActor* Actor, int InstanceIndex);
	void ReceiveBeginPlay();
	void OnHitWorld(struct FHitResult* Hit);
	void OnExplode();
	void ExecuteUbergraph_Proj_ATL_OPQ(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
