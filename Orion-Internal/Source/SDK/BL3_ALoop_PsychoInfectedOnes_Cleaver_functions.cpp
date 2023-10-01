// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALoop_PsychoInfectedOnes_Cleaver_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_PsychoInfectedOnes_Cleaver_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.OnBegin");

	UALoop_PsychoInfectedOnes_Cleaver_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_PsychoInfectedOnes_Cleaver_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.OnEnd");

	UALoop_PsychoInfectedOnes_Cleaver_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.Notify_Feast_Start
// (BlueprintCallable, BlueprintEvent)

void UALoop_PsychoInfectedOnes_Cleaver_C::Notify_Feast_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.Notify_Feast_Start");

	UALoop_PsychoInfectedOnes_Cleaver_C_Notify_Feast_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.Notify_Feast_Stop
// (BlueprintCallable, BlueprintEvent)

void UALoop_PsychoInfectedOnes_Cleaver_C::Notify_Feast_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.Notify_Feast_Stop");

	UALoop_PsychoInfectedOnes_Cleaver_C_Notify_Feast_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.ExecuteUbergraph_ALoop_PsychoInfectedOnes_Cleaver
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_PsychoInfectedOnes_Cleaver_C::ExecuteUbergraph_ALoop_PsychoInfectedOnes_Cleaver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_PsychoInfectedOnes_Cleaver.ALoop_PsychoInfectedOnes_Cleaver_C.ExecuteUbergraph_ALoop_PsychoInfectedOnes_Cleaver");

	UALoop_PsychoInfectedOnes_Cleaver_C_ExecuteUbergraph_ALoop_PsychoInfectedOnes_Cleaver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
