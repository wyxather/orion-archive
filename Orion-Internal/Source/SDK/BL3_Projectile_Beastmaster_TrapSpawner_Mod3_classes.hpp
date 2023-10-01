#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Beastmaster_TrapSpawner_Mod3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C
// 0x0008 (0x0740 - 0x0738)
class AProjectile_Beastmaster_TrapSpawner_Mod3_C : public AProjectile_Beastmaster_TrapSpawner_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C");
		return ptr;
	}


	void UserConstructionScript();
	void DidTrapSpawn();
	void ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Mod3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
