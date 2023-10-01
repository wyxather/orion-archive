#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Gunner_FalconStrike_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C
// 0x0028 (0x0980 - 0x0958)
class UBPWeaponFireProjectile_Gunner_FalconStrike_C : public UFalconStrikeWeaponFireComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	class AWeapon_Hardpoint_FalconStrike_C*            FalconStrikeWeapon;                                       // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FalconStrike;                                             // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FalconStrike_Slag;                                        // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FalconStrike_Homing;                                      // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void K2_OnActivated();
	void ExecuteUbergraph_BPWeaponFireProjectile_Gunner_FalconStrike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
