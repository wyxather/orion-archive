#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Smog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C
// 0x0010 (0x0968 - 0x0958)
class UBPWeaponFireProjectile_Smog_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	class UOakDamageCauserComponent*                   OakDamageCauser;                                          // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C");
		return ptr;
	}


	class UClass* GetShotLightProjectileData();
	void OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void K2_OnActivated();
	void K2_OnDeactivated();
	void ExecuteUbergraph_BPWeaponFireProjectile_Smog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
