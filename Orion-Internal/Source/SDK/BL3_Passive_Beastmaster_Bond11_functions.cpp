// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond11_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.DoReflectedDamage
// (Public, BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_Bond11_C::DoReflectedDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.DoReflectedDamage");

	UPassive_Beastmaster_Bond11_C_DoReflectedDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Bond11_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.OnActivated");

	UPassive_Beastmaster_Bond11_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.RegisterDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond11_C::RegisterDelegate(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.RegisterDelegate");

	UPassive_Beastmaster_Bond11_C_RegisterDelegate_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.PetSpawned_Bond11
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond11_C::PetSpawned_Bond11(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.PetSpawned_Bond11");

	UPassive_Beastmaster_Bond11_C_PetSpawned_Bond11_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.PetReleased_Bond11
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond11_C::PetReleased_Bond11(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.PetReleased_Bond11");

	UPassive_Beastmaster_Bond11_C_PetReleased_Bond11_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.OnTakeAnyDamage_Pet_Bond11
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Beastmaster_Bond11_C::OnTakeAnyDamage_Pet_Bond11(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.OnTakeAnyDamage_Pet_Bond11");

	UPassive_Beastmaster_Bond11_C_OnTakeAnyDamage_Pet_Bond11_Params params;
	params.DamageReceiver = DamageReceiver;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.UnregisterDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond11_C::UnregisterDelegate(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.UnregisterDelegate");

	UPassive_Beastmaster_Bond11_C_UnregisterDelegate_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.ExecuteUbergraph_Passive_Beastmaster_Bond11
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond11_C::ExecuteUbergraph_Passive_Beastmaster_Bond11(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond11.Passive_Beastmaster_Bond11_C.ExecuteUbergraph_Passive_Beastmaster_Bond11");

	UPassive_Beastmaster_Bond11_C_ExecuteUbergraph_Passive_Beastmaster_Bond11_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
