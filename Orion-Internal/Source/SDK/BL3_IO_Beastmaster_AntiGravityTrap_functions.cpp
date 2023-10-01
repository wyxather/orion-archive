// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Beastmaster_AntiGravityTrap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.InitTrapMods
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Beastmaster_AntiGravityTrap_C::InitTrapMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.InitTrapMods");

	AIO_Beastmaster_AntiGravityTrap_C_InitTrapMods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.CanConfuseEnemy
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Beastmaster_AntiGravityTrap_C::CanConfuseEnemy(class AActor* Actor, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.CanConfuseEnemy");

	AIO_Beastmaster_AntiGravityTrap_C_CanConfuseEnemy_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.CanKnockUpEnemy
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Beastmaster_AntiGravityTrap_C::CanKnockUpEnemy(class AActor* Actor, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.CanKnockUpEnemy");

	AIO_Beastmaster_AntiGravityTrap_C_CanKnockUpEnemy_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SetupEmitters
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Beastmaster_AntiGravityTrap_C::SetupEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SetupEmitters");

	AIO_Beastmaster_AntiGravityTrap_C_SetupEmitters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_Beastmaster_AntiGravityTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.UserConstructionScript");

	AIO_Beastmaster_AntiGravityTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.KnockupTarget
// (BlueprintCallable, BlueprintEvent)

void AIO_Beastmaster_AntiGravityTrap_C::KnockupTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.KnockupTarget");

	AIO_Beastmaster_AntiGravityTrap_C_KnockupTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.TrapOnActionSkillEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Beastmaster_AntiGravityTrap_C::TrapOnActionSkillEnd(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.TrapOnActionSkillEnd");

	AIO_Beastmaster_AntiGravityTrap_C_TrapOnActionSkillEnd_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AIO_Beastmaster_AntiGravityTrap_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ReceiveDestroyed");

	AIO_Beastmaster_AntiGravityTrap_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.FindAntiGravTargets
// (BlueprintCallable, BlueprintEvent)

void AIO_Beastmaster_AntiGravityTrap_C::FindAntiGravTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.FindAntiGravTargets");

	AIO_Beastmaster_AntiGravityTrap_C_FindAntiGravTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ConfuseTargets
// (BlueprintCallable, BlueprintEvent)

void AIO_Beastmaster_AntiGravityTrap_C::ConfuseTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ConfuseTargets");

	AIO_Beastmaster_AntiGravityTrap_C_ConfuseTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SetTrapEndCondition
// (BlueprintCallable, BlueprintEvent)

void AIO_Beastmaster_AntiGravityTrap_C::SetTrapEndCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SetTrapEndCondition");

	AIO_Beastmaster_AntiGravityTrap_C_SetTrapEndCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.DestroyTrap
// (BlueprintCallable, BlueprintEvent)

void AIO_Beastmaster_AntiGravityTrap_C::DestroyTrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.DestroyTrap");

	AIO_Beastmaster_AntiGravityTrap_C_DestroyTrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SpawnMod5Loot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Beastmaster_AntiGravityTrap_C::SpawnMod5Loot(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SpawnMod5Loot");

	AIO_Beastmaster_AntiGravityTrap_C_SpawnMod5Loot_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_Beastmaster_AntiGravityTrap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ReceiveBeginPlay");

	AIO_Beastmaster_AntiGravityTrap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.BndEvt__OakUsable_K2Node_ComponentBoundEvent_2_UsableUsedSignature__DelegateSignature_IO_Beastmaster_AntiGravityTrap
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FUseEvent               UseEvent                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AIO_Beastmaster_AntiGravityTrap_C::BndEvt__OakUsable_K2Node_ComponentBoundEvent_2_UsableUsedSignature__DelegateSignature_IO_Beastmaster_AntiGravityTrap(const struct FUseEvent& UseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.BndEvt__OakUsable_K2Node_ComponentBoundEvent_2_UsableUsedSignature__DelegateSignature_IO_Beastmaster_AntiGravityTrap");

	AIO_Beastmaster_AntiGravityTrap_C_BndEvt__OakUsable_K2Node_ComponentBoundEvent_2_UsableUsedSignature__DelegateSignature_IO_Beastmaster_AntiGravityTrap_Params params;
	params.UseEvent = UseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Beastmaster_AntiGravityTrap_C::ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap");

	AIO_Beastmaster_AntiGravityTrap_C_ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
