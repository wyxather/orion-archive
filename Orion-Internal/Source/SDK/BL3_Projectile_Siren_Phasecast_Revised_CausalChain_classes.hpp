#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_CausalChain_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C
// 0x000C (0x07CC - 0x07C0)
class AProjectile_Siren_Phasecast_Revised_CausalChain_C : public AProjectile_Siren_Phasecast_Revised_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (Transient, DuplicateTransient)
	int                                                EnemyHitCount;                                            // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C");
		return ptr;
	}


	void CalculateDamage(float* res);
	void UserConstructionScript();
	void DoDamageToEnemy(class AActor** Enemy);
	void ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_CausalChain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
