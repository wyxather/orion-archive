// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Enemy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Enemy.BPChar_Enemy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Enemy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.UserConstructionScript");

	ABPChar_Enemy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Enemy_C::Enemy_OnThoughtLockStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStart");

	ABPChar_Enemy_C_Enemy_OnThoughtLockStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Enemy_C::Enemy_OnThoughtLockStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStop");

	ABPChar_Enemy_C_Enemy_OnThoughtLockStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enemy.BPChar_Enemy_C.Player_SpawnTransfusionProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  DataBlueprint__Override_       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType__Override_          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SourceActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer__Override_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Enemy_C::Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Player_SpawnTransfusionProjectile");

	ABPChar_Enemy_C_Player_SpawnTransfusionProjectile_Params params;
	params.DataBlueprint__Override_ = DataBlueprint__Override_;
	params.DamageType__Override_ = DamageType__Override_;
	params.SourceActor = SourceActor;
	params.TargetActor = TargetActor;
	params.Damage = Damage;
	params.Causer__Override_ = Causer__Override_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enemy.BPChar_Enemy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_Enemy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.ReceiveBeginPlay");

	ABPChar_Enemy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Enemy_C::Enemy_OnPhaseLockStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStop");

	ABPChar_Enemy_C_Enemy_OnPhaseLockStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enemy.BPChar_Enemy_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy
// (BlueprintEvent)
// Parameters:
// EOakElementalType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Enemy_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy(EOakElementalType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy");

	ABPChar_Enemy_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Enemy_C::Enemy_OnPhaseLockStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStart");

	ABPChar_Enemy_C_Enemy_OnPhaseLockStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enemy.BPChar_Enemy_C.Radation_DeathExplosion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Enemy_C::Radation_DeathExplosion(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Radation_DeathExplosion");

	ABPChar_Enemy_C_Radation_DeathExplosion_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enemy.BPChar_Enemy_C.Player_HealthDepleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Enemy_C::Player_HealthDepleted(class AOakCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Player_HealthDepleted");

	ABPChar_Enemy_C_Player_HealthDepleted_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enemy.BPChar_Enemy_C.ExecuteUbergraph_BPChar_Enemy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Enemy_C::ExecuteUbergraph_BPChar_Enemy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.ExecuteUbergraph_BPChar_Enemy");

	ABPChar_Enemy_C_ExecuteUbergraph_BPChar_Enemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
