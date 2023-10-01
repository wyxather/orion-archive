#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Attack_Hammer_Slam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C
// 0x0012 (0x0290 - 0x027E)
class UAction_AOE_Attack_Hammer_Slam_C : public UAction_AOE_Attack_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x027E(0x0002) MISSED OFFSET
	TArray<class AActor*>                              IgnoreActors;                                             // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C");
		return ptr;
	}


	void IsValidTarget(class AActor** _Target, bool* Out);
	struct FVector Get_Socket_Location(struct FName* InSocketName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
