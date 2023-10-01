#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SM_Hyp_Handsome_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C
// 0x001C (0x0A00 - 0x09E4)
class ABPWeap_SM_Hyp_Handsome_C : public ABPWeap_SM_Hyperion_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E8(0x0008) (Transient, DuplicateTransient)
	class UOakDialogComponent*                         OakDialog;                                                // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AOakCharacter*                               MyOakCharacter;                                           // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C");
		return ptr;
	}


	void TryAdvancingAudio();
	void TryIdleAudio();
	void Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int* NumMirvProjectiles, float* FireRate, float* LoadedAmmo, int* ThrowType);
	void UserConstructionScript();
	void Notify_ReloadStarted(bool* bAutoReload);
	void WeaponAttached();
	void EquipEventNotify();
	void WeaponPutDownEvent(class AWeapon* EventWeapon);
	void OnKilledEnemy_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_BPWeap_SM_Hyp_Handsome(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
