// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_PetLoader_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_GetType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_PetLoader_Variations> LoaderType                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_PetLoader_C::PetLoader_GetType(TEnumAsByte<Enum_PetLoader_Variations>* LoaderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_GetType");

	UBPI_PetLoader_C_PetLoader_GetType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoaderType != nullptr)
		*LoaderType = params.LoaderType;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_SetImmuneToPhaselock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsImmune                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_PetLoader_C::PetLoader_SetImmuneToPhaselock(bool bIsImmune)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_SetImmuneToPhaselock");

	UBPI_PetLoader_C_PetLoader_SetImmuneToPhaselock_Params params;
	params.bIsImmune = bIsImmune;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartLaserCharge
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoader_StartLaserCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartLaserCharge");

	UBPI_PetLoader_C_PetLoader_StartLaserCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ShieldHit
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoaderRIOT_ShieldHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ShieldHit");

	UBPI_PetLoader_C_PetLoaderRIOT_ShieldHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_IsUnboxSpawning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUnboxing                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_PetLoader_C::PetLoader_IsUnboxSpawning(bool IsUnboxing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_IsUnboxSpawning");

	UBPI_PetLoader_C_PetLoader_IsUnboxSpawning_Params params;
	params.IsUnboxing = IsUnboxing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_AnticipateLaserBall
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoaderBadass_AnticipateLaserBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_AnticipateLaserBall");

	UBPI_PetLoader_C_PetLoaderBadass_AnticipateLaserBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_ThrowLaserBall
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoaderBadass_ThrowLaserBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_ThrowLaserBall");

	UBPI_PetLoader_C_PetLoaderBadass_ThrowLaserBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_ToggleHandGrip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_PetLoader_C::PetLoader_ToggleHandGrip(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_ToggleHandGrip");

	UBPI_PetLoader_C_PetLoader_ToggleHandGrip_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_isSpawningSurveyor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSpawningSurveyor             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_PetLoader_C::PetLoader_isSpawningSurveyor(bool* IsSpawningSurveyor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_isSpawningSurveyor");

	UBPI_PetLoader_C_PetLoader_isSpawningSurveyor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSpawningSurveyor != nullptr)
		*IsSpawningSurveyor = params.IsSpawningSurveyor;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StopSpawningSurveyor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedWithSuccess            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_PetLoader_C::PetLoader_StopSpawningSurveyor(bool FinishedWithSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StopSpawningSurveyor");

	UBPI_PetLoader_C_PetLoader_StopSpawningSurveyor_Params params;
	params.FinishedWithSuccess = FinishedWithSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartSpawningSurveyor
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoader_StartSpawningSurveyor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartSpawningSurveyor");

	UBPI_PetLoader_C_PetLoader_StartSpawningSurveyor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_LaserGround
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoaderBadass_LaserGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_LaserGround");

	UBPI_PetLoader_C_PetLoaderBadass_LaserGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ChargeEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoaderRIOT_ChargeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ChargeEnd");

	UBPI_PetLoader_C_PetLoaderRIOT_ChargeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ChargeStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoaderRIOT_ChargeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ChargeStart");

	UBPI_PetLoader_C_PetLoaderRIOT_ChargeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRPG_ShootMissile
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoaderRPG_ShootMissile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRPG_ShootMissile");

	UBPI_PetLoader_C_PetLoaderRPG_ShootMissile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRPG_isMissileBarrageDone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isDone_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_PetLoader_C::PetLoaderRPG_isMissileBarrageDone(bool* isDone_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRPG_isMissileBarrageDone");

	UBPI_PetLoader_C_PetLoaderRPG_isMissileBarrageDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isDone_ != nullptr)
		*isDone_ = params.isDone_;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ShieldDestroyed
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoaderRIOT_ShieldDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ShieldDestroyed");

	UBPI_PetLoader_C_PetLoaderRIOT_ShieldDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ThrowShield
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoaderRIOT_ThrowShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ThrowShield");

	UBPI_PetLoader_C_PetLoaderRIOT_ThrowShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_SetProjectedIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_PetLoader_ProjectedIcons> Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_PetLoader_C::PetLoader_SetProjectedIcon(TEnumAsByte<Enum_PetLoader_ProjectedIcons> Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_SetProjectedIcon");

	UBPI_PetLoader_C_PetLoader_SetProjectedIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderEXP_SelfDestruct
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoaderEXP_SelfDestruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderEXP_SelfDestruct");

	UBPI_PetLoader_C_PetLoaderEXP_SelfDestruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderEXP_Explode
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoaderEXP_Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderEXP_Explode");

	UBPI_PetLoader_C_PetLoaderEXP_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartLaser
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoader_StartLaser()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartLaser");

	UBPI_PetLoader_C_PetLoader_StartLaser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_EnterCrawlingState
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoader_EnterCrawlingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_EnterCrawlingState");

	UBPI_PetLoader_C_PetLoader_EnterCrawlingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_JumpEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoader_JumpEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_JumpEnd");

	UBPI_PetLoader_C_PetLoader_JumpEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_JumpStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PetLoader_C::PetLoader_JumpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_JumpStart");

	UBPI_PetLoader_C_PetLoader_JumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
