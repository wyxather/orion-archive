// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Tink_Turret_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_TrackingLaserCheckOFF
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_Turret_C::TinkTurret_TrackingLaserCheckOFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_TrackingLaserCheckOFF");

	UBPI_Tink_Turret_C_TinkTurret_TrackingLaserCheckOFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_TrackingLaserCheckON
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TrackingLaserTarget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_Turret_C::TinkTurret_TrackingLaserCheckON(class AActor* TrackingLaserTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_TrackingLaserCheckON");

	UBPI_Tink_Turret_C_TinkTurret_TrackingLaserCheckON_Params params;
	params.TrackingLaserTarget = TrackingLaserTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_TrackingAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_Turret_C::TinkTurret_TrackingAudio(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_TrackingAudio");

	UBPI_Tink_Turret_C_TinkTurret_TrackingAudio_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TInkTurret_SetPileSpawnerComp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpawnerComponent*       MyPileSpawnerComp              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_Tink_Turret_C::TInkTurret_SetPileSpawnerComp(class USpawnerComponent* MyPileSpawnerComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink_Turret.BPI_Tink_Turret_C.TInkTurret_SetPileSpawnerComp");

	UBPI_Tink_Turret_C_TInkTurret_SetPileSpawnerComp_Params params;
	params.MyPileSpawnerComp = MyPileSpawnerComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_DeathHide
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_Turret_C::TinkTurret_DeathHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_DeathHide");

	UBPI_Tink_Turret_C_TinkTurret_DeathHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_DeathCleanUp
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_Turret_C::TinkTurret_DeathCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_DeathCleanUp");

	UBPI_Tink_Turret_C_TinkTurret_DeathCleanUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_PerformLaunch
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_Turret_C::TinkTurret_PerformLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink_Turret.BPI_Tink_Turret_C.TinkTurret_PerformLaunch");

	UBPI_Tink_Turret_C_TinkTurret_PerformLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TurretTargetableOff
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_Turret_C::TurretTargetableOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink_Turret.BPI_Tink_Turret_C.TurretTargetableOff");

	UBPI_Tink_Turret_C_TurretTargetableOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TurretTargetableOn
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_Turret_C::TurretTargetableOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink_Turret.BPI_Tink_Turret_C.TurretTargetableOn");

	UBPI_Tink_Turret_C_TurretTargetableOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TurretGodModeOff
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_Turret_C::TurretGodModeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink_Turret.BPI_Tink_Turret_C.TurretGodModeOff");

	UBPI_Tink_Turret_C_TurretGodModeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink_Turret.BPI_Tink_Turret_C.TurretGodModeOn
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_Turret_C::TurretGodModeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink_Turret.BPI_Tink_Turret_C.TurretGodModeOn");

	UBPI_Tink_Turret_C_TurretGodModeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
