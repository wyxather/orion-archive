#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Splitter_Champion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C
// 0x002C (0x0D6C - 0x0D40)
class ACharacter_Root_Splitter_Champion_C : public ACharacter_Root_Splitter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Root_Replicant_Heartbeat_Idle_Loop_SC_1;                  // 0x0D48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNamedActorComponent*                        NamedActor;                                               // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              AllSplitters;                                             // 0x0D58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                SplittersOrdered;                                         // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C");
		return ptr;
	}


	void SplitAtThreshold();
	void ShouldDoubleUp(int* MinSplitters, float* Chance, bool* Result);
	void SetNormalChampCooldown();
	bool SplitterCanAttack(class ABP_Monster_C** Splitter, class UStateMachineComponent** StateMachine);
	void UpdateSplittersList();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void DoChampSplit();
	void Mus_Earth_MiniBoss_Combat_Intro_SC();
	void DoChampShockwave();
	void DoChampHeal();
	void DoChampAxeThrow();
	void DoChampDash();
	void CombatEnter();
	void DoChampHealPulse();
	void Die();
	void OnDead_Event_2(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	void KillAllSplitterClones();
	void ExecuteUbergraph_Character_Root_Splitter_Champion(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
