#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Quest_Ward13_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Quest_Ward13.Quest_Ward13_C
// 0x00F1 (0x0639 - 0x0548)
class AQuest_Ward13_C : public AQuest_RootQuest_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URemnantQuestEntity*                         Whispers;                                                 // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Submachinegun;                                            // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ward13_Keybox;                                            // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ward13_Terminal;                                          // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ward13_Mirror;                                            // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Fusebox;                                                  // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         PowerSource_B3;                                           // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       Waypoint_StartBed;                                        // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         PowerSource_Default;                                      // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Townsperson_Williams;                                     // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Townsperson_Helen;                                        // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Townsperson_Noah;                                         // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Townsperson_Ella;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Townsperson_Jack;                                         // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Townsperson_Ruth;                                         // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       SpawnPoint_FromIntro;                                     // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Hag;                                                      // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ace;                                                      // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Reggie;                                                   // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Rigs;                                                     // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ward;                                                     // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ford;                                                     // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Wallace;                                                  // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ava;                                                      // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       Waypoint_Town;                                            // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTile*                           Town;                                                     // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZone*                           Zone;                                                     // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnHag;                                                 // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0629(0x0003) MISSED OFFSET
	int                                                B3_Setup_Integer;                                         // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARemnantPlayerController*                    CachedLocalPlayer;                                        // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Finished_Game;                                            // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Ward13.Quest_Ward13_C");
		return ptr;
	}


	void IsFullGameAvailable(bool* FullGameAvailable);
	void ResetAce(class AActor** Ace);
	void Stop_Action_PlayerInPlayerBase(bool* Stop_Action, class AController** Controller);
	void Invoke_Reset_on_Quest_Entity(class URemnantQuestEntity** Entity);
	void AddItemsToReggie(class ARemnantPlayerController** Player);
	void CheckAddItem(class ARemnantPlayerController** Player, class UClass** ItemBP);
	void Set_PowerSource_B3_Enabled();
	void HagFree();
	void BndEvt__Zone_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void BndEvt__PowerSource_Default_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void BndEvt__PowerSource_B3_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void BndEvt__Fusebox_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void KnowsRootMotherIdentity();
	void OnTalkedToRootMother();
	void RootMotherSpokeToFounder();
	void BndEvt__Zone_K2Node_ComponentBoundEvent_4_QuestZonePlayerDelegate__DelegateSignature(class ARemnantPlayerController** Controller);
	void BndEvt__Reggie_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void OnResetMirror();
	void FuseFailsafe();
	void StoryFinished();
	void BndEvt__Ward13_Mirror_K2Node_ComponentBoundEvent_7_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void BndEvt__Ward13_Terminal_K2Node_ComponentBoundEvent_8_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void BndEvt__Ward13_Keybox_K2Node_ComponentBoundEvent_9_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void BndEvt__Ace_K2Node_ComponentBoundEvent_10_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void BndEvt__Zone_K2Node_ComponentBoundEvent_12_QuestZonePlayerDelegate__DelegateSignature(class ARemnantPlayerController** Controller);
	void NotifyFullGameNotLoaded();
	void ExecuteUbergraph_Quest_Ward13(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
