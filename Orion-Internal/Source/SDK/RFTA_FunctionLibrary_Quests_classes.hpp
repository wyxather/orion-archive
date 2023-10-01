#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_FunctionLibrary_Quests_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FunctionLibrary_Quests.FunctionLibrary_Quests_C
// 0x0000 (0x0028 - 0x0028)
class UFunctionLibrary_Quests_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FunctionLibrary_Quests.FunctionLibrary_Quests_C");
		return ptr;
	}


	void STATIC_IsPlayerAliveCheck(class APlayerState** PlayerState, class UObject** __WorldContext, bool* Alive);
	bool STATIC_Player_has_Quest_Item(class UClass** Item, class UObject** World_Context_Object, class UObject** __WorldContext);
	bool STATIC_Objective_Not_Active_or_Complete(class UQuestObjective** Objective, class UObject** __WorldContext);
	void STATIC_Remove_Mini_Map_Waypoint_Component(bool* Remove, class UQuestEntity** Quest_Entity, class UObject** __WorldContext);
	void STATIC_Put_NPC_on_a_Path(struct FName* Path_Point_Tag, class URemnantQuestEntity** Quest_Entity, class UObject** __WorldContext);
	void STATIC_If_Quest_is_Active__Execute_Event(class UObject** WorldContextObject, struct FName* Quest_Name_ID, struct FName* Event_Name, class UObject** __WorldContext);
	void STATIC_Set_Quest_Entity_State(class URemnantQuestEntity** Quest_Entity, struct FName* State, class UObject** __WorldContext);
	bool STATIC_Is_Quest_Active__by_Name_ID(struct FName* Quest_Name_ID, class UObject** World_Context, class UObject** __WorldContext);
	void STATIC_Set_Entity_Invulnerable(bool* Invulnerable, class URemnantQuestEntity** Quest_Entity, class UObject** __WorldContext);
	void STATIC_Trigger_ShowDialog(class ARemnantCharacter** Player, class URemnantQuestEntity** Speaker, class UObject** __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
