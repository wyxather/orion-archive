#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_APLF_ScalableComponentMatchingFilter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C
// 0x00B8 (0x00F0 - 0x0038)
class UBP_APLF_ScalableComponentMatchingFilter_C : public UAudioPrepLocationFinder_Blueprint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	TArray<class FString>                              AssetNameFilter;                                          // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EPhysicalSurface>>              SurfaceTypeFilter;                                        // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UPhysicalMaterial*>                   PhysMatFilter;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInterface*>                  MaterialFilter;                                           // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              MaterialNameFilter;                                       // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              WithinActorBounds;                                        // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FVector                                     LocationOffset;                                           // 0x00A0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RadiusAdjustmentFactor;                                   // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinScale;                                                 // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LimitSearchByScale;                                       // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisualizeSearch;                                          // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
	TArray<struct FAudioPrepComponentFilter>           IgnoreFilters;                                            // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TSoftObjectPtr<class UPhysicalMaterial>>    PhysMatSoftReferences;                                    // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UMaterialInterface>>   MatInstanceSoftReferences;                                // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C");
		return ptr;
	}


	void ShouldIgnoreComponent(class UPrimitiveComponent* Component, bool* bIgnore);
	void SetActorRlativeOffset(class AActor* self2, struct FVector* Location, struct FRotator* Rotation);
	void AddFoundLocations();
	void ExecuteUbergraph_BP_APLF_ScalableComponentMatchingFilter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
