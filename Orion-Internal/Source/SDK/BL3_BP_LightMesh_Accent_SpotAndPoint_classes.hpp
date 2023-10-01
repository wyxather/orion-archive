#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LightMesh_Accent_SpotAndPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LightMesh_Accent_SpotAndPoint.BP_LightMesh_Accent_SpotAndPoint_C
// 0x0010 (0x0570 - 0x0560)
class ABP_LightMesh_Accent_SpotAndPoint_C : public ABP_LightMesh_Base_C
{
public:
	class USpotLightComponent*                         SpotLight;                                                // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightMesh_Accent_SpotAndPoint.BP_LightMesh_Accent_SpotAndPoint_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
