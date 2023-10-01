// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_GundamBearSlidev2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlledMove_GundamBearSlidev2.ControlledMove_GundamBearSlidev2_C.OnStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         MoveDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_GundamBearSlidev2_C::OnStart(float* MoveDuration, class AActor** TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_GundamBearSlidev2.ControlledMove_GundamBearSlidev2_C.OnStart");

	UControlledMove_GundamBearSlidev2_C_OnStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_GundamBearSlidev2.ControlledMove_GundamBearSlidev2_C.OnServerStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         MoveDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_GundamBearSlidev2_C::OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_GundamBearSlidev2.ControlledMove_GundamBearSlidev2_C.OnServerStart");

	UControlledMove_GundamBearSlidev2_C_OnServerStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_GundamBearSlidev2.ControlledMove_GundamBearSlidev2_C.ExecuteUbergraph_ControlledMove_GundamBearSlidev2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_GundamBearSlidev2_C::ExecuteUbergraph_ControlledMove_GundamBearSlidev2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_GundamBearSlidev2.ControlledMove_GundamBearSlidev2_C.ExecuteUbergraph_ControlledMove_GundamBearSlidev2");

	UControlledMove_GundamBearSlidev2_C_ExecuteUbergraph_ControlledMove_GundamBearSlidev2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
