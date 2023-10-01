#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Weapon_WorldBreaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_AOE_Weapon_WorldBreaker.Action_AOE_Weapon_WorldBreaker_C
// 0x0014 (0x02B4 - 0x02A0)
class UAction_AOE_Weapon_WorldBreaker_C : public UAction_AOE_ForceImpulse_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     ImpactPoint;                                              // 0x02A8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Weapon_WorldBreaker.Action_AOE_Weapon_WorldBreaker_C");
		return ptr;
	}


	struct FVector Get_Socket_Location(struct FName* InSocketName);
	void OnActionStart();
	void ExecuteUbergraph_Action_AOE_Weapon_WorldBreaker(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
