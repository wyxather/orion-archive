#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_ProjectileVisualization_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C
// 0x0011 (0x03B9 - 0x03A8)
class ABP_ProjectileVisualization_Base_C : public AProjectileVisualization
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckLineOfSightForImpactColor;                           // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C");
		return ptr;
	}


	bool PreDraw(struct FProjectileVisualizationParams* Params, struct FProjectileVisualizationContext* Context);
	void GetRadius(float* Radius);
	void PostDrawPath(struct FProjectileVisualizationParams* Params, struct FProjectileVisualizationContext* Context, struct FLinearColor* DrawColor);
	void ExecuteUbergraph_BP_ProjectileVisualization_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
