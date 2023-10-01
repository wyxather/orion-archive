// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LevelTravelStationObject_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LevelTravelStationObject.LevelTravelStationObject_C.IsInAnOverlappingVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*    PlayerChar                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayerIsInOverlappingVehicle   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALevelTravelStationObject_C::IsInAnOverlappingVehicle(class AOakCharacter_Player* PlayerChar, bool* PlayerIsInOverlappingVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationObject.LevelTravelStationObject_C.IsInAnOverlappingVehicle");

	ALevelTravelStationObject_C_IsInAnOverlappingVehicle_Params params;
	params.PlayerChar = PlayerChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerIsInOverlappingVehicle != nullptr)
		*PlayerIsInOverlappingVehicle = params.PlayerIsInOverlappingVehicle;
}


// Function LevelTravelStationObject.LevelTravelStationObject_C.SetLevelNameTextRender
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTravelStationData*      TravelData                     (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ALevelTravelStationObject_C::SetLevelNameTextRender(class UTravelStationData** TravelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationObject.LevelTravelStationObject_C.SetLevelNameTextRender");

	ALevelTravelStationObject_C_SetLevelNameTextRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TravelData != nullptr)
		*TravelData = params.TravelData;
}


// Function LevelTravelStationObject.LevelTravelStationObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALevelTravelStationObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationObject.LevelTravelStationObject_C.UserConstructionScript");

	ALevelTravelStationObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelTravelStationObject.LevelTravelStationObject_C.BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_LevelTravelStationObject
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALevelTravelStationObject_C::BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_LevelTravelStationObject(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationObject.LevelTravelStationObject_C.BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_LevelTravelStationObject");

	ALevelTravelStationObject_C_BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_LevelTravelStationObject_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelTravelStationObject.LevelTravelStationObject_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_LevelTravelStationObject
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALevelTravelStationObject_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_LevelTravelStationObject(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationObject.LevelTravelStationObject_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_LevelTravelStationObject");

	ALevelTravelStationObject_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_LevelTravelStationObject_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelTravelStationObject.LevelTravelStationObject_C.BndEvt__InteractPromptFX_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_LevelTravelStationObject
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevelTravelStationObject_C::BndEvt__InteractPromptFX_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_LevelTravelStationObject(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationObject.LevelTravelStationObject_C.BndEvt__InteractPromptFX_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_LevelTravelStationObject");

	ALevelTravelStationObject_C_BndEvt__InteractPromptFX_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_LevelTravelStationObject_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelTravelStationObject.LevelTravelStationObject_C.BndEvt__LevelTravelStation_K2Node_ComponentBoundEvent_0_LevelTravelOnDestinationForTextRenderChanged__DelegateSignature_LevelTravelStationObject
// (BlueprintEvent)
// Parameters:
// class ULevelTravelStationData* Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevelTravelStationObject_C::BndEvt__LevelTravelStation_K2Node_ComponentBoundEvent_0_LevelTravelOnDestinationForTextRenderChanged__DelegateSignature_LevelTravelStationObject(class ULevelTravelStationData* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationObject.LevelTravelStationObject_C.BndEvt__LevelTravelStation_K2Node_ComponentBoundEvent_0_LevelTravelOnDestinationForTextRenderChanged__DelegateSignature_LevelTravelStationObject");

	ALevelTravelStationObject_C_BndEvt__LevelTravelStation_K2Node_ComponentBoundEvent_0_LevelTravelOnDestinationForTextRenderChanged__DelegateSignature_LevelTravelStationObject_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelTravelStationObject.LevelTravelStationObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALevelTravelStationObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationObject.LevelTravelStationObject_C.ReceiveBeginPlay");

	ALevelTravelStationObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelTravelStationObject.LevelTravelStationObject_C.__UserState_LevelTravel_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevelTravelStationObject_C::__UserState_LevelTravel_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationObject.LevelTravelStationObject_C.__UserState_LevelTravel_1");

	ALevelTravelStationObject_C___UserState_LevelTravel_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelTravelStationObject.LevelTravelStationObject_C.__UserState_LevelTravel_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevelTravelStationObject_C::__UserState_LevelTravel_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationObject.LevelTravelStationObject_C.__UserState_LevelTravel_2");

	ALevelTravelStationObject_C___UserState_LevelTravel_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelTravelStationObject.LevelTravelStationObject_C.SetLevelTravelVisibilityState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_LevelTravelStationObject> VisiblilityState               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevelTravelStationObject_C::SetLevelTravelVisibilityState(TEnumAsByte<Enum_LevelTravelStationObject> VisiblilityState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationObject.LevelTravelStationObject_C.SetLevelTravelVisibilityState");

	ALevelTravelStationObject_C_SetLevelTravelVisibilityState_Params params;
	params.VisiblilityState = VisiblilityState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelTravelStationObject.LevelTravelStationObject_C.ExecuteUbergraph_LevelTravelStationObject
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevelTravelStationObject_C::ExecuteUbergraph_LevelTravelStationObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationObject.LevelTravelStationObject_C.ExecuteUbergraph_LevelTravelStationObject");

	ALevelTravelStationObject_C_ExecuteUbergraph_LevelTravelStationObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
