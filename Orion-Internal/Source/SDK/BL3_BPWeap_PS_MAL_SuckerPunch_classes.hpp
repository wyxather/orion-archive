#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_MAL_SuckerPunch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C
// 0x0018 (0x0A68 - 0x0A50)
class ABPWeap_PS_MAL_SuckerPunch_C : public ABPWeap_PS_MAL_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (Transient, DuplicateTransient)
	class UOakDialogComponent*                         OakDialog;                                                // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AOakCharacter*                               MyOakCharacter;                                           // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C");
		return ptr;
	}


	void TryIdleAudio();
	void UserConstructionScript();
	void WeaponAttached();
	void EquipEventNotify();
	void WeaponPutDownEvent(class AWeapon* EventWeapon);
	void OnKilledEnemy_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void Notify_ReloadStarted(bool* bAutoReload);
	void ExecuteUbergraph_BPWeap_PS_MAL_SuckerPunch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
