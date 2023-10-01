#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_FunctionLibrary_Sequencer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CineSkipMusicTo
struct UFunctionLibrary_Sequencer_C_CineSkipMusicTo_Params
{
	class ACinematicMusicActor_C**                     MusicActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase**                                 Music;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Timestamp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CineShowHideForGender
struct UFunctionLibrary_Sequencer_C_CineShowHideForGender_Params
{
	class AActor**                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGender*                                           TargetGender;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CineEquipRootGun
struct UFunctionLibrary_Sequencer_C_CineEquipRootGun_Params
{
	class AActor**                                     CineActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CineFadeOutMusic
struct UFunctionLibrary_Sequencer_C_CineFadeOutMusic_Params
{
	class ACinematicMusicActor_C**                     MusicActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             FadeOutDuration;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CinePlayMusic
struct UFunctionLibrary_Sequencer_C_CinePlayMusic_Params
{
	class ACinematicMusicActor_C**                     MusicActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase**                                 Music;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Equip Primary Weapon Coach Gun
struct UFunctionLibrary_Sequencer_C_Cine_Equip_Primary_Weapon_Coach_Gun_Params
{
	class AActor**                                     CineActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Enable Character Cloth Sim
struct UFunctionLibrary_Sequencer_C_Cine_Enable_Character_Cloth_Sim_Params
{
	class AActor**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Disable Character Cloth Sim
struct UFunctionLibrary_Sequencer_C_Cine_Disable_Character_Cloth_Sim_Params
{
	class AActor**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Fade
struct UFunctionLibrary_Sequencer_C_Cine_Fade_Params
{
	EFadeDirection*                                    FadeDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Unequip All Weapons
struct UFunctionLibrary_Sequencer_C_Cine_Unequip_All_Weapons_Params
{
	class AActor**                                     CineActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Equip Melee
struct UFunctionLibrary_Sequencer_C_Cine_Equip_Melee_Params
{
	class AActor**                                     CineActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Equip Secondary Weapon
struct UFunctionLibrary_Sequencer_C_Cine_Equip_Secondary_Weapon_Params
{
	class AActor**                                     CineActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
