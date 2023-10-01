#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DestructibleGameplayOnlyRelevant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DestructibleGameplayOnlyRelevant.BP_DestructibleGameplayOnlyRelevant_C
// 0x0020 (0x0518 - 0x04F8)
class ABP_DestructibleGameplayOnlyRelevant_C : public AGbxDestructibleActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	class UGbxNavBoxComponent*                         GbxNavBox;                                                // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BoxBlockPawn;                                             // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseEvent*                                 Wwise_Fracture_Event;                                     // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DestructibleGameplayOnlyRelevant.BP_DestructibleGameplayOnlyRelevant_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_11_ComponentFractureSignature__DelegateSignature_BP_DestructibleGameplayOnlyRelevant(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void ExecuteUbergraph_BP_DestructibleGameplayOnlyRelevant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
