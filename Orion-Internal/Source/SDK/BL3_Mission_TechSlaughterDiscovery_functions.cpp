// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_TechSlaughterDiscovery_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_GoToSanctuary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::Set_GoToSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_GoToSanctuary");

	UMission_TechSlaughterDiscovery_C_Set_GoToSanctuary_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.OBJ_GoToSanctuary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::OBJ_GoToSanctuary(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.OBJ_GoToSanctuary");

	UMission_TechSlaughterDiscovery_C_OBJ_GoToSanctuary_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_TechSlaughterTitleCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::Set_TechSlaughterTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_TechSlaughterTitleCard");

	UMission_TechSlaughterDiscovery_C_Set_TechSlaughterTitleCard_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_PlanetTitleCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::Obj_PlanetTitleCard(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_PlanetTitleCard");

	UMission_TechSlaughterDiscovery_C_Obj_PlanetTitleCard_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.SET_UseDropPod_OnSanctuary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::SET_UseDropPod_OnSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.SET_UseDropPod_OnSanctuary");

	UMission_TechSlaughterDiscovery_C_SET_UseDropPod_OnSanctuary_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_UseDropPod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_UseDropPod");

	UMission_TechSlaughterDiscovery_C_Obj_UseDropPod_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.OBJ_ReNavigate_TechSlaughter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::OBJ_ReNavigate_TechSlaughter(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.OBJ_ReNavigate_TechSlaughter");

	UMission_TechSlaughterDiscovery_C_OBJ_ReNavigate_TechSlaughter_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Update_ReNavigate_TechSlaughter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::Update_ReNavigate_TechSlaughter(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Update_ReNavigate_TechSlaughter");

	UMission_TechSlaughterDiscovery_C_Update_ReNavigate_TechSlaughter_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_Navigate_TechSlaughter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::Set_Navigate_TechSlaughter(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_Navigate_TechSlaughter");

	UMission_TechSlaughterDiscovery_C_Set_Navigate_TechSlaughter_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_Navigate_TechSlaughter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::Obj_Navigate_TechSlaughter(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_Navigate_TechSlaughter");

	UMission_TechSlaughterDiscovery_C_Obj_Navigate_TechSlaughter_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.UPDATE_Navigate_TechSlaughter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::UPDATE_Navigate_TechSlaughter(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.UPDATE_Navigate_TechSlaughter");

	UMission_TechSlaughterDiscovery_C_UPDATE_Navigate_TechSlaughter_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.ADVANCE_Navigate_TechSlaughter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::ADVANCE_Navigate_TechSlaughter(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.ADVANCE_Navigate_TechSlaughter");

	UMission_TechSlaughterDiscovery_C_ADVANCE_Navigate_TechSlaughter_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.AdvanceTo_PlanetTitleCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::AdvanceTo_PlanetTitleCard(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.AdvanceTo_PlanetTitleCard");

	UMission_TechSlaughterDiscovery_C_AdvanceTo_PlanetTitleCard_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_UseDropPod_OnPlanet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::Set_UseDropPod_OnPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_UseDropPod_OnPlanet");

	UMission_TechSlaughterDiscovery_C_Set_UseDropPod_OnPlanet_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.[OBJ_UseDropPod_Objective] PROXY
// (BlueprintCallable, BlueprintEvent)

void UMission_TechSlaughterDiscovery_C::_OBJ_UseDropPod_Objective__PROXY()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.[OBJ_UseDropPod_Objective] PROXY");

	UMission_TechSlaughterDiscovery_C__OBJ_UseDropPod_Objective__PROXY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_TalkToNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::Set_TalkToNPC(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_TalkToNPC");

	UMission_TechSlaughterDiscovery_C_Set_TalkToNPC_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_TalkToNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::Obj_TalkToNPC(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_TalkToNPC");

	UMission_TechSlaughterDiscovery_C_Obj_TalkToNPC_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Update_TalkToNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::Update_TalkToNPC(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Update_TalkToNPC");

	UMission_TechSlaughterDiscovery_C_Update_TalkToNPC_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Update_GoToSanctuary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::Update_GoToSanctuary(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Update_GoToSanctuary");

	UMission_TechSlaughterDiscovery_C_Update_GoToSanctuary_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.ExecuteUbergraph_Mission_TechSlaughterDiscovery
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_TechSlaughterDiscovery_C::ExecuteUbergraph_Mission_TechSlaughterDiscovery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.ExecuteUbergraph_Mission_TechSlaughterDiscovery");

	UMission_TechSlaughterDiscovery_C_ExecuteUbergraph_Mission_TechSlaughterDiscovery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
