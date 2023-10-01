// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Beam_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Beam_Projectile.BP_Beam_Projectile_C.ModifyBeamStartEnd
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 OutStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 OutEnd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Beam_Projectile_C::ModifyBeamStartEnd(struct FVector* Start, struct FVector* End, struct FVector* OutStart, struct FVector* OutEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.ModifyBeamStartEnd");

	ABP_Beam_Projectile_C_ModifyBeamStartEnd_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStart != nullptr)
		*OutStart = params.OutStart;
	if (OutEnd != nullptr)
		*OutEnd = params.OutEnd;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.GetBeamStartEnd
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Beam_Projectile_C::GetBeamStartEnd(struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.GetBeamStartEnd");

	ABP_Beam_Projectile_C_GetBeamStartEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.InitValues
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  BeamSourceSocket               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         SphereTraceRadius              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Beam_Projectile_C::InitValues(struct FName* BeamSourceSocket, float* Range, float* SphereTraceRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.InitValues");

	ABP_Beam_Projectile_C_InitValues_Params params;
	params.BeamSourceSocket = BeamSourceSocket;
	params.Range = Range;
	params.SphereTraceRadius = SphereTraceRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.StopBeam
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Beam_Projectile_C::StopBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.StopBeam");

	ABP_Beam_Projectile_C_StopBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.TickBeam
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Beam_Projectile_C::TickBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.TickBeam");

	ABP_Beam_Projectile_C_TickBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.UpdateFX
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                StartTrace                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                EndTrace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Beam_Projectile_C::UpdateFX(struct FVector* StartTrace, struct FVector* EndTrace, bool* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.UpdateFX");

	ABP_Beam_Projectile_C_UpdateFX_Params params;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.UpdateBeam
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                StartTrace                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                EndTrace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Beam_Projectile_C::UpdateBeam(struct FVector* StartTrace, struct FVector* EndTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.UpdateBeam");

	ABP_Beam_Projectile_C_UpdateBeam_Params params;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.Get Owning Character
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacterGunfire*       AsCharacter_Gunfire            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Beam_Projectile_C::Get_Owning_Character(class ACharacterGunfire** AsCharacter_Gunfire)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.Get Owning Character");

	ABP_Beam_Projectile_C_Get_Owning_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsCharacter_Gunfire != nullptr)
		*AsCharacter_Gunfire = params.AsCharacter_Gunfire;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.ActivateAllFX
// 00007FF6F8B35350
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Beam_Projectile_C::ActivateAllFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.ActivateAllFX");

	ABP_Beam_Projectile_C_ActivateAllFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.DeactivateAllFX
// 00007FF6F8B35350
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Beam_Projectile_C::DeactivateAllFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.DeactivateAllFX");

	ABP_Beam_Projectile_C_DeactivateAllFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.ActivateImpactFX
// 00007FF6F8B35350
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Beam_Projectile_C::ActivateImpactFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.ActivateImpactFX");

	ABP_Beam_Projectile_C_ActivateImpactFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.DeactivateImpactFX
// 00007FF6F8B35350
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Beam_Projectile_C::DeactivateImpactFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.DeactivateImpactFX");

	ABP_Beam_Projectile_C_DeactivateImpactFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Beam_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.ReceiveBeginPlay");

	ABP_Beam_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Beam_Projectile_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.ReceiveTick");

	ABP_Beam_Projectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.OnDestroy
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_Beam_Projectile_C::OnDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.OnDestroy");

	ABP_Beam_Projectile_C_OnDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beam_Projectile.BP_Beam_Projectile_C.ExecuteUbergraph_BP_Beam_Projectile
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Beam_Projectile_C::ExecuteUbergraph_BP_Beam_Projectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beam_Projectile.BP_Beam_Projectile_C.ExecuteUbergraph_BP_Beam_Projectile");

	ABP_Beam_Projectile_C_ExecuteUbergraph_BP_Beam_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
