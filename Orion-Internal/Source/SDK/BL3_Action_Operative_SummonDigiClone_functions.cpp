// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_SummonDigiClone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.Failure_264F849F461DE8AE8A8C7B98070E4B60
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnvQueryResult         QueryResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_SummonDigiClone_C::Failure_264F849F461DE8AE8A8C7B98070E4B60(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.Failure_264F849F461DE8AE8A8C7B98070E4B60");

	UAction_Operative_SummonDigiClone_C_Failure_264F849F461DE8AE8A8C7B98070E4B60_Params params;
	params.QueryResult = QueryResult;
	params.Location = Location;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.Success_264F849F461DE8AE8A8C7B98070E4B60
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnvQueryResult         QueryResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_SummonDigiClone_C::Success_264F849F461DE8AE8A8C7B98070E4B60(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.Success_264F849F461DE8AE8A8C7B98070E4B60");

	UAction_Operative_SummonDigiClone_C_Success_264F849F461DE8AE8A8C7B98070E4B60_Params params;
	params.QueryResult = QueryResult;
	params.Location = Location;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_SummonDigiClone_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.OnBegin");

	UAction_Operative_SummonDigiClone_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.AnimNotify_SpawnClones
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_SummonDigiClone_C::AnimNotify_SpawnClones()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.AnimNotify_SpawnClones");

	UAction_Operative_SummonDigiClone_C_AnimNotify_SpawnClones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.ExecuteUbergraph_Action_Operative_SummonDigiClone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_SummonDigiClone_C::ExecuteUbergraph_Action_Operative_SummonDigiClone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.ExecuteUbergraph_Action_Operative_SummonDigiClone");

	UAction_Operative_SummonDigiClone_C_ExecuteUbergraph_Action_Operative_SummonDigiClone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
