// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FastTravelStationObject_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FastTravelStationObject.FastTravelStationObject_C.SetLevelNameText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTravelStationData*      Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFastTravelStationObject_C::SetLevelNameText(class UTravelStationData* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelStationObject.FastTravelStationObject_C.SetLevelNameText");

	AFastTravelStationObject_C_SetLevelNameText_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelStationObject.FastTravelStationObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFastTravelStationObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelStationObject.FastTravelStationObject_C.UserConstructionScript");

	AFastTravelStationObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelStationObject.FastTravelStationObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFastTravelStationObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelStationObject.FastTravelStationObject_C.ReceiveBeginPlay");

	AFastTravelStationObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelStationObject.FastTravelStationObject_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_FastTravelStationObject
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AFastTravelStationObject_C::BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_FastTravelStationObject(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelStationObject.FastTravelStationObject_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_FastTravelStationObject");

	AFastTravelStationObject_C_BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_FastTravelStationObject_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelStationObject.FastTravelStationObject_C.BndEvt__ActivationArea_K2Node_ComponentBoundEvent_0_AreaPlayerEvent__DelegateSignature_FastTravelStationObject
// (BlueprintEvent)
// Parameters:
// class AGbxPlayerController*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFastTravelStationObject_C::BndEvt__ActivationArea_K2Node_ComponentBoundEvent_0_AreaPlayerEvent__DelegateSignature_FastTravelStationObject(class AGbxPlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelStationObject.FastTravelStationObject_C.BndEvt__ActivationArea_K2Node_ComponentBoundEvent_0_AreaPlayerEvent__DelegateSignature_FastTravelStationObject");

	AFastTravelStationObject_C_BndEvt__ActivationArea_K2Node_ComponentBoundEvent_0_AreaPlayerEvent__DelegateSignature_FastTravelStationObject_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelStationObject.FastTravelStationObject_C.BndEvt__ActivationArea_K2Node_ComponentBoundEvent_2_AreaPlayerEvent__DelegateSignature_FastTravelStationObject
// (BlueprintEvent)
// Parameters:
// class AGbxPlayerController*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFastTravelStationObject_C::BndEvt__ActivationArea_K2Node_ComponentBoundEvent_2_AreaPlayerEvent__DelegateSignature_FastTravelStationObject(class AGbxPlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelStationObject.FastTravelStationObject_C.BndEvt__ActivationArea_K2Node_ComponentBoundEvent_2_AreaPlayerEvent__DelegateSignature_FastTravelStationObject");

	AFastTravelStationObject_C_BndEvt__ActivationArea_K2Node_ComponentBoundEvent_2_AreaPlayerEvent__DelegateSignature_FastTravelStationObject_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelStationObject.FastTravelStationObject_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void AFastTravelStationObject_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelStationObject.FastTravelStationObject_C.OnEnabled");

	AFastTravelStationObject_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelStationObject.FastTravelStationObject_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void AFastTravelStationObject_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelStationObject.FastTravelStationObject_C.OnDisabled");

	AFastTravelStationObject_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelStationObject.FastTravelStationObject_C.OnDisabling
// (Event, Protected, BlueprintEvent)

void AFastTravelStationObject_C::OnDisabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelStationObject.FastTravelStationObject_C.OnDisabling");

	AFastTravelStationObject_C_OnDisabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelStationObject.FastTravelStationObject_C.ExecuteUbergraph_FastTravelStationObject
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFastTravelStationObject_C::ExecuteUbergraph_FastTravelStationObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelStationObject.FastTravelStationObject_C.ExecuteUbergraph_FastTravelStationObject");

	AFastTravelStationObject_C_ExecuteUbergraph_FastTravelStationObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
