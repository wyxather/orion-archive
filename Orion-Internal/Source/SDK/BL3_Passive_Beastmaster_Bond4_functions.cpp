// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond4_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.ApplyFirstHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond4_C::ApplyFirstHit(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.ApplyFirstHit");

	UPassive_Beastmaster_Bond4_C_ApplyFirstHit_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Bond4_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.OnActivated");

	UPassive_Beastmaster_Bond4_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.PetCausedDamage_Bond4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond4_C::PetCausedDamage_Bond4(class AActor* DamagedActor, class UDamageSource* DamageSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.PetCausedDamage_Bond4");

	UPassive_Beastmaster_Bond4_C_PetCausedDamage_Bond4_Params params;
	params.DamagedActor = DamagedActor;
	params.DamageSource = DamageSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.RegisterNewModifier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           NewPet                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond4_C::RegisterNewModifier(class AOakCharacter* NewPet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.RegisterNewModifier");

	UPassive_Beastmaster_Bond4_C_RegisterNewModifier_Params params;
	params.NewPet = NewPet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.UnregisterModifier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           NewPet                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond4_C::UnregisterModifier(class AOakCharacter* NewPet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.UnregisterModifier");

	UPassive_Beastmaster_Bond4_C_UnregisterModifier_Params params;
	params.NewPet = NewPet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.OnNewPetSpawned_Bond4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond4_C::OnNewPetSpawned_Bond4(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.OnNewPetSpawned_Bond4");

	UPassive_Beastmaster_Bond4_C_OnNewPetSpawned_Bond4_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.OnPetReleased_Bond4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond4_C::OnPetReleased_Bond4(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.OnPetReleased_Bond4");

	UPassive_Beastmaster_Bond4_C_OnPetReleased_Bond4_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.ExecuteUbergraph_Passive_Beastmaster_Bond4
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond4_C::ExecuteUbergraph_Passive_Beastmaster_Bond4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond4.Passive_Beastmaster_Bond4_C.ExecuteUbergraph_Passive_Beastmaster_Bond4");

	UPassive_Beastmaster_Bond4_C_ExecuteUbergraph_Passive_Beastmaster_Bond4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
