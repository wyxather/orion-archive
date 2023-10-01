#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_JAK_McSmugger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C
// 0x0018 (0x0998 - 0x0980)
class UBPWeaponFireProjectileComponent_JAK_McSmugger_C : public UBPWeaponFireProjectileComponent_JAK_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)
	bool                                               ApplyEffect_;                                             // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0989(0x0007) MISSED OFFSET
	class UOakDamageCauserComponent*                   OakDamageCauser;                                          // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C");
		return ptr;
	}


	void K2_OnActivated();
	void OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void K2_OnDeactivated();
	void NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bAutoReload);
	void PlayEffect();
	void StopEffect();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
