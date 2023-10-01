// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_Unique01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Beastmaster_Unique01_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.OnActivated");

	UOakAbility_Beastmaster_Unique01_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.CausedDeath_UniqueClassMod01
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOakAbility_Beastmaster_Unique01_C::CausedDeath_UniqueClassMod01(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.CausedDeath_UniqueClassMod01");

	UOakAbility_Beastmaster_Unique01_C_CausedDeath_UniqueClassMod01_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.AddPetDamageModifier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_Unique01_C::AddPetDamageModifier(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.AddPetDamageModifier");

	UOakAbility_Beastmaster_Unique01_C_AddPetDamageModifier_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_Unique01_C::ExecuteUbergraph_OakAbility_Beastmaster_Unique01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique01");

	UOakAbility_Beastmaster_Unique01_C_ExecuteUbergraph_OakAbility_Beastmaster_Unique01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
