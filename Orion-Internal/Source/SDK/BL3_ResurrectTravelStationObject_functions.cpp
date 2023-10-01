// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ResurrectTravelStationObject_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.ActivateResurrectStation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActivatingActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResurrectTravelStationObject_C::ActivateResurrectStation(class AActor* ActivatingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.ActivateResurrectStation");

	AResurrectTravelStationObject_C_ActivateResurrectStation_Params params;
	params.ActivatingActor = ActivatingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResurrectTravelStationObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.UserConstructionScript");

	AResurrectTravelStationObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_5_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherStation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResurrectTravelStationObject_C::BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_5_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject(class AActor* OtherStation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_5_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject");

	AResurrectTravelStationObject_C_BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_5_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject_Params params;
	params.OtherStation = OtherStation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.FX_Open
// (BlueprintCallable, BlueprintEvent)

void AResurrectTravelStationObject_C::FX_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.FX_Open");

	AResurrectTravelStationObject_C_FX_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.FX_Close
// (BlueprintCallable, BlueprintEvent)

void AResurrectTravelStationObject_C::FX_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.FX_Close");

	AResurrectTravelStationObject_C_FX_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.TraveledTo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResurrectTravelStationObject_C::TraveledTo(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.TraveledTo");

	AResurrectTravelStationObject_C_TraveledTo_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_4_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherStation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResurrectTravelStationObject_C::BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_4_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject(class AActor* OtherStation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_4_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject");

	AResurrectTravelStationObject_C_BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_4_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject_Params params;
	params.OtherStation = OtherStation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AResurrectTravelStationObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.ReceiveBeginPlay");

	AResurrectTravelStationObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.OnDisabling
// (Event, Protected, BlueprintEvent)

void AResurrectTravelStationObject_C::OnDisabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.OnDisabling");

	AResurrectTravelStationObject_C_OnDisabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.OnEnabling
// (Event, Protected, BlueprintEvent)

void AResurrectTravelStationObject_C::OnEnabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.OnEnabling");

	AResurrectTravelStationObject_C_OnEnabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_0_TravelStationCharacterResurrected__DelegateSignature_ResurrectTravelStationObject
// (BlueprintEvent)
// Parameters:
// class APawn*                   ResurrectedCharacter           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResurrectTravelStationObject_C::BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_0_TravelStationCharacterResurrected__DelegateSignature_ResurrectTravelStationObject(class APawn* ResurrectedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_0_TravelStationCharacterResurrected__DelegateSignature_ResurrectTravelStationObject");

	AResurrectTravelStationObject_C_BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_0_TravelStationCharacterResurrected__DelegateSignature_ResurrectTravelStationObject_Params params;
	params.ResurrectedCharacter = ResurrectedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void AResurrectTravelStationObject_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.OnEnabled");

	AResurrectTravelStationObject_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void AResurrectTravelStationObject_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.OnDisabled");

	AResurrectTravelStationObject_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.ExecuteUbergraph_ResurrectTravelStationObject
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResurrectTravelStationObject_C::ExecuteUbergraph_ResurrectTravelStationObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.ExecuteUbergraph_ResurrectTravelStationObject");

	AResurrectTravelStationObject_C_ExecuteUbergraph_ResurrectTravelStationObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.PlayerSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*    Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResurrectTravelStationObject_C::PlayerSpawned__DelegateSignature(class AOakCharacter_Player* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResurrectTravelStationObject.ResurrectTravelStationObject_C.PlayerSpawned__DelegateSignature");

	AResurrectTravelStationObject_C_PlayerSpawned__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
