#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Operative_Drone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C
// 0x0008 (0x0298 - 0x0290)
class UActionSkill_Operative_Drone_C : public UOakActionAbility_GRMLN
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C");
		return ptr;
	}


	bool ShouldStopAbilityOnPawnSlotComponentAttach();
	float GetGoodMisfortuneRechargeValue(int* TotalKills);
	class AOakDroneProjectile_GRMLN* TrySpawnPrimaryDrone();
	bool ShouldAbortActivation(unsigned char* OutAbortCode);
	void TryFindNewDroneTarget();
	void OnStartActionAbility();
	void OnStartCalledShot();
	void OnStopCalledShot();
	void StopButtonPress();
	void OnStopActionAbility();
	void ExecuteUbergraph_ActionSkill_Operative_Drone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
