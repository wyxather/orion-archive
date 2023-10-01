#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_Bomb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C
// 0x0008 (0x07C8 - 0x07C0)
class AProjectile_Siren_Phasecast_Revised_Bomb_C : public AProjectile_Siren_Phasecast_Revised_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnHitWorld(struct FHitResult* Hit);
	void OnHitEnemy(struct FHitResult* Hit);
	void OnExplode();
	void OnOverlappedEnemy(struct FHitResult* HitResult);
	void OnOverlappedNeutral(struct FHitResult* HitResult);
	void ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Bomb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
