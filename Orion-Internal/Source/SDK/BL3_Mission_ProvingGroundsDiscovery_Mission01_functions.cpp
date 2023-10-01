// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_ProvingGroundsDiscovery_Mission01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Set_Navigate_NewPlanet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_ProvingGroundsDiscovery_Mission01_C::Set_Navigate_NewPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Set_Navigate_NewPlanet");

	UMission_ProvingGroundsDiscovery_Mission01_C_Set_Navigate_NewPlanet_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Advance_Navigate_NewPlanet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_ProvingGroundsDiscovery_Mission01_C::Advance_Navigate_NewPlanet(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Advance_Navigate_NewPlanet");

	UMission_ProvingGroundsDiscovery_Mission01_C_Advance_Navigate_NewPlanet_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Obj_Navigate_NewPlanet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_ProvingGroundsDiscovery_Mission01_C::Obj_Navigate_NewPlanet(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Obj_Navigate_NewPlanet");

	UMission_ProvingGroundsDiscovery_Mission01_C_Obj_Navigate_NewPlanet_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Obj_ReNavigate_NewPlanet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_ProvingGroundsDiscovery_Mission01_C::Obj_ReNavigate_NewPlanet(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Obj_ReNavigate_NewPlanet");

	UMission_ProvingGroundsDiscovery_Mission01_C_Obj_ReNavigate_NewPlanet_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Update_Navigate_NewPlanet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_ProvingGroundsDiscovery_Mission01_C::Update_Navigate_NewPlanet(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Update_Navigate_NewPlanet");

	UMission_ProvingGroundsDiscovery_Mission01_C_Update_Navigate_NewPlanet_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.AdvanceTo_ArriveAtMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_ProvingGroundsDiscovery_Mission01_C::AdvanceTo_ArriveAtMap(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.AdvanceTo_ArriveAtMap");

	UMission_ProvingGroundsDiscovery_Mission01_C_AdvanceTo_ArriveAtMap_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Obj_UseDropPod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_ProvingGroundsDiscovery_Mission01_C::Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Obj_UseDropPod");

	UMission_ProvingGroundsDiscovery_Mission01_C_Obj_UseDropPod_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.SET_UseDropPod_OnSanctuary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_ProvingGroundsDiscovery_Mission01_C::SET_UseDropPod_OnSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.SET_UseDropPod_OnSanctuary");

	UMission_ProvingGroundsDiscovery_Mission01_C_SET_UseDropPod_OnSanctuary_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Set_ArriveAtMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_ProvingGroundsDiscovery_Mission01_C::Set_ArriveAtMap(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Set_ArriveAtMap");

	UMission_ProvingGroundsDiscovery_Mission01_C_Set_ArriveAtMap_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.[OBJ_UseDropPod_Objective] PROXY
// (BlueprintCallable, BlueprintEvent)

void UMission_ProvingGroundsDiscovery_Mission01_C::_OBJ_UseDropPod_Objective__PROXY()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.[OBJ_UseDropPod_Objective] PROXY");

	UMission_ProvingGroundsDiscovery_Mission01_C__OBJ_UseDropPod_Objective__PROXY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_ProvingGroundsDiscovery_Mission01_C::ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission01");

	UMission_ProvingGroundsDiscovery_Mission01_C_ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
