#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_Schism_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C
// 0x0008 (0x07C8 - 0x07C0)
class AProjectile_Siren_Phasecast_Revised_Schism_C : public AProjectile_Siren_Phasecast_Revised_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C");
		return ptr;
	}


	void GetSchismDamage(float* res);
	void GetSchismProjectileClass(class UClass** res);
	void FireSchismProjectile(class AActor* EnemyTarget);
	void UserConstructionScript();
	void DoDamageToEnemy(class AActor** Enemy);
	void TrySchism(class AActor* Enemy);
	void ResetSchism();
	void ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Schism(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
