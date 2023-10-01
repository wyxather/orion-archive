#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_TOR_Satisfaction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C
// 0x00D0 (0x0A28 - 0x0958)
class UBPWeaponFireProjectileComponent_TOR_Satisfaction_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	class ABPWeap_ATL_BaseWeapon_C*                    ATL_BaseWeapon;                                           // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentTargetIndex;                                       // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x096C(0x0004) MISSED OFFSET
	struct FEnvQueryParams                             Query;                                                    // 0x0970(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C");
		return ptr;
	}


	class AActor* GetLockedTarget();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_TOR_Satisfaction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
