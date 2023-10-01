// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Global_GroundSlam_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.DoMelee
// (Public, BlueprintCallable, BlueprintEvent)

void UControlledMove_Global_GroundSlam_Base_C::DoMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.DoMelee");

	UControlledMove_Global_GroundSlam_Base_C_DoMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.GroundSlam_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Global_GroundSlam_Base_C::GroundSlam_End(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.GroundSlam_End");

	UControlledMove_Global_GroundSlam_Base_C_GroundSlam_End_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.OnStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         MoveDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Global_GroundSlam_Base_C::OnStart(float* MoveDuration, class AActor** TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.OnStart");

	UControlledMove_Global_GroundSlam_Base_C_OnStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Global_GroundSlam_Base_C::OnStop(bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.OnStop");

	UControlledMove_Global_GroundSlam_Base_C_OnStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Global_GroundSlam_Base_C::ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base");

	UControlledMove_Global_GroundSlam_Base_C_ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
