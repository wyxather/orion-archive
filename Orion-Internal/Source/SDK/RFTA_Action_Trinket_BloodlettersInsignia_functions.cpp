// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Trinket_BloodlettersInsignia_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.GetLifeSteal
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Lifesteal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Trinket_BloodlettersInsignia_C::GetLifeSteal(float* Lifesteal, float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.GetLifeSteal");

	UAction_Trinket_BloodlettersInsignia_C_GetLifeSteal_Params params;
	params.Lifesteal = Lifesteal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;
}


// Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.DoDevoted
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Heal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Trinket_BloodlettersInsignia_C::DoDevoted(float* Heal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.DoDevoted");

	UAction_Trinket_BloodlettersInsignia_C_DoDevoted_Params params;
	params.Heal = Heal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.GetCharactersForDevotion
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Ref                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACharacterGunfire*> Characters                     (Parm, OutParm, ZeroConstructor)

void UAction_Trinket_BloodlettersInsignia_C::GetCharactersForDevotion(class ACharacterGunfire** Ref, TArray<class ACharacterGunfire*>* Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.GetCharactersForDevotion");

	UAction_Trinket_BloodlettersInsignia_C_GetCharactersForDevotion_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
}


// Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.GetSiphonerTraitLifeStealMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ModDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Trinket_BloodlettersInsignia_C::GetSiphonerTraitLifeStealMod(float* ModDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.GetSiphonerTraitLifeStealMod");

	UAction_Trinket_BloodlettersInsignia_C_GetSiphonerTraitLifeStealMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModDamage != nullptr)
		*ModDamage = params.ModDamage;
}


// Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.IsDamageTypeBleed
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isbleed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Trinket_BloodlettersInsignia_C::IsDamageTypeBleed(class UClass** Type, bool* isbleed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.IsDamageTypeBleed");

	UAction_Trinket_BloodlettersInsignia_C_IsDamageTypeBleed_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isbleed != nullptr)
		*isbleed = params.isbleed;
}


// Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Trinket_BloodlettersInsignia_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.ModifyDamage");

	UAction_Trinket_BloodlettersInsignia_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
