// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElectricWire_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_ElectricWire.IO_ElectricWire_C.Init_WireScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_ElectricWire_C::Init_WireScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricWire.IO_ElectricWire_C.Init_WireScale");

	AIO_ElectricWire_C_Init_WireScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricWire.IO_ElectricWire_C.Debug_ShowSplinePoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_ElectricWire_C::Debug_ShowSplinePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricWire.IO_ElectricWire_C.Debug_ShowSplinePoints");

	AIO_ElectricWire_C_Debug_ShowSplinePoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricWire.IO_ElectricWire_C.Init_GenerateWireSegments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_ElectricWire_C::Init_GenerateWireSegments()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricWire.IO_ElectricWire_C.Init_GenerateWireSegments");

	AIO_ElectricWire_C_Init_GenerateWireSegments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricWire.IO_ElectricWire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_ElectricWire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricWire.IO_ElectricWire_C.UserConstructionScript");

	AIO_ElectricWire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricWire.IO_ElectricWire_C.BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_4_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_ElectricWireSpline
// (BlueprintEvent)
// Parameters:
// class UElementalInteractionData* State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInitialState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricWire_C::BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_4_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_ElectricWireSpline(class UElementalInteractionData* State, bool bIsInitialState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricWire.IO_ElectricWire_C.BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_4_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_ElectricWireSpline");

	AIO_ElectricWire_C_BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_4_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_ElectricWireSpline_Params params;
	params.State = State;
	params.bIsInitialState = bIsInitialState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricWire.IO_ElectricWire_C.__UserState_ElectricState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricWire_C::__UserState_ElectricState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricWire.IO_ElectricWire_C.__UserState_ElectricState_2");

	AIO_ElectricWire_C___UserState_ElectricState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricWire.IO_ElectricWire_C.__UserState_ElectricState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricWire_C::__UserState_ElectricState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricWire.IO_ElectricWire_C.__UserState_ElectricState_1");

	AIO_ElectricWire_C___UserState_ElectricState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricWire.IO_ElectricWire_C.ExecuteUbergraph_IO_ElectricWire
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricWire_C::ExecuteUbergraph_IO_ElectricWire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricWire.IO_ElectricWire_C.ExecuteUbergraph_IO_ElectricWire");

	AIO_ElectricWire_C_ExecuteUbergraph_IO_ElectricWire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
