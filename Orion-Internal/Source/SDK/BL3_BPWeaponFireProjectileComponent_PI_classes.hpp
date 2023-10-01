#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_PI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C
// 0x0004 (0x095C - 0x0958)
class UBPWeaponFireProjectileComponent_PI_C : public UWeaponFireProjectileComponent
{
public:
	float                                              BuffDuration;                                             // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C");
		return ptr;
	}


	void QueryBuiltStacks(unsigned char Index, int* NumberOfInstances);
	void QueryActiveBonus(int* NumberOfInstances);
	class UClass* GetShotLightProjectileData();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
