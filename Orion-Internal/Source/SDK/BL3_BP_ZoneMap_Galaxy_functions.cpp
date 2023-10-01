// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_Galaxy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_Galaxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.UserConstructionScript");

	ABP_ZoneMap_Galaxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Animate Galaxy Map Components__FinishedFunc
// (BlueprintEvent)

void ABP_ZoneMap_Galaxy_C::Animate_Galaxy_Map_Components__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Animate Galaxy Map Components__FinishedFunc");

	ABP_ZoneMap_Galaxy_C_Animate_Galaxy_Map_Components__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Animate Galaxy Map Components__UpdateFunc
// (BlueprintEvent)

void ABP_ZoneMap_Galaxy_C::Animate_Galaxy_Map_Components__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Animate Galaxy Map Components__UpdateFunc");

	ABP_ZoneMap_Galaxy_C_Animate_Galaxy_Map_Components__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Transition In
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_Galaxy_C::Transition_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Transition In");

	ABP_ZoneMap_Galaxy_C_Transition_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Interrupt Transition In
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_Galaxy_C::Interrupt_Transition_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Interrupt Transition In");

	ABP_ZoneMap_Galaxy_C_Interrupt_Transition_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Transition Out
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_Galaxy_C::Transition_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Transition Out");

	ABP_ZoneMap_Galaxy_C_Transition_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Interrupt Transition Out
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_Galaxy_C::Interrupt_Transition_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Interrupt Transition Out");

	ABP_ZoneMap_Galaxy_C_Interrupt_Transition_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_ZoneMap_Galaxy_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ReceiveDestroyed");

	ABP_ZoneMap_Galaxy_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_Galaxy_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ReceiveTick");

	ABP_ZoneMap_Galaxy_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ExecuteUbergraph_BP_ZoneMap_Galaxy
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_Galaxy_C::ExecuteUbergraph_BP_ZoneMap_Galaxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ExecuteUbergraph_BP_ZoneMap_Galaxy");

	ABP_ZoneMap_Galaxy_C_ExecuteUbergraph_BP_ZoneMap_Galaxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
