// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_VarkidShared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_NonTechDeath
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_VarkidShared_C::Varkid_NonTechDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_NonTechDeath");

	UBPI_VarkidShared_C_Varkid_NonTechDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_BreathAttackStop
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_VarkidShared_C::Varkid_BreathAttackStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_BreathAttackStop");

	UBPI_VarkidShared_C_Varkid_BreathAttackStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_BreathAttackStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_VarkidShared_C::Varkid_BreathAttackStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_BreathAttackStart");

	UBPI_VarkidShared_C_Varkid_BreathAttackStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_GetElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              VarkidElement                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_VarkidShared_C::Varkid_GetElement(EOakElementalType* VarkidElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_GetElement");

	UBPI_VarkidShared_C_Varkid_GetElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VarkidElement != nullptr)
		*VarkidElement = params.VarkidElement;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_DestroyRibbon
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void UBPI_VarkidShared_C::Varkid_DestroyRibbon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_DestroyRibbon");

	UBPI_VarkidShared_C_Varkid_DestroyRibbon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_DisableRibbon
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void UBPI_VarkidShared_C::Varkid_DisableRibbon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_DisableRibbon");

	UBPI_VarkidShared_C_Varkid_DisableRibbon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_EnableRibbon
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_VarkidShared_C::Varkid_EnableRibbon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_EnableRibbon");

	UBPI_VarkidShared_C_Varkid_EnableRibbon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_HasNavForEvolve
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_VarkidShared_C::Varkid_HasNavForEvolve(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_HasNavForEvolve");

	UBPI_VarkidShared_C_Varkid_HasNavForEvolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.VarkidPod_Burst
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_VarkidShared_C::VarkidPod_Burst()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.VarkidPod_Burst");

	UBPI_VarkidShared_C_VarkidPod_Burst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.VarkidPod_HideBody
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_VarkidShared_C::VarkidPod_HideBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.VarkidPod_HideBody");

	UBPI_VarkidShared_C_VarkidPod_HideBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_AddPoisonScreenFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScreenParticleManagerComponent* PlayerScreenFXManager          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_VarkidShared_C::Varkid_AddPoisonScreenFX(class UScreenParticleManagerComponent* PlayerScreenFXManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_AddPoisonScreenFX");

	UBPI_VarkidShared_C_Varkid_AddPoisonScreenFX_Params params;
	params.PlayerScreenFXManager = PlayerScreenFXManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_IsFlying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFlying                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_VarkidShared_C::Varkid_IsFlying(bool IsFlying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_IsFlying");

	UBPI_VarkidShared_C_Varkid_IsFlying_Params params;
	params.IsFlying = IsFlying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_TargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_VarkidShared_C::Varkid_TargetChanged(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_TargetChanged");

	UBPI_VarkidShared_C_Varkid_TargetChanged_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_SetBurrowed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBurrowed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_VarkidShared_C::Varkid_SetBurrowed(bool IsBurrowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_SetBurrowed");

	UBPI_VarkidShared_C_Varkid_SetBurrowed_Params params;
	params.IsBurrowed = IsBurrowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_GetIsInPod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInPod_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_VarkidShared_C::Varkid_GetIsInPod(bool* IsInPod_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_GetIsInPod");

	UBPI_VarkidShared_C_Varkid_GetIsInPod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInPod_ != nullptr)
		*IsInPod_ = params.IsInPod_;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.VarkidPod_PodAppears
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_VarkidShared_C::VarkidPod_PodAppears()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.VarkidPod_PodAppears");

	UBPI_VarkidShared_C_VarkidPod_PodAppears_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_Evolve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_VarkidEvolution> EvolveTo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USpawnOptionData*        CustomSpawnOption              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxUIName*              CustomPodUIName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_VarkidShared_C::Varkid_Evolve(TEnumAsByte<Enum_VarkidEvolution> EvolveTo, class USpawnOptionData* CustomSpawnOption, class UGbxUIName* CustomPodUIName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_VarkidShared.BPI_VarkidShared_C.Varkid_Evolve");

	UBPI_VarkidShared_C_Varkid_Evolve_Params params;
	params.EvolveTo = EvolveTo;
	params.CustomSpawnOption = CustomSpawnOption;
	params.CustomPodUIName = CustomPodUIName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
