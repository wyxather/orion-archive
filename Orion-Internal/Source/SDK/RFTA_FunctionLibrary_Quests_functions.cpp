// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_FunctionLibrary_Quests_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.IsPlayerAliveCheck
// 00007FF6F8B35350
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState**           PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Alive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFunctionLibrary_Quests_C::STATIC_IsPlayerAliveCheck(class APlayerState** PlayerState, class UObject** __WorldContext, bool* Alive)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.IsPlayerAliveCheck");

	UFunctionLibrary_Quests_C_IsPlayerAliveCheck_Params params;
	params.PlayerState = PlayerState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alive != nullptr)
		*Alive = params.Alive;
}


// Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Player has Quest Item
// 00007FF6F8B35350
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                World_Context_Object           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFunctionLibrary_Quests_C::STATIC_Player_has_Quest_Item(class UClass** Item, class UObject** World_Context_Object, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Player has Quest Item");

	UFunctionLibrary_Quests_C_Player_has_Quest_Item_Params params;
	params.Item = Item;
	params.World_Context_Object = World_Context_Object;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Objective Not Active or Complete
// 00007FF6F8B35350
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UQuestObjective**        Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFunctionLibrary_Quests_C::STATIC_Objective_Not_Active_or_Complete(class UQuestObjective** Objective, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Objective Not Active or Complete");

	UFunctionLibrary_Quests_C_Objective_Not_Active_or_Complete_Params params;
	params.Objective = Objective;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Remove Mini Map Waypoint Component
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Remove                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuestEntity**           Quest_Entity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Quests_C::STATIC_Remove_Mini_Map_Waypoint_Component(bool* Remove, class UQuestEntity** Quest_Entity, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Remove Mini Map Waypoint Component");

	UFunctionLibrary_Quests_C_Remove_Mini_Map_Waypoint_Component_Params params;
	params.Remove = Remove;
	params.Quest_Entity = Quest_Entity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Put NPC on a Path
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Path_Point_Tag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URemnantQuestEntity**    Quest_Entity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Quests_C::STATIC_Put_NPC_on_a_Path(struct FName* Path_Point_Tag, class URemnantQuestEntity** Quest_Entity, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Put NPC on a Path");

	UFunctionLibrary_Quests_C_Put_NPC_on_a_Path_Params params;
	params.Path_Point_Tag = Path_Point_Tag;
	params.Quest_Entity = Quest_Entity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.If Quest is Active, Execute Event
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  Quest_Name_ID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Quests_C::STATIC_If_Quest_is_Active__Execute_Event(class UObject** WorldContextObject, struct FName* Quest_Name_ID, struct FName* Event_Name, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.If Quest is Active, Execute Event");

	UFunctionLibrary_Quests_C_If_Quest_is_Active__Execute_Event_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Quest_Name_ID = Quest_Name_ID;
	params.Event_Name = Event_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Set Quest Entity State
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantQuestEntity**    Quest_Entity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Quests_C::STATIC_Set_Quest_Entity_State(class URemnantQuestEntity** Quest_Entity, struct FName* State, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Set Quest Entity State");

	UFunctionLibrary_Quests_C_Set_Quest_Entity_State_Params params;
	params.Quest_Entity = Quest_Entity;
	params.State = State;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Is Quest Active, by Name ID
// 00007FF6F8B35350
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  Quest_Name_ID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                World_Context                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFunctionLibrary_Quests_C::STATIC_Is_Quest_Active__by_Name_ID(struct FName* Quest_Name_ID, class UObject** World_Context, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Is Quest Active, by Name ID");

	UFunctionLibrary_Quests_C_Is_Quest_Active__by_Name_ID_Params params;
	params.Quest_Name_ID = Quest_Name_ID;
	params.World_Context = World_Context;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Set Entity Invulnerable
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Invulnerable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URemnantQuestEntity**    Quest_Entity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Quests_C::STATIC_Set_Entity_Invulnerable(bool* Invulnerable, class URemnantQuestEntity** Quest_Entity, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Set Entity Invulnerable");

	UFunctionLibrary_Quests_C_Set_Entity_Invulnerable_Params params;
	params.Invulnerable = Invulnerable;
	params.Quest_Entity = Quest_Entity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Trigger ShowDialog
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantCharacter**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URemnantQuestEntity**    Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunctionLibrary_Quests_C::STATIC_Trigger_ShowDialog(class ARemnantCharacter** Player, class URemnantQuestEntity** Speaker, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Quests.FunctionLibrary_Quests_C.Trigger ShowDialog");

	UFunctionLibrary_Quests_C_Trigger_ShowDialog_Params params;
	params.Player = Player;
	params.Speaker = Speaker;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
