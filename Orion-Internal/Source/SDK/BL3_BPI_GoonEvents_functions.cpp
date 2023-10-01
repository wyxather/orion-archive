// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_GoonEvents_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_GoonEvents.BPI_GoonEvents_C.GoonShared_TargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::GoonShared_TargetChanged(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.GoonShared_TargetChanged");

	UBPI_GoonEvents_C_GoonShared_TargetChanged_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchLand
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_LaunchLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchLand");

	UBPI_GoonEvents_C_Goon_LaunchLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_Anointed_Death
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_Anointed_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_Anointed_Death");

	UBPI_GoonEvents_C_Goon_Anointed_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_GrindUpSkag
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_GrindUpSkag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_GrindUpSkag");

	UBPI_GoonEvents_C_Goon_GrindUpSkag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_OpenRiderRespawnTimerGate
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_OpenRiderRespawnTimerGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_OpenRiderRespawnTimerGate");

	UBPI_GoonEvents_C_Goon_OpenRiderRespawnTimerGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_CloseRiderRespawnTimerGate
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_CloseRiderRespawnTimerGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_CloseRiderRespawnTimerGate");

	UBPI_GoonEvents_C_Goon_CloseRiderRespawnTimerGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonAttachedTinkMaxHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AttachedTink_MaxHealth         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Get_GoonAttachedTinkMaxHealth(float* AttachedTink_MaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonAttachedTinkMaxHealth");

	UBPI_GoonEvents_C_Get_GoonAttachedTinkMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachedTink_MaxHealth != nullptr)
		*AttachedTink_MaxHealth = params.AttachedTink_MaxHealth;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_SetTinkBallWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 TinkWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Goon_SetTinkBallWeapon(class AWeapon* TinkWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_SetTinkBallWeapon");

	UBPI_GoonEvents_C_Goon_SetTinkBallWeapon_Params params;
	params.TinkWeapon = TinkWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_GoonIsDead
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Set_GoonIsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Set_GoonIsDead");

	UBPI_GoonEvents_C_Set_GoonIsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_GrabTinkFromPack
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_GrabTinkFromPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_GrabTinkFromPack");

	UBPI_GoonEvents_C_Goon_GrabTinkFromPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_SetAttachedTinkMaxHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Goon_SetAttachedTinkMaxHealth(float MaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_SetAttachedTinkMaxHealth");

	UBPI_GoonEvents_C_Goon_SetAttachedTinkMaxHealth_Params params;
	params.MaxHealth = MaxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StolenProj_DisableRight
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_StolenProj_DisableRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StolenProj_DisableRight");

	UBPI_GoonEvents_C_Goon_StolenProj_DisableRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StolenProj_EnableRight
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_StolenProj_EnableRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StolenProj_EnableRight");

	UBPI_GoonEvents_C_Goon_StolenProj_EnableRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StolenProj_Return
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_StolenProj_Return()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StolenProj_Return");

	UBPI_GoonEvents_C_Goon_StolenProj_Return_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StolenProj_Disarm
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_StolenProj_Disarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StolenProj_Disarm");

	UBPI_GoonEvents_C_Goon_StolenProj_Disarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_Goon_IsTinkAttached_Pack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTinkInPack                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Set_Goon_IsTinkAttached_Pack(bool IsTinkInPack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Set_Goon_IsTinkAttached_Pack");

	UBPI_GoonEvents_C_Set_Goon_IsTinkAttached_Pack_Params params;
	params.IsTinkInPack = IsTinkInPack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchTink
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LaunchFromSocket               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Goon_LaunchTink(const struct FName& LaunchFromSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchTink");

	UBPI_GoonEvents_C_Goon_LaunchTink_Params params;
	params.LaunchFromSocket = LaunchFromSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchAirBall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LaunchFromSocket               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Goon_LaunchAirBall(const struct FName& LaunchFromSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchAirBall");

	UBPI_GoonEvents_C_Goon_LaunchAirBall_Params params;
	params.LaunchFromSocket = LaunchFromSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchAirRing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LaunchFromSocket               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Goon_LaunchAirRing(const struct FName& LaunchFromSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchAirRing");

	UBPI_GoonEvents_C_Goon_LaunchAirRing_Params params;
	params.LaunchFromSocket = LaunchFromSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchAirDevil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LaunchFromSocket               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Goon_LaunchAirDevil(const struct FName& LaunchFromSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LaunchAirDevil");

	UBPI_GoonEvents_C_Goon_LaunchAirDevil_Params params;
	params.LaunchFromSocket = LaunchFromSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonBalanceDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GoonBalancedDamage             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Get_GoonBalanceDamage(float* GoonBalancedDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonBalanceDamage");

	UBPI_GoonEvents_C_Get_GoonBalanceDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GoonBalancedDamage != nullptr)
		*GoonBalancedDamage = params.GoonBalancedDamage;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonLaunchSocketName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CurrentLaunchSocket            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Get_GoonLaunchSocketName(struct FName* CurrentLaunchSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonLaunchSocketName");

	UBPI_GoonEvents_C_Get_GoonLaunchSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentLaunchSocket != nullptr)
		*CurrentLaunchSocket = params.CurrentLaunchSocket;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_GoonLaunchSocketName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SavedLaunchSocket              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Set_GoonLaunchSocketName(const struct FName& SavedLaunchSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Set_GoonLaunchSocketName");

	UBPI_GoonEvents_C_Set_GoonLaunchSocketName_Params params;
	params.SavedLaunchSocket = SavedLaunchSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_PerformBarrelLaunch
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_PerformBarrelLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_PerformBarrelLaunch");

	UBPI_GoonEvents_C_Goon_PerformBarrelLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_PerformJunkBallBarrage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LaunchFromSocket               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Goon_PerformJunkBallBarrage(const struct FName& LaunchFromSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_PerformJunkBallBarrage");

	UBPI_GoonEvents_C_Goon_PerformJunkBallBarrage_Params params;
	params.LaunchFromSocket = LaunchFromSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_CachedJunkBallTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SavedJunkBallTargetLoc         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPI_GoonEvents_C::Set_CachedJunkBallTarget(const struct FVector& SavedJunkBallTargetLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Set_CachedJunkBallTarget");

	UBPI_GoonEvents_C_Set_CachedJunkBallTarget_Params params;
	params.SavedJunkBallTargetLoc = SavedJunkBallTargetLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_CachedJunkBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 JunkBallTargetLoc              (Parm, OutParm, IsPlainOldData)

void UBPI_GoonEvents_C::Get_CachedJunkBallTarget(struct FVector* JunkBallTargetLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_CachedJunkBallTarget");

	UBPI_GoonEvents_C_Get_CachedJunkBallTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JunkBallTargetLoc != nullptr)
		*JunkBallTargetLoc = params.JunkBallTargetLoc;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StartTinkRespawnTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_StartTinkRespawnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_StartTinkRespawnTimer");

	UBPI_GoonEvents_C_Goon_StartTinkRespawnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_DetachBarrel
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_DetachBarrel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_DetachBarrel");

	UBPI_GoonEvents_C_Goon_DetachBarrel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LJunkBall_Off
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_LJunkBall_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LJunkBall_Off");

	UBPI_GoonEvents_C_Goon_LJunkBall_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LJunkBall_On
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Goon_LJunkBall_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Goon_LJunkBall_On");

	UBPI_GoonEvents_C_Goon_LJunkBall_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_TinkLoadedCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LoadedTinkCount                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Get_TinkLoadedCount(float* LoadedTinkCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_TinkLoadedCount");

	UBPI_GoonEvents_C_Get_TinkLoadedCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadedTinkCount != nullptr)
		*LoadedTinkCount = params.LoadedTinkCount;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_InitialLoadTinkCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InitialLoadTinkCooldown        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Get_InitialLoadTinkCooldown(float* InitialLoadTinkCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_InitialLoadTinkCooldown");

	UBPI_GoonEvents_C_Get_InitialLoadTinkCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialLoadTinkCooldown != nullptr)
		*InitialLoadTinkCooldown = params.InitialLoadTinkCooldown;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.PushTinkCannonL
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::PushTinkCannonL()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.PushTinkCannonL");

	UBPI_GoonEvents_C_PushTinkCannonL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_IsBarrelAttached
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BarrelAttachState              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Get_IsBarrelAttached(bool* BarrelAttachState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_IsBarrelAttached");

	UBPI_GoonEvents_C_Get_IsBarrelAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BarrelAttachState != nullptr)
		*BarrelAttachState = params.BarrelAttachState;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_IsBarrelDetectorActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BarrelDetectorState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Set_IsBarrelDetectorActive(bool BarrelDetectorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Set_IsBarrelDetectorActive");

	UBPI_GoonEvents_C_Set_IsBarrelDetectorActive_Params params;
	params.BarrelDetectorState = BarrelDetectorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_GoonAttachedBarrel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewAttachedBarrel              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Set_GoonAttachedBarrel(class AActor* NewAttachedBarrel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Set_GoonAttachedBarrel");

	UBPI_GoonEvents_C_Set_GoonAttachedBarrel_Params params;
	params.NewAttachedBarrel = NewAttachedBarrel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_CurrentSmartObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CurrentSmartObject             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Get_CurrentSmartObject(class AActor** CurrentSmartObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_CurrentSmartObject");

	UBPI_GoonEvents_C_Get_CurrentSmartObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSmartObject != nullptr)
		*CurrentSmartObject = params.CurrentSmartObject;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_AmmoTypeL
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_GoonAmmoType> CurrentAmmoType                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Get_AmmoTypeL(TEnumAsByte<Enum_GoonAmmoType>* CurrentAmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_AmmoTypeL");

	UBPI_GoonEvents_C_Get_AmmoTypeL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAmmoType != nullptr)
		*CurrentAmmoType = params.CurrentAmmoType;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_IsBarrelAttached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTheBarrelAttached            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Set_IsBarrelAttached(bool IsTheBarrelAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Set_IsBarrelAttached");

	UBPI_GoonEvents_C_Set_IsBarrelAttached_Params params;
	params.IsTheBarrelAttached = IsTheBarrelAttached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_AmmoTypeL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_GoonAmmoType> NewAmmoType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Set_AmmoTypeL(TEnumAsByte<Enum_GoonAmmoType> NewAmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Set_AmmoTypeL");

	UBPI_GoonEvents_C_Set_AmmoTypeL_Params params;
	params.NewAmmoType = NewAmmoType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonAttachedBarrel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  AttachedBarrel                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Get_GoonAttachedBarrel(class AActor** AttachedBarrel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonAttachedBarrel");

	UBPI_GoonEvents_C_Get_GoonAttachedBarrel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachedBarrel != nullptr)
		*AttachedBarrel = params.AttachedBarrel;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_AirBallCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewAirBallCount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Set_AirBallCount(int NewAirBallCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Set_AirBallCount");

	UBPI_GoonEvents_C_Set_AirBallCount_Params params;
	params.NewAirBallCount = NewAirBallCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_AirBallCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentAirBallCount            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Get_AirBallCount(int* CurrentAirBallCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_AirBallCount");

	UBPI_GoonEvents_C_Get_AirBallCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAirBallCount != nullptr)
		*CurrentAirBallCount = params.CurrentAirBallCount;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Increment_AirBallCount
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Increment_AirBallCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Increment_AirBallCount");

	UBPI_GoonEvents_C_Increment_AirBallCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_AttachedTinkCurrentHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AttachedTinkHealth_Output      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Get_AttachedTinkCurrentHealth(float* AttachedTinkHealth_Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_AttachedTinkCurrentHealth");

	UBPI_GoonEvents_C_Get_AttachedTinkCurrentHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachedTinkHealth_Output != nullptr)
		*AttachedTinkHealth_Output = params.AttachedTinkHealth_Output;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.LoadTinkCannonL
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::LoadTinkCannonL()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.LoadTinkCannonL");

	UBPI_GoonEvents_C_LoadTinkCannonL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_IsTinkInCannonL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsIt                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Set_IsTinkInCannonL(bool IsIt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Set_IsTinkInCannonL");

	UBPI_GoonEvents_C_Set_IsTinkInCannonL_Params params;
	params.IsIt = IsIt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Increment_TinkLoadedCount
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Increment_TinkLoadedCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Increment_TinkLoadedCount");

	UBPI_GoonEvents_C_Increment_TinkLoadedCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Start_TinkRespawnTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::Start_TinkRespawnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Start_TinkRespawnTimer");

	UBPI_GoonEvents_C_Start_TinkRespawnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Set_AttachedTinkCurrentHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Set_AttachedTinkCurrentHealth(float CurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Set_AttachedTinkCurrentHealth");

	UBPI_GoonEvents_C_Set_AttachedTinkCurrentHealth_Params params;
	params.CurrentHealth = CurrentHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonInPackActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InPackActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_GoonEvents_C::Get_GoonInPackActor(class AActor** InPackActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.Get_GoonInPackActor");

	UBPI_GoonEvents_C_Get_GoonInPackActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InPackActor != nullptr)
		*InPackActor = params.InPackActor;
}


// Function BPI_GoonEvents.BPI_GoonEvents_C.GoonAttachedTink_Died
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_GoonEvents_C::GoonAttachedTink_Died()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GoonEvents.BPI_GoonEvents_C.GoonAttachedTink_Died");

	UBPI_GoonEvents_C_GoonAttachedTink_Died_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
