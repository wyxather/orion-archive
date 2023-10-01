#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SM_TED_PatMk3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C
// 0x0020 (0x0A88 - 0x0A68)
class ABPWeap_SM_TED_PatMk3_C : public ABPWeap_SM_TED_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A68(0x0008) (Transient, DuplicateTransient)
	class UOakDialogComponent*                         OakDialog;                                                // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TenGallon_1;                                              // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter*                               MyOakCharacter;                                           // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C");
		return ptr;
	}


	void Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int* NumMirvProjectiles, float* FireRate, float* LoadedAmmo, int* ThrowType);
	void TryAdvancingAudio();
	void UserConstructionScript();
	void WeaponAttached();
	void EquipEventNotify();
	void WeaponPutDownEvent(class AWeapon* EventWeapon);
	void OnKilledEnemy_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPWeap_SM_TED_PatMk3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
