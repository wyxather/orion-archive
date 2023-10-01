#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Item_SkagDogDays_SkagMeat_ALPHA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_SkagDogDays_SkagMeat_ALPHA.Item_SkagDogDays_SkagMeat_ALPHA_C
// 0x0010 (0x05C8 - 0x05B8)
class AItem_SkagDogDays_SkagMeat_ALPHA_C : public ABP_OakMissionItem_C
{
public:
	class UParticleSystemComponent*                    PS_Gore_Head_Decapitated_RedSkag;                         // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Skag_Gore_ForeLeg;                                     // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_SkagDogDays_SkagMeat_ALPHA.Item_SkagDogDays_SkagMeat_ALPHA_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
