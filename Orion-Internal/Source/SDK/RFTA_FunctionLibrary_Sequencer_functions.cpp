// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_FunctionLibrary_Sequencer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CineSkipMusicTo
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACinematicMusicActor_C** MusicActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase**             Music                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Timestamp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Sequencer_C::STATIC_CineSkipMusicTo(class ACinematicMusicActor_C** MusicActor, class USoundBase** Music, float* Timestamp, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CineSkipMusicTo");

	UFunctionLibrary_Sequencer_C_CineSkipMusicTo_Params params;
	params.MusicActor = MusicActor;
	params.Music = Music;
	params.Timestamp = Timestamp;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CineShowHideForGender
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGender*                       TargetGender                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Sequencer_C::STATIC_CineShowHideForGender(class AActor** Object, EGender* TargetGender, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CineShowHideForGender");

	UFunctionLibrary_Sequencer_C_CineShowHideForGender_Params params;
	params.Object = Object;
	params.TargetGender = TargetGender;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CineEquipRootGun
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CineActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Sequencer_C::STATIC_CineEquipRootGun(class AActor** CineActor, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CineEquipRootGun");

	UFunctionLibrary_Sequencer_C_CineEquipRootGun_Params params;
	params.CineActor = CineActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CineFadeOutMusic
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACinematicMusicActor_C** MusicActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         FadeOutDuration                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Sequencer_C::STATIC_CineFadeOutMusic(class ACinematicMusicActor_C** MusicActor, float* FadeOutDuration, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CineFadeOutMusic");

	UFunctionLibrary_Sequencer_C_CineFadeOutMusic_Params params;
	params.MusicActor = MusicActor;
	params.FadeOutDuration = FadeOutDuration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CinePlayMusic
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACinematicMusicActor_C** MusicActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase**             Music                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Sequencer_C::STATIC_CinePlayMusic(class ACinematicMusicActor_C** MusicActor, class USoundBase** Music, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.CinePlayMusic");

	UFunctionLibrary_Sequencer_C_CinePlayMusic_Params params;
	params.MusicActor = MusicActor;
	params.Music = Music;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Equip Primary Weapon Coach Gun
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CineActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Sequencer_C::STATIC_Cine_Equip_Primary_Weapon_Coach_Gun(class AActor** CineActor, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Equip Primary Weapon Coach Gun");

	UFunctionLibrary_Sequencer_C_Cine_Equip_Primary_Weapon_Coach_Gun_Params params;
	params.CineActor = CineActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Enable Character Cloth Sim
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Sequencer_C::STATIC_Cine_Enable_Character_Cloth_Sim(class AActor** Character, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Enable Character Cloth Sim");

	UFunctionLibrary_Sequencer_C_Cine_Enable_Character_Cloth_Sim_Params params;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Disable Character Cloth Sim
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Sequencer_C::STATIC_Cine_Disable_Character_Cloth_Sim(class AActor** Character, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Disable Character Cloth Sim");

	UFunctionLibrary_Sequencer_C_Cine_Disable_Character_Cloth_Sim_Params params;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Fade
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFadeDirection*                FadeDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Sequencer_C::STATIC_Cine_Fade(EFadeDirection* FadeDirection, class UObject** Object, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Fade");

	UFunctionLibrary_Sequencer_C_Cine_Fade_Params params;
	params.FadeDirection = FadeDirection;
	params.Object = Object;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Unequip All Weapons
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CineActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Sequencer_C::STATIC_Cine_Unequip_All_Weapons(class AActor** CineActor, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Unequip All Weapons");

	UFunctionLibrary_Sequencer_C_Cine_Unequip_All_Weapons_Params params;
	params.CineActor = CineActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Equip Melee
// 00007FF6F8B35350
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CineActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Sequencer_C::STATIC_Cine_Equip_Melee(class AActor** CineActor, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Equip Melee");

	UFunctionLibrary_Sequencer_C_Cine_Equip_Melee_Params params;
	params.CineActor = CineActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Equip Secondary Weapon
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CineActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Sequencer_C::STATIC_Cine_Equip_Secondary_Weapon(class AActor** CineActor, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Sequencer.FunctionLibrary_Sequencer_C.Cine Equip Secondary Weapon");

	UFunctionLibrary_Sequencer_C_Cine_Equip_Secondary_Weapon_Params params;
	params.CineActor = CineActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
