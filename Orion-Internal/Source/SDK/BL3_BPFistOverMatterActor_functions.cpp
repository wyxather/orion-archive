// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFistOverMatterActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.OnRep_GroundLocation
// (BlueprintCallable, BlueprintEvent)

void ABPFistOverMatterActor_C::OnRep_GroundLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.OnRep_GroundLocation");

	ABPFistOverMatterActor_C_OnRep_GroundLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.PerformFeedback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPFistOverMatterActor_C::PerformFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.PerformFeedback");

	ABPFistOverMatterActor_C_PerformFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoSlamDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SlamLocation_                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABPFistOverMatterActor_C::DoSlamDamage(const struct FVector& SlamLocation_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoSlamDamage");

	ABPFistOverMatterActor_C_DoSlamDamage_Params params;
	params.SlamLocation_ = SlamLocation_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.GetfindGroundVectorLocations
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (Parm, OutParm, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, IsPlainOldData)

void ABPFistOverMatterActor_C::GetfindGroundVectorLocations(struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.GetfindGroundVectorLocations");

	ABPFistOverMatterActor_C_GetfindGroundVectorLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.GetMaxTime
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABPFistOverMatterActor_C::GetMaxTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.GetMaxTime");

	ABPFistOverMatterActor_C_GetMaxTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPFistOverMatterActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.UserConstructionScript");

	ABPFistOverMatterActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABPFistOverMatterActor_C::GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9");

	ABPFistOverMatterActor_C_GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABPFistOverMatterActor_C::GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9");

	ABPFistOverMatterActor_C_GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.SpawnSlamEmitter
// (BlueprintCallable, BlueprintEvent)

void ABPFistOverMatterActor_C::SpawnSlamEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.SpawnSlamEmitter");

	ABPFistOverMatterActor_C_SpawnSlamEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.WebSlamParticleSystemEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABPFistOverMatterActor_C::WebSlamParticleSystemEvent(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.WebSlamParticleSystemEvent");

	ABPFistOverMatterActor_C_WebSlamParticleSystemEvent_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.StartRightHandTimer
// (BlueprintCallable, BlueprintEvent)

void ABPFistOverMatterActor_C::StartRightHandTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.StartRightHandTimer");

	ABPFistOverMatterActor_C_StartRightHandTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.StartLeftHandTimer
// (BlueprintCallable, BlueprintEvent)

void ABPFistOverMatterActor_C::StartLeftHandTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.StartLeftHandTimer");

	ABPFistOverMatterActor_C_StartLeftHandTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPFistOverMatterActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.ReceiveBeginPlay");

	ABPFistOverMatterActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.FindGroundLocationAsync
// (BlueprintCallable, BlueprintEvent)

void ABPFistOverMatterActor_C::FindGroundLocationAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.FindGroundLocationAsync");

	ABPFistOverMatterActor_C_FindGroundLocationAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.BeginWebSlam
// (BlueprintCallable, BlueprintEvent)

void ABPFistOverMatterActor_C::BeginWebSlam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.BeginWebSlam");

	ABPFistOverMatterActor_C_BeginWebSlam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.EndWebSlam
// (BlueprintCallable, BlueprintEvent)

void ABPFistOverMatterActor_C::EndWebSlam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.EndWebSlam");

	ABPFistOverMatterActor_C_EndWebSlam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoWebSlamLeftDamage
// (BlueprintCallable, BlueprintEvent)

void ABPFistOverMatterActor_C::DoWebSlamLeftDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoWebSlamLeftDamage");

	ABPFistOverMatterActor_C_DoWebSlamLeftDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoWebSlamRightDamage
// (BlueprintCallable, BlueprintEvent)

void ABPFistOverMatterActor_C::DoWebSlamRightDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoWebSlamRightDamage");

	ABPFistOverMatterActor_C_DoWebSlamRightDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPFistOverMatterActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.ReceiveEndPlay");

	ABPFistOverMatterActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFistOverMatterActor.BPFistOverMatterActor_C.ExecuteUbergraph_BPFistOverMatterActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPFistOverMatterActor_C::ExecuteUbergraph_BPFistOverMatterActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFistOverMatterActor.BPFistOverMatterActor_C.ExecuteUbergraph_BPFistOverMatterActor");

	ABPFistOverMatterActor_C_ExecuteUbergraph_BPFistOverMatterActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
