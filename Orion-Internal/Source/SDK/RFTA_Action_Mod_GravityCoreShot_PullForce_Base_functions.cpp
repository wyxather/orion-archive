// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_GravityCoreShot_PullForce_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.ShouldMoveTarget
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacterGunfire**      Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_GravityCoreShot_PullForce_Base_C::ShouldMoveTarget(class ACharacterGunfire** Target, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.ShouldMoveTarget");

	UAction_Mod_GravityCoreShot_PullForce_Base_C_ShouldMoveTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.GetEpicenterLocation
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_GravityCoreShot_PullForce_Base_C::GetEpicenterLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.GetEpicenterLocation");

	UAction_Mod_GravityCoreShot_PullForce_Base_C_GetEpicenterLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.ApplyForce
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_GravityCoreShot_PullForce_Base_C::ApplyForce(class ACharacterGunfire** Character, float* Distance, float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.ApplyForce");

	UAction_Mod_GravityCoreShot_PullForce_Base_C_ApplyForce_Params params;
	params.Character = Character;
	params.Distance = Distance;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.OnTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_GravityCoreShot_PullForce_Base_C::OnTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.OnTick");

	UAction_Mod_GravityCoreShot_PullForce_Base_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.ExecuteUbergraph_Action_Mod_GravityCoreShot_PullForce_Base
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_GravityCoreShot_PullForce_Base_C::ExecuteUbergraph_Action_Mod_GravityCoreShot_PullForce_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.ExecuteUbergraph_Action_Mod_GravityCoreShot_PullForce_Base");

	UAction_Mod_GravityCoreShot_PullForce_Base_C_ExecuteUbergraph_Action_Mod_GravityCoreShot_PullForce_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
