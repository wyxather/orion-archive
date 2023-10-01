#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_RiftWalker_DFA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C
// 0x0024 (0x032C - 0x0308)
class UAction_Mod_RiftWalker_DFA_C : public UAction_DFA_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0308(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CloneHealthMax;                                           // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloneDuration;                                            // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              AggroDistance;                                            // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                   // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ActionBP;                                                 // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StoredInvulnerabilityAction;                              // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C");
		return ptr;
	}


	void ClearInvulnerability();
	void SetInvulnerable();
	void FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
	void SpawnCharacter(class UClass** ActorClass, struct FTransform* SpawnTransform, class AActor** Owner);
	void Get_Player_Gender(bool* Bool);
	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_Action_Mod_RiftWalker_DFA(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
