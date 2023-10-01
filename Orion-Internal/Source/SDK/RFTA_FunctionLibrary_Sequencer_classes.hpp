#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_FunctionLibrary_Sequencer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C
// 0x0000 (0x0028 - 0x0028)
class UFunctionLibrary_Sequencer_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C");
		return ptr;
	}


	void STATIC_CineSkipMusicTo(class ACinematicMusicActor_C** MusicActor, class USoundBase** Music, float* Timestamp, class UObject** __WorldContext);
	void STATIC_CineShowHideForGender(class AActor** Object, EGender* TargetGender, class UObject** __WorldContext);
	void STATIC_CineEquipRootGun(class AActor** CineActor, class UObject** __WorldContext);
	void STATIC_CineFadeOutMusic(class ACinematicMusicActor_C** MusicActor, float* FadeOutDuration, class UObject** __WorldContext);
	void STATIC_CinePlayMusic(class ACinematicMusicActor_C** MusicActor, class USoundBase** Music, class UObject** __WorldContext);
	void STATIC_Cine_Equip_Primary_Weapon_Coach_Gun(class AActor** CineActor, class UObject** __WorldContext);
	void STATIC_Cine_Enable_Character_Cloth_Sim(class AActor** Character, class UObject** __WorldContext);
	void STATIC_Cine_Disable_Character_Cloth_Sim(class AActor** Character, class UObject** __WorldContext);
	void STATIC_Cine_Fade(EFadeDirection* FadeDirection, class UObject** Object, class UObject** __WorldContext);
	void STATIC_Cine_Unequip_All_Weapons(class AActor** CineActor, class UObject** __WorldContext);
	void STATIC_Cine_Equip_Melee(class AActor** CineActor, class UObject** __WorldContext);
	void STATIC_Cine_Equip_Secondary_Weapon(class AActor** CineActor, class UObject** __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
