#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Operative_ShoulderCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C
// 0x0028 (0x0298 - 0x0270)
class UActionSkill_Operative_ShoulderCannon_C : public UOakActionAbility_ShoulderCannon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (Transient, DuplicateTransient)
	class AIO_Operative_ShoulderCannon_C*              ShoulderCannon;                                           // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       Mod3Cooldown;                                             // 0x0280(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C");
		return ptr;
	}


	void StartShoulderCannonMod3Timer(bool* res);
	void IsShouldCannonModSlotted(TEnumAsByte<EShoulderCannonMods> Mod, bool* res);
	void GetCannonRef(class AActor** Ref);
	bool ShouldAbortActivation(unsigned char* OutAbortCode);
	class AInteractiveObject* TrySpawnCannon();
	bool IsActionSkillValid();
	void OnPaused();
	void OnResumed();
	void OnChargeCountChanged(int* OldCharge);
	void OnActivated();
	void SpawnShoulderCannon();
	void OnStartActionAbility();
	void OnDeactivated();
	void OnRegistered();
	void OnUnregistered();
	void ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
