#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Quest_Ward13_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Quest_Ward13.Quest_Ward13_C.IsFullGameAvailable
struct AQuest_Ward13_C_IsFullGameAvailable_Params
{
	bool                                               FullGameAvailable;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Quest_Ward13.Quest_Ward13_C.ResetAce
struct AQuest_Ward13_C_ResetAce_Params
{
	class AActor**                                     Ace;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.Stop Action_PlayerInPlayerBase
struct AQuest_Ward13_C_Stop_Action_PlayerInPlayerBase_Params
{
	bool*                                              Stop_Action;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AController**                                Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.Invoke Reset on Quest Entity
struct AQuest_Ward13_C_Invoke_Reset_on_Quest_Entity_Params
{
	class URemnantQuestEntity**                        Entity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.AddItemsToReggie
struct AQuest_Ward13_C_AddItemsToReggie_Params
{
	class ARemnantPlayerController**                   Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.CheckAddItem
struct AQuest_Ward13_C_CheckAddItem_Params
{
	class ARemnantPlayerController**                   Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.Set PowerSource B3 Enabled
struct AQuest_Ward13_C_Set_PowerSource_B3_Enabled_Params
{
};

// Function Quest_Ward13.Quest_Ward13_C.HagFree
struct AQuest_Ward13_C_HagFree_Params
{
};

// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Zone_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature
struct AQuest_Ward13_C_BndEvt__Zone_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature_Params
{
};

// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature
struct AQuest_Ward13_C_BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.BndEvt__PowerSource_Default_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature
struct AQuest_Ward13_C_BndEvt__PowerSource_Default_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.BndEvt__PowerSource_B3_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature
struct AQuest_Ward13_C_BndEvt__PowerSource_B3_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Fusebox_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature
struct AQuest_Ward13_C_BndEvt__Fusebox_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.KnowsRootMotherIdentity
struct AQuest_Ward13_C_KnowsRootMotherIdentity_Params
{
};

// Function Quest_Ward13.Quest_Ward13_C.OnTalkedToRootMother
struct AQuest_Ward13_C_OnTalkedToRootMother_Params
{
};

// Function Quest_Ward13.Quest_Ward13_C.RootMotherSpokeToFounder
struct AQuest_Ward13_C_RootMotherSpokeToFounder_Params
{
};

// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Zone_K2Node_ComponentBoundEvent_4_QuestZonePlayerDelegate__DelegateSignature
struct AQuest_Ward13_C_BndEvt__Zone_K2Node_ComponentBoundEvent_4_QuestZonePlayerDelegate__DelegateSignature_Params
{
	class ARemnantPlayerController**                   Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Reggie_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature
struct AQuest_Ward13_C_BndEvt__Reggie_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.OnResetMirror
struct AQuest_Ward13_C_OnResetMirror_Params
{
};

// Function Quest_Ward13.Quest_Ward13_C.FuseFailsafe
struct AQuest_Ward13_C_FuseFailsafe_Params
{
};

// Function Quest_Ward13.Quest_Ward13_C.StoryFinished
struct AQuest_Ward13_C_StoryFinished_Params
{
};

// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Ward13_Mirror_K2Node_ComponentBoundEvent_7_QuestActorDelegate__DelegateSignature
struct AQuest_Ward13_C_BndEvt__Ward13_Mirror_K2Node_ComponentBoundEvent_7_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Ward13_Terminal_K2Node_ComponentBoundEvent_8_QuestActorDelegate__DelegateSignature
struct AQuest_Ward13_C_BndEvt__Ward13_Terminal_K2Node_ComponentBoundEvent_8_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Ward13_Keybox_K2Node_ComponentBoundEvent_9_QuestActorDelegate__DelegateSignature
struct AQuest_Ward13_C_BndEvt__Ward13_Keybox_K2Node_ComponentBoundEvent_9_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Ace_K2Node_ComponentBoundEvent_10_QuestActorDelegate__DelegateSignature
struct AQuest_Ward13_C_BndEvt__Ace_K2Node_ComponentBoundEvent_10_QuestActorDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.BndEvt__Zone_K2Node_ComponentBoundEvent_12_QuestZonePlayerDelegate__DelegateSignature
struct AQuest_Ward13_C_BndEvt__Zone_K2Node_ComponentBoundEvent_12_QuestZonePlayerDelegate__DelegateSignature_Params
{
	class ARemnantPlayerController**                   Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Quest_Ward13.Quest_Ward13_C.NotifyFullGameNotLoaded
struct AQuest_Ward13_C_NotifyFullGameNotLoaded_Params
{
};

// Function Quest_Ward13.Quest_Ward13_C.ExecuteUbergraph_Quest_Ward13
struct AQuest_Ward13_C_ExecuteUbergraph_Quest_Ward13_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
