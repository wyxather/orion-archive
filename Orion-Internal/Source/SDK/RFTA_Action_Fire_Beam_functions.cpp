// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Fire_Beam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Fire_Beam.Action_Fire_Beam_C.SpawnLocation
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseCustomSpawnLocation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform*             CustomSpawnLocation            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)

struct FTransform UAction_Fire_Beam_C::SpawnLocation(bool* UseCustomSpawnLocation, struct FTransform* CustomSpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Beam.Action_Fire_Beam_C.SpawnLocation");

	UAction_Fire_Beam_C_SpawnLocation_Params params;
	params.UseCustomSpawnLocation = UseCustomSpawnLocation;
	params.CustomSpawnLocation = CustomSpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_Fire_Beam.Action_Fire_Beam_C.SetTarget
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Lock                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Fire_Beam_C::SetTarget(class ACharacterGunfire** Character, class AActor** Target, bool* Lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Beam.Action_Fire_Beam_C.SetTarget");

	UAction_Fire_Beam_C_SetTarget_Params params;
	params.Character = Character;
	params.Target = Target;
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Beam.Action_Fire_Beam_C.StartBeam
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Fire_Beam_C::StartBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Beam.Action_Fire_Beam_C.StartBeam");

	UAction_Fire_Beam_C_StartBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Beam.Action_Fire_Beam_C.SpawnBeam
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 BeamTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Fire_Beam_C::SpawnBeam(class UClass** ActorClass, class AActor** BeamTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Beam.Action_Fire_Beam_C.SpawnBeam");

	UAction_Fire_Beam_C_SpawnBeam_Params params;
	params.ActorClass = ActorClass;
	params.BeamTarget = BeamTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Beam.Action_Fire_Beam_C.SpawnTarget
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 SpawnCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESpawnActorCollisionHandlingMethod* CollisionHandling              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          SetTargetLock                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          SpawnTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          UseCustomSpawnLocation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform*             CustomSpawnLocation            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class ACharacterGunfire*       CharacterGunfire               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Fire_Beam_C::SpawnTarget(class UClass** SpawnCharacter, ESpawnActorCollisionHandlingMethod* CollisionHandling, bool* SetTargetLock, bool* SpawnTarget, bool* UseCustomSpawnLocation, struct FTransform* CustomSpawnLocation, class ACharacterGunfire** CharacterGunfire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Beam.Action_Fire_Beam_C.SpawnTarget");

	UAction_Fire_Beam_C_SpawnTarget_Params params;
	params.SpawnCharacter = SpawnCharacter;
	params.CollisionHandling = CollisionHandling;
	params.SetTargetLock = SetTargetLock;
	params.SpawnTarget = SpawnTarget;
	params.UseCustomSpawnLocation = UseCustomSpawnLocation;
	params.CustomSpawnLocation = CustomSpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharacterGunfire != nullptr)
		*CharacterGunfire = params.CharacterGunfire;
}


// Function Action_Fire_Beam.Action_Fire_Beam_C.Get Character
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacterGunfire*       CharacterGunfire               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Fire_Beam_C::Get_Character(class ACharacterGunfire** CharacterGunfire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Beam.Action_Fire_Beam_C.Get Character");

	UAction_Fire_Beam_C_Get_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharacterGunfire != nullptr)
		*CharacterGunfire = params.CharacterGunfire;
}


// Function Action_Fire_Beam.Action_Fire_Beam_C.StopBeam
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Fire_Beam_C::StopBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Beam.Action_Fire_Beam_C.StopBeam");

	UAction_Fire_Beam_C_StopBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Beam.Action_Fire_Beam_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Fire_Beam_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Beam.Action_Fire_Beam_C.OnActionStop");

	UAction_Fire_Beam_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Beam.Action_Fire_Beam_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Fire_Beam_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Beam.Action_Fire_Beam_C.OnActionStart");

	UAction_Fire_Beam_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Beam.Action_Fire_Beam_C.ExecuteUbergraph_Action_Fire_Beam
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Fire_Beam_C::ExecuteUbergraph_Action_Fire_Beam(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Beam.Action_Fire_Beam_C.ExecuteUbergraph_Action_Fire_Beam");

	UAction_Fire_Beam_C_ExecuteUbergraph_Action_Fire_Beam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
