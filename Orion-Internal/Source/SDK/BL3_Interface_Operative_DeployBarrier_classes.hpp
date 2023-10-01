#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_Operative_DeployBarrier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_Operative_DeployBarrier_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C");
		return ptr;
	}


	void IsHoldingBarrier(bool* res);
	void RefillBarrierHealth(bool* res);
	void GiveBarrierHealth(float Health, float* New_Health);
	void GetBarrierReference(class AActor** Barrier);
	void ActivateHighlyUnstableFromCarry();
	void ActivateHighlyUnstable();
	void GetBarrierHealthPercent(float* HealthPercent);
	void StartHoldingBarrier(class AActor* Player);
	void DeployNewBarrierInHand(class AActor* Player);
	void DeployNewBarrierAroundPlayer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
