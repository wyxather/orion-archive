#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_JAK_Rose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C
// 0x0021 (0x09A1 - 0x0980)
class UBPWeaponFireProjectileComponent_JAK_Rose_C : public UBPWeaponFireProjectileComponent_JAK_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                TimerHandle;                                              // 0x0988(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ChargedShot;                                              // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0991(0x0007) MISSED OFFSET
	class UClass*                                      ChargeLightProjectile;                                    // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ChargeBuffer;                                             // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C");
		return ptr;
	}


	class UClass* GetShotLightProjectileData();
	void ReceiveBeginPlay();
	void NotifyUsedStarted_Event();
	void NotifyUsedFinished_Event();
	void IncrementBurst();
	void ResetGate();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Rose(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
