#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LightDestructible_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LightDestructible.BP_LightDestructible_C
// 0x0028 (0x0488 - 0x0460)
class ABP_LightDestructible_C : public ARigidBodyActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayforHiding;                                           // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Wwise_Event;                                              // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalCount;                                               // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightDestructible.BP_LightDestructible_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__RigidBodyComponent_K2Node_ComponentBoundEvent_0_RigidBodyComponentImpulseAdded__DelegateSignature_PO_LightDestructible(const struct FVector& Impulse, const struct FVector& Location);
	void ExecuteUbergraph_BP_LightDestructible(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
