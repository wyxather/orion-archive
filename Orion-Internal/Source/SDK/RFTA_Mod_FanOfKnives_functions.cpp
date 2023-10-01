// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_FanOfKnives_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.AttachKnives
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FanOfKnives_C::AttachKnives(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.AttachKnives");

	AMod_FanOfKnives_C_AttachKnives_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetCurrentTargets
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AllowCached                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>          Targets                        (Parm, OutParm, ZeroConstructor)

void AMod_FanOfKnives_C::GetCurrentTargets(bool* AllowCached, TArray<class AActor*>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetCurrentTargets");

	AMod_FanOfKnives_C_GetCurrentTargets_Params params;
	params.AllowCached = AllowCached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ShowReticule
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AMod_FanOfKnives_C::ShowReticule()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ShowReticule");

	AMod_FanOfKnives_C_ShowReticule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetFireDirection
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AMod_FanOfKnives_C::GetFireDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetFireDirection");

	AMod_FanOfKnives_C_GetFireDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnRep_KnifeOn
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AMod_FanOfKnives_C::OnRep_KnifeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnRep_KnifeOn");

	AMod_FanOfKnives_C_OnRep_KnifeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetDotDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FanOfKnives_C::GetDotDamage(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetDotDamage");

	AMod_FanOfKnives_C_GetDotDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_FanOfKnives_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ModifyDamage");

	AMod_FanOfKnives_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.DoAction
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FanOfKnives_C::DoAction(class UActionComponent** ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.DoAction");

	AMod_FanOfKnives_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_FanOfKnives_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ModifyInspectInfo");

	AMod_FanOfKnives_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FanOfKnives_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ReceiveTick");

	AMod_FanOfKnives_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnServer_TurnOff
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AMod_FanOfKnives_C::OnServer_TurnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnServer_TurnOff");

	AMod_FanOfKnives_C_OnServer_TurnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnServer_End
// 00007FF6F8B35350
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMod_FanOfKnives_C::OnServer_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnServer_End");

	AMod_FanOfKnives_C_OnServer_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnPreviewStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_FanOfKnives_C::OnPreviewStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnPreviewStart");

	AMod_FanOfKnives_C_OnPreviewStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnEndUse
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_FanOfKnives_C::OnEndUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnEndUse");

	AMod_FanOfKnives_C_OnEndUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnBeginUse
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_FanOfKnives_C::OnBeginUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnBeginUse");

	AMod_FanOfKnives_C_OnBeginUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnPreviewEnd
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_FanOfKnives_C::OnPreviewEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnPreviewEnd");

	AMod_FanOfKnives_C_OnPreviewEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AMod_FanOfKnives_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ReceiveBeginPlay");

	AMod_FanOfKnives_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnActivate
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_FanOfKnives_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnActivate");

	AMod_FanOfKnives_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ClientDoAction
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void AMod_FanOfKnives_C::ClientDoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ClientDoAction");

	AMod_FanOfKnives_C_ClientDoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ServerDoAction
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ReticuleLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FanOfKnives_C::ServerDoAction(struct FVector* ReticuleLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ServerDoAction");

	AMod_FanOfKnives_C_ServerDoAction_Params params;
	params.ReticuleLocation = ReticuleLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ToggleKnifeState
// 00007FF6F8B35350
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SetKnifeOn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_FanOfKnives_C::ToggleKnifeState(bool* SetKnifeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ToggleKnifeState");

	AMod_FanOfKnives_C_ToggleKnifeState_Params params;
	params.SetKnifeOn = SetKnifeOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ExecuteUbergraph_Mod_FanOfKnives
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FanOfKnives_C::ExecuteUbergraph_Mod_FanOfKnives(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ExecuteUbergraph_Mod_FanOfKnives");

	AMod_FanOfKnives_C_ExecuteUbergraph_Mod_FanOfKnives_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
