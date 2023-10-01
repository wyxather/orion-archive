#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_HangingLights_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HangingLights.BP_HangingLights_C
// 0x0048 (0x0590 - 0x0548)
class ABP_HangingLights_C : public ABP_Decorator_HangingSpline_C
{
public:
	TEnumAsByte<EHangingLightEmissiveLayer>            Material_Emissive_Layer;                                  // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0549(0x0003) MISSED OFFSET
	struct FLinearColor                                Light_Color;                                              // 0x054C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Light_Intensity;                                          // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Light_Attenuation_Radius;                                 // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Light_Location_Offset;                                    // 0x0564(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Lens_Flare_Intensity;                                     // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Lens_Flare_Offset;                                        // 0x0574(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UInstancedStaticMeshComponent*               Lens_Flares;                                              // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Lens_Flare_Mat;                                           // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HangingLights.BP_HangingLights_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
