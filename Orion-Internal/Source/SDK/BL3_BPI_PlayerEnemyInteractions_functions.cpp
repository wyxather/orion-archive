// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_PlayerEnemyInteractions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Player_SpawnTransfusionProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  DataBlueprint__Override_       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType__Override_          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SourceActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer__Override_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_PlayerEnemyInteractions_C::Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Player_SpawnTransfusionProjectile");

	UBPI_PlayerEnemyInteractions_C_Player_SpawnTransfusionProjectile_Params params;
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


// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnThoughtLockStop
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PlayerEnemyInteractions_C::Enemy_OnThoughtLockStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnThoughtLockStop");

	UBPI_PlayerEnemyInteractions_C_Enemy_OnThoughtLockStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnThoughtLockStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PlayerEnemyInteractions_C::Enemy_OnThoughtLockStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnThoughtLockStart");

	UBPI_PlayerEnemyInteractions_C_Enemy_OnThoughtLockStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnPhaseLockStop
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PlayerEnemyInteractions_C::Enemy_OnPhaseLockStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnPhaseLockStop");

	UBPI_PlayerEnemyInteractions_C_Enemy_OnPhaseLockStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnPhaseLockStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PlayerEnemyInteractions_C::Enemy_OnPhaseLockStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnPhaseLockStart");

	UBPI_PlayerEnemyInteractions_C_Enemy_OnPhaseLockStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Player_HealthDepleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_PlayerEnemyInteractions_C::Player_HealthDepleted(class AOakCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Player_HealthDepleted");

	UBPI_PlayerEnemyInteractions_C_Player_HealthDepleted_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
