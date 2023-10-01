#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Execute_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TEDProjectile_Execute.TEDProjectile_Execute_C
// 0x000C (0x08D8 - 0x08CC)
class ATEDProjectile_Execute_C : public ATEDProjectile_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TEDProjectile_Execute.TEDProjectile_Execute_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnBounce(struct FHitResult* Hit, struct FVector* ImpactVelocity);
	void OnHitEnemy(struct FHitResult* Hit);
	void ExecuteUbergraph_TEDProjectile_Execute(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
