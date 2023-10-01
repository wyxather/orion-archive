#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Torgue_Craps_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C
// 0x001C (0x099C - 0x0980)
class UBPWeaponFireProjectileComponent_Torgue_Craps_C : public UBPWeaponFireProjectileComponent_Torgue_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)
	int                                                MaxMagazineSize;                                          // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CrapsShot;                                                // 0x098C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x098D(0x0003) MISSED OFFSET
	int                                                CrapsNumber;                                              // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NumberChosen;                                             // 0x0994(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0995(0x0003) MISSED OFFSET
	int                                                CrapsNumberExtra;                                         // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C");
		return ptr;
	}


	class UClass* GetShotLightProjectileData();
	void ReloadComplete(class AWeapon* EventWeapon, bool bCompleted);
	void WeaponUsed();
	void ChooseCrapsNumber();
	void CheckCrapsShot();
	void K2_OnActivated();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Craps(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
