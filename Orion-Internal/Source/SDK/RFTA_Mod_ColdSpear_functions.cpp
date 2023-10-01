// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_ColdSpear_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_ColdSpear.Mod_ColdSpear_C.GetFireDirection
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AMod_ColdSpear_C::GetFireDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.GetFireDirection");

	AMod_ColdSpear_C_GetFireDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.OnRep_IcicleOn
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AMod_ColdSpear_C::OnRep_IcicleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.OnRep_IcicleOn");

	AMod_ColdSpear_C_OnRep_IcicleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.GetExplosionDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_ColdSpear_C::GetExplosionDamage(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.GetExplosionDamage");

	AMod_ColdSpear_C_GetExplosionDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.GetImpactDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_ColdSpear_C::GetImpactDamage(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.GetImpactDamage");

	AMod_ColdSpear_C_GetImpactDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_ColdSpear_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.ModifyDamage");

	AMod_ColdSpear_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.DoAction
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_ColdSpear_C::DoAction(class UActionComponent** ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.DoAction");

	AMod_ColdSpear_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_ColdSpear_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.ModifyInspectInfo");

	AMod_ColdSpear_C_ModifyInspectInfo_Params params;
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


// Function Mod_ColdSpear.Mod_ColdSpear_C.OnBeginUse
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_ColdSpear_C::OnBeginUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.OnBeginUse");

	AMod_ColdSpear_C_OnBeginUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.OnEndUse
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_ColdSpear_C::OnEndUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.OnEndUse");

	AMod_ColdSpear_C_OnEndUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.OnPreviewStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_ColdSpear_C::OnPreviewStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.OnPreviewStart");

	AMod_ColdSpear_C_OnPreviewStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.OnServer_End
// 00007FF6F8B35350
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMod_ColdSpear_C::OnServer_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.OnServer_End");

	AMod_ColdSpear_C_OnServer_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.OnServer_TurnOff
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AMod_ColdSpear_C::OnServer_TurnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.OnServer_TurnOff");

	AMod_ColdSpear_C_OnServer_TurnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.OnPreviewEnd
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_ColdSpear_C::OnPreviewEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.OnPreviewEnd");

	AMod_ColdSpear_C_OnPreviewEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AMod_ColdSpear_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.ReceiveBeginPlay");

	AMod_ColdSpear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.OnActivate
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_ColdSpear_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.OnActivate");

	AMod_ColdSpear_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.Client_GatherInfo
// 00007FF6F8B35350
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void AMod_ColdSpear_C::Client_GatherInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.Client_GatherInfo");

	AMod_ColdSpear_C_Client_GatherInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.Server_DoActionWithInfo
// 00007FF6F8B35350
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator*               Rot                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_ColdSpear_C::Server_DoActionWithInfo(struct FVector* Origin, struct FRotator* Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.Server_DoActionWithInfo");

	AMod_ColdSpear_C_Server_DoActionWithInfo_Params params;
	params.Origin = Origin;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_ColdSpear.Mod_ColdSpear_C.ExecuteUbergraph_Mod_ColdSpear
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_ColdSpear_C::ExecuteUbergraph_Mod_ColdSpear(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear.Mod_ColdSpear_C.ExecuteUbergraph_Mod_ColdSpear");

	AMod_ColdSpear_C_ExecuteUbergraph_Mod_ColdSpear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
