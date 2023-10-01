#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Torrent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Torrent.Ability_Torrent_C
// 0x0030 (0x0128 - 0x00F8)
class UAbility_Torrent_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Contagion;// 0x0100(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Torrent.Ability_Torrent_C");
		return ptr;
	}


	void OnActivated();
	void ExecuteUbergraph_Ability_Torrent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
