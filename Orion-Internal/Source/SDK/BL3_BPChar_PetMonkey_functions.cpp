// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetMonkey_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_PetMonkey.BPChar_PetMonkey_C.GetPetJabberIngenuityBarrel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Barrel                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetMonkey_C::GetPetJabberIngenuityBarrel(class AActor** Barrel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.GetPetJabberIngenuityBarrel");

	ABPChar_PetMonkey_C_GetPetJabberIngenuityBarrel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Barrel != nullptr)
		*Barrel = params.Barrel;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.ClearBarrelStanceAndBB
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::ClearBarrelStanceAndBB()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.ClearBarrelStanceAndBB");

	ABPChar_PetMonkey_C_ClearBarrelStanceAndBB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnRep_Ape_Barrel_Held
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::OnRep_Ape_Barrel_Held()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnRep_Ape_Barrel_Held");

	ABPChar_PetMonkey_C_OnRep_Ape_Barrel_Held_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.ReturnJabbermonGunWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AWeapon*                 NewWeapon                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetMonkey_C::ReturnJabbermonGunWeapon(class AWeapon** NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.ReturnJabbermonGunWeapon");

	ABPChar_PetMonkey_C_ReturnJabbermonGunWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewWeapon != nullptr)
		*NewWeapon = params.NewWeapon;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.UserConstructionScript");

	ABPChar_PetMonkey_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.AlignBarrelClient
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::AlignBarrelClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.AlignBarrelClient");

	ABPChar_PetMonkey_C_AlignBarrelClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.AttachBarrelClient
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::AttachBarrelClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.AttachBarrelClient");

	ABPChar_PetMonkey_C_AttachBarrelClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.ClientBarrelThrow
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::ClientBarrelThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.ClientBarrelThrow");

	ABPChar_PetMonkey_C_ClientBarrelThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelAlign
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 NewBarrel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetMonkey_C::PetJabbermon_BarrelAlign(class AActor** NewBarrel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelAlign");

	ABPChar_PetMonkey_C_PetJabbermon_BarrelAlign_Params params;
	params.NewBarrel = NewBarrel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 NewBarrel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetMonkey_C::PetJabbermon_BarrelSet(class AActor** NewBarrel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelSet");

	ABPChar_PetMonkey_C_PetJabbermon_BarrelSet_Params params;
	params.NewBarrel = NewBarrel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelThrow
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::PetJabbermon_BarrelThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelThrow");

	ABPChar_PetMonkey_C_PetJabbermon_BarrelThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelDrop
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::PetJabbermon_BarrelDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelDrop");

	ABPChar_PetMonkey_C_PetJabbermon_BarrelDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.CleanupBarrel
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::CleanupBarrel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.CleanupBarrel");

	ABPChar_PetMonkey_C_CleanupBarrel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnTakeDamage_PetJabbermonBarrel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_PetMonkey_C::OnTakeDamage_PetJabbermonBarrel(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnTakeDamage_PetJabbermonBarrel");

	ABPChar_PetMonkey_C_OnTakeDamage_PetJabbermonBarrel_Params params;
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


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.Pet_DownStateStart
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::Pet_DownStateStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.Pet_DownStateStart");

	ABPChar_PetMonkey_C_Pet_DownStateStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabb_CancelBarrelPickup
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::PetJabb_CancelBarrelPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabb_CancelBarrelPickup");

	ABPChar_PetMonkey_C_PetJabb_CancelBarrelPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_HeldBarrelExplode
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::PetJabbermon_HeldBarrelExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_HeldBarrelExplode");

	ABPChar_PetMonkey_C_PetJabbermon_HeldBarrelExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnPetReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bForced                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPetReleaseReason*             Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetMonkey_C::OnPetReleased(bool* bForced, EPetReleaseReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnPetReleased");

	ABPChar_PetMonkey_C_OnPetReleased_Params params;
	params.bForced = bForced;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey
// (BlueprintEvent)
// Parameters:
// class AActor*                  ChildActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetMonkey_C::BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey(class AActor* ChildActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey");

	ABPChar_PetMonkey_C_BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey_Params params;
	params.ChildActor = ChildActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_ChangeGunVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetMonkey_C::PetJabbermon_ChangeGunVis(bool* NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_ChangeGunVis");

	ABPChar_PetMonkey_C_PetJabbermon_ChangeGunVis_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnEnrageBegin
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::OnEnrageBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnEnrageBegin");

	ABPChar_PetMonkey_C_OnEnrageBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnEnrageEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetMonkey_C::OnEnrageEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnEnrageEnd");

	ABPChar_PetMonkey_C_OnEnrageEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetMonkey.BPChar_PetMonkey_C.ExecuteUbergraph_BPChar_PetMonkey
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetMonkey_C::ExecuteUbergraph_BPChar_PetMonkey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.ExecuteUbergraph_BPChar_PetMonkey");

	ABPChar_PetMonkey_C_ExecuteUbergraph_BPChar_PetMonkey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
