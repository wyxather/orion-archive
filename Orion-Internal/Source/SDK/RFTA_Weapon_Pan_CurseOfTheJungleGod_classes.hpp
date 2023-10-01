#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Pan_CurseOfTheJungleGod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Pan_CurseOfTheJungleGod.Weapon_Pan_CurseOfTheJungleGod_C
// 0x0008 (0x0CD8 - 0x0CD0)
class AWeapon_Pan_CurseOfTheJungleGod_C : public AWeapon_HandGun_Base_C
{
public:
	class USceneComponent*                             MuzzlePoint;                                              // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Pan_CurseOfTheJungleGod.Weapon_Pan_CurseOfTheJungleGod_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
