// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_IO_Combat_Barrel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetNavPainterEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_Combat_Barrel_C::BPI_SetNavPainterEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetNavPainterEnabled");

	UBPI_IO_Combat_Barrel_C_BPI_SetNavPainterEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ResetHealth
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_IO_Combat_Barrel_C::BPI_ResetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ResetHealth");

	UBPI_IO_Combat_Barrel_C_BPI_ResetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ImpulseThrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ThrowVector                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RotatorForSpin                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          FuseSpeedScale                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AdditiveVector                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPI_IO_Combat_Barrel_C::BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ImpulseThrow");

	UBPI_IO_Combat_Barrel_C_BPI_ImpulseThrow_Params params;
	params.ThrowVector = ThrowVector;
	params.Force = Force;
	params.RotatorForSpin = RotatorForSpin;
	params.FuseSpeedScale = FuseSpeedScale;
	params.AdditiveVector = AdditiveVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetSimulatePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PhysicsOn_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_Combat_Barrel_C::BPI_SetSimulatePhysics(bool PhysicsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetSimulatePhysics");

	UBPI_IO_Combat_Barrel_C_BPI_SetSimulatePhysics_Params params;
	params.PhysicsOn_ = PhysicsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_Explode
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_IO_Combat_Barrel_C::BPI_Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_Explode");

	UBPI_IO_Combat_Barrel_C_BPI_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_StartFuse
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_IO_Combat_Barrel_C::BPI_StartFuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_StartFuse");

	UBPI_IO_Combat_Barrel_C_BPI_StartFuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
