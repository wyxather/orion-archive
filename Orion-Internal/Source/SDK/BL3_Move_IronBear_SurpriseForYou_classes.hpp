#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Move_IronBear_SurpriseForYou_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C
// 0x0008 (0x08B0 - 0x08A8)
class UMove_IronBear_SurpriseForYou_C : public UOakControlledMove
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C");
		return ptr;
	}


	void OnHitTargetable(class AActor** HitActor, struct FVector* HitNormal);
	void OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator);
	void OnStop(bool* bInterrupted);
	void ExecuteUbergraph_Move_IronBear_SurpriseForYou(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
