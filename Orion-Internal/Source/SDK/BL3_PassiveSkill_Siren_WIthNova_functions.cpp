// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_WIthNova_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_WIthNova.PassiveSkill_Siren_WIthNova_C.GetNovaExplosion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UExplosionData*          ExplosionData                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_WIthNova_C::GetNovaExplosion(class UClass* DamageType, class UExplosionData** ExplosionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_WIthNova.PassiveSkill_Siren_WIthNova_C.GetNovaExplosion");

	UPassiveSkill_Siren_WIthNova_C_GetNovaExplosion_Params params;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExplosionData != nullptr)
		*ExplosionData = params.ExplosionData;
}


// Function PassiveSkill_Siren_WIthNova.PassiveSkill_Siren_WIthNova_C.GetNovaDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_WIthNova_C::GetNovaDamage(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_WIthNova.PassiveSkill_Siren_WIthNova_C.GetNovaDamage");

	UPassiveSkill_Siren_WIthNova_C_GetNovaDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PassiveSkill_Siren_WIthNova.PassiveSkill_Siren_WIthNova_C.DoStandaloneNova
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UClass*                  InElement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Knockback                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_WIthNova_C::DoStandaloneNova(const struct FVector& InLocation, class UClass* InElement, bool Knockback)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_WIthNova.PassiveSkill_Siren_WIthNova_C.DoStandaloneNova");

	UPassiveSkill_Siren_WIthNova_C_DoStandaloneNova_Params params;
	params.InLocation = InLocation;
	params.InElement = InElement;
	params.Knockback = Knockback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
