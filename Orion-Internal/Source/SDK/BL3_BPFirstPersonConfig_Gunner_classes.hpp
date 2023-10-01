#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFirstPersonConfig_Gunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPFirstPersonConfig_Gunner.BPFirstPersonConfig_Gunner_C
// 0x0020 (0x0498 - 0x0478)
class ABPFirstPersonConfig_Gunner_C : public ABPFirstPersonConfig_Player_C
{
public:
	class UParticleSystemComponent*                    DeviceHologram1st;                                        // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DLCActionSkillDevice1st;                                  // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyAccessoryComponent*                    FoleyAccessory_R_Hand_Audio;                              // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyAccessoryComponent*                    FoleyAccessory_L_Hand_Audio;                              // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFirstPersonConfig_Gunner.BPFirstPersonConfig_Gunner_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
