// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BpChar_Claptrap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BpChar_Claptrap.BPChar_Claptrap_C.OnRep_AntennaChoiceIndex
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Claptrap_C::OnRep_AntennaChoiceIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.OnRep_AntennaChoiceIndex");

	ABPChar_Claptrap_C_OnRep_AntennaChoiceIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BpChar_Claptrap.BPChar_Claptrap_C.OnRep_ClapNoAntennaActive
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Claptrap_C::OnRep_ClapNoAntennaActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.OnRep_ClapNoAntennaActive");

	ABPChar_Claptrap_C_OnRep_ClapNoAntennaActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BpChar_Claptrap.BPChar_Claptrap_C.ClaptrapComments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AntennaChoice                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Claptrap_C::ClaptrapComments(int AntennaChoice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.ClaptrapComments");

	ABPChar_Claptrap_C_ClaptrapComments_Params params;
	params.AntennaChoice = AntennaChoice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BpChar_Claptrap.BPChar_Claptrap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Claptrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.UserConstructionScript");

	ABPChar_Claptrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BpChar_Claptrap.BPChar_Claptrap_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Claptrap
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Claptrap_C::BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Claptrap(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Claptrap");

	ABPChar_Claptrap_C_BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Claptrap_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BpChar_Claptrap.BPChar_Claptrap_C.CE_TimerToSwitchAntenna
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Claptrap_C::CE_TimerToSwitchAntenna()
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.CE_TimerToSwitchAntenna");

	ABPChar_Claptrap_C_CE_TimerToSwitchAntenna_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BpChar_Claptrap.BPChar_Claptrap_C.ForceClaptrapDownstate
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Claptrap_C::ForceClaptrapDownstate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.ForceClaptrapDownstate");

	ABPChar_Claptrap_C_ForceClaptrapDownstate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BpChar_Claptrap.BPChar_Claptrap_C.DisableClaptrapAntenna
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Claptrap_C::DisableClaptrapAntenna()
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.DisableClaptrapAntenna");

	ABPChar_Claptrap_C_DisableClaptrapAntenna_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BpChar_Claptrap.BPChar_Claptrap_C.EnableClaptrapAntenna
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Claptrap_C::EnableClaptrapAntenna()
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.EnableClaptrapAntenna");

	ABPChar_Claptrap_C_EnableClaptrapAntenna_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BpChar_Claptrap.BPChar_Claptrap_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700
// (BlueprintEvent)
// Parameters:
// class AController**            UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Claptrap_C::BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700(class AController** UserController, class UPrimitiveComponent** UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700");

	ABPChar_Claptrap_C_BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BpChar_Claptrap.BPChar_Claptrap_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Claptrap
// (BlueprintEvent)

void ABPChar_Claptrap_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Claptrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Claptrap");

	ABPChar_Claptrap_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Claptrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BpChar_Claptrap.BPChar_Claptrap_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Claptrap
// (BlueprintEvent)

void ABPChar_Claptrap_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Claptrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Claptrap");

	ABPChar_Claptrap_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Claptrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BpChar_Claptrap.BPChar_Claptrap_C.ExecuteUbergraph_BPChar_Claptrap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Claptrap_C::ExecuteUbergraph_BPChar_Claptrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BpChar_Claptrap.BPChar_Claptrap_C.ExecuteUbergraph_BPChar_Claptrap");

	ABPChar_Claptrap_C_ExecuteUbergraph_BPChar_Claptrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
