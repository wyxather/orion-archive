// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_Unique04_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Beastmaster_Unique04_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.OnActivated");

	UOakAbility_Beastmaster_Unique04_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.PetSpawned_ClassModUnique04
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_Unique04_C::PetSpawned_ClassModUnique04(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.PetSpawned_ClassModUnique04");

	UOakAbility_Beastmaster_Unique04_C_PetSpawned_ClassModUnique04_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.ApplyPetConditionalModifier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           NewPet                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_Unique04_C::ApplyPetConditionalModifier(class AOakCharacter* NewPet)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.ApplyPetConditionalModifier");

	UOakAbility_Beastmaster_Unique04_C_ApplyPetConditionalModifier_Params params;
	params.NewPet = NewPet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.RemovePetModifier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           NewPet                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_Unique04_C::RemovePetModifier(class AOakCharacter* NewPet)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.RemovePetModifier");

	UOakAbility_Beastmaster_Unique04_C_RemovePetModifier_Params params;
	params.NewPet = NewPet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique04
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_Unique04_C::ExecuteUbergraph_OakAbility_Beastmaster_Unique04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique04");

	UOakAbility_Beastmaster_Unique04_C_ExecuteUbergraph_OakAbility_Beastmaster_Unique04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
