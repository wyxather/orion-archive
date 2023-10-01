#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_HYP_Shield_RestoreAmmo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C
// 0x0008 (0x0360 - 0x0358)
class UBP_HYP_Shield_RestoreAmmo_C : public UBP_HYP_Shield_Basic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C");
		return ptr;
	}


	void OnShieldCreated();
	void OnTakeWeaponShieldDamage(class UDamageComponent* DamageReceiver, float ShieldDamage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser);
	void ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
