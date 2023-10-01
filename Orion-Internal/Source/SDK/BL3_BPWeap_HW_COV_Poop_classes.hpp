#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_HW_COV_Poop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C
// 0x0018 (0x0A00 - 0x09E8)
class ABPWeap_HW_COV_Poop_C : public ABPWeap_HW_COV_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E8(0x0008) (Transient, DuplicateTransient)
	class UOakDialogComponent*                         OakDialog;                                                // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AOakCharacter*                               MyOakCharacter;                                           // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C");
		return ptr;
	}


	void TryIdleAudio();
	void UserConstructionScript();
	void Notify_ReloadStarted(bool* bAutoReload);
	void WeaponAttached();
	void EquipEventNotify();
	void WeaponPutDownEvent(class AWeapon* EventWeapon);
	void OnKilledEnemy_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_BPWeap_HW_COV_Poop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
