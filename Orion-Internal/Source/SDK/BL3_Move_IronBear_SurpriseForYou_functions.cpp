// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Move_IronBear_SurpriseForYou_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnHitTargetable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMove_IronBear_SurpriseForYou_C::OnHitTargetable(class AActor** HitActor, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnHitTargetable");

	UMove_IronBear_SurpriseForYou_C_OnHitTargetable_Params params;
	params.HitActor = HitActor;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnServerStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         MoveDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMove_IronBear_SurpriseForYou_C::OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnServerStart");

	UMove_IronBear_SurpriseForYou_C_OnServerStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMove_IronBear_SurpriseForYou_C::OnStop(bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnStop");

	UMove_IronBear_SurpriseForYou_C_OnStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.ExecuteUbergraph_Move_IronBear_SurpriseForYou
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMove_IronBear_SurpriseForYou_C::ExecuteUbergraph_Move_IronBear_SurpriseForYou(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.ExecuteUbergraph_Move_IronBear_SurpriseForYou");

	UMove_IronBear_SurpriseForYou_C_ExecuteUbergraph_Move_IronBear_SurpriseForYou_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
