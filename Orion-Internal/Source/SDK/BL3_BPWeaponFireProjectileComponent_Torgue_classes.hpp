#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Torgue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C
// 0x0028 (0x0980 - 0x0958)
class UBPWeaponFireProjectileComponent_Torgue_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      Gyro_Normal;                                              // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Gyro_Stick;                                               // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Grenade_Normal;                                           // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Grenade_Sticky;                                           // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C");
		return ptr;
	}


	class UClass* SelectProjectile();
	void K2_OnActivated();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
