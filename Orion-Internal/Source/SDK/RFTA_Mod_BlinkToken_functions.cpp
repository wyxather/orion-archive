// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_BlinkToken_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_BlinkToken.Mod_BlinkToken_C.CheckForFog
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NewEnd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_BlinkToken_C::CheckForFog(struct FVector* Start, struct FVector* End, struct FVector* NewEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.CheckForFog");

	AMod_BlinkToken_C_CheckForFog_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEnd != nullptr)
		*NewEnd = params.NewEnd;
}


// Function Mod_BlinkToken.Mod_BlinkToken_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_BlinkToken_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.ModifyDamage");

	AMod_BlinkToken_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_BlinkToken.Mod_BlinkToken_C.CalculateClientAimVector
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimOrigin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 AimEnd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AMod_BlinkToken_C::CalculateClientAimVector(struct FVector* AimOrigin, struct FVector* AimEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.CalculateClientAimVector");

	AMod_BlinkToken_C_CalculateClientAimVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimOrigin != nullptr)
		*AimOrigin = params.AimOrigin;
	if (AimEnd != nullptr)
		*AimEnd = params.AimEnd;

	return params.ReturnValue;
}


// Function Mod_BlinkToken.Mod_BlinkToken_C.FindGround
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector*                CurrentPoint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         AboveDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         BelowDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 GroundPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HitGround                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_BlinkToken_C::FindGround(struct FVector* CurrentPoint, float* AboveDistance, float* BelowDistance, struct FVector* GroundPoint, bool* HitGround)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.FindGround");

	AMod_BlinkToken_C_FindGround_Params params;
	params.CurrentPoint = CurrentPoint;
	params.AboveDistance = AboveDistance;
	params.BelowDistance = BelowDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroundPoint != nullptr)
		*GroundPoint = params.GroundPoint;
	if (HitGround != nullptr)
		*HitGround = params.HitGround;
}


// Function Mod_BlinkToken.Mod_BlinkToken_C.GetBlinkLocation
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          AddLift                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_BlinkToken_C::GetBlinkLocation(bool* AddLift, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.GetBlinkLocation");

	AMod_BlinkToken_C_GetBlinkLocation_Params params;
	params.AddLift = AddLift;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
}


// Function Mod_BlinkToken.Mod_BlinkToken_C.ClearIndicator
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AMod_BlinkToken_C::ClearIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.ClearIndicator");

	AMod_BlinkToken_C_ClearIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_BlinkToken.Mod_BlinkToken_C.UpdateIndicator
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMod_BlinkToken_C::UpdateIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.UpdateIndicator");

	AMod_BlinkToken_C_UpdateIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_BlinkToken.Mod_BlinkToken_C.DoAction
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_BlinkToken_C::DoAction(class UActionComponent** ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.DoAction");

	AMod_BlinkToken_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}


// Function Mod_BlinkToken.Mod_BlinkToken_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_BlinkToken_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.ModifyInspectInfo");

	AMod_BlinkToken_C_ModifyInspectInfo_Params params;
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


// Function Mod_BlinkToken.Mod_BlinkToken_C.OnPreviewEnd
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_BlinkToken_C::OnPreviewEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.OnPreviewEnd");

	AMod_BlinkToken_C_OnPreviewEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_BlinkToken.Mod_BlinkToken_C.PreviewLoop
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AMod_BlinkToken_C::PreviewLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.PreviewLoop");

	AMod_BlinkToken_C_PreviewLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_BlinkToken.Mod_BlinkToken_C.OnPreviewStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_BlinkToken_C::OnPreviewStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.OnPreviewStart");

	AMod_BlinkToken_C_OnPreviewStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_BlinkToken.Mod_BlinkToken_C.ExecuteUbergraph_Mod_BlinkToken
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_BlinkToken_C::ExecuteUbergraph_Mod_BlinkToken(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BlinkToken.Mod_BlinkToken_C.ExecuteUbergraph_Mod_BlinkToken");

	AMod_BlinkToken_C_ExecuteUbergraph_Mod_BlinkToken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
