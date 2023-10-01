#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Quest_Intro_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Quest_Intro.Quest_Intro_C
// 0x04AA (0x09F2 - 0x0548)
class AQuest_Intro_C : public AQuest_RootQuest_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URemnantQuestEntity*                         AcePOI;                                                   // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         ReggiePOI;                                                // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         WardPOI;                                                  // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         AvaPOI;                                                   // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         RigsPOI;                                                  // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         FordPlanningPOI;                                          // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         PlayerArmor;                                              // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         KeyBox;                                                   // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         RootHordeLoop;                                            // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         PlayerWakeUpBed;                                          // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_HowToConsumable;                                  // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZone*                           Zone_Ward13;                                              // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZone*                           Zone_Intro;                                               // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZone*                           Zone_Prologue;                                            // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         DragonCrystal;                                            // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         DATLA;                                                    // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        WallyStop2;                                               // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        WallyStop1;                                               // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       Prologue_SpawnPoint;                                      // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Boat;                                                     // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTile*                           Tile_Prologue;                                            // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             SeeAva;                                                   // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Mark;                                                     // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Pickup_HealItem;                                          // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         ReactorTerminal;                                          // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             ReturnFord2;                                              // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             Upgrade;                                                  // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_Reggie;                                           // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ford_Return;                                              // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             SeeRigs;                                                  // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_OutsideFordOffice;                                // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_Sword;                                            // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Screamer;                                                 // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Lightning_05;                                             // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         PowerSource_StartUp;                                      // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         PowerSource_Auxillary;                                    // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_Pickups;                                          // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_Ramp;                                             // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_Footsteps;                                        // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Chop;                                                     // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Townsperson_Helen;                                        // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Townsperson_Jack;                                         // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Townsperson_Ruth;                                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Townsperson_Williams;                                     // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Townsperson_Noah;                                         // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Townsperson_Ella;                                         // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             Initialize;                                               // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             Kill;                                                     // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         PowerSource_Default;                                      // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             Terminal;                                                 // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_Intro_Ace;                                        // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Lightning_06;                                             // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Lightning_04;                                             // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Lightning_01;                                             // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestAIDirector*                     Holdout;                                                  // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         AmbientBroken;                                            // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         GroundBroken2;                                            // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         GroundBroken1;                                            // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         WindowBroken3;                                            // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         WindowBroken2;                                            // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         WindowBroken1;                                            // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_Screamer;                                         // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_MoreBroken;                                       // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_FirstBroken;                                      // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_Intro_Ford;                                       // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Trigger_Cutscene;                                         // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        VaultComplete;                                            // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Vault;                                                    // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        CrouchComplete;                                           // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTrigger*                        Crouch;                                                   // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       PlayerCot;                                                // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ace_Reactor;                                              // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             Ace;                                                      // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEventRegion*                    EventRegion;                                              // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ace_Upstairs;                                             // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       Waypoint;                                                 // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       Entrance;                                                 // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       ToBase;                                                   // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ward;                                                     // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Wallace;                                                  // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ava;                                                      // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Rigs;                                                     // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Reggie;                                                   // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestEntity*                         Ford;                                                     // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTile*                           Town;                                                     // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             Defend;                                                   // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             Key;                                                      // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             ReturnFord1;                                              // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             Power;                                                    // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestObjective*                             Talk;                                                     // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestZoneLink*                       Start;                                                    // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantQuestTile*                           Tile_Main;                                                // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_Light_Intensity_5944F0C344A8E6D457491B9666422B89;// 0x0830(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_5944F0C344A8E6D457491B9666422B89;   // 0x0834(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0835(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SavedOutside;                                             // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0841(0x0003) MISSED OFFSET
	float                                              Event_Time;                                               // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SavedByAce;                                               // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               Crouched;                                                 // 0x0849(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Vaulted;                                                  // 0x084A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData02[0x5];                                       // 0x084B(0x0005) MISSED OFFSET
	class AInteractive_DragonCrystal_C*                Dragon_Crystal;                                           // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ford_Trigger_Used;                                        // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Player_Is_Outside;                                        // 0x0859(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData03[0x6];                                       // 0x085A(0x0006) MISSED OFFSET
	TArray<class ABP_SpotLightning_C*>                 Lightning_Lights_01;                                      // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_SpotLightning_C*>                 Lightning_Lights_02;                                      // 0x0870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_SpotLightning_C*>                 Lightning_Lights_03;                                      // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_DirectionalLightning_C*                  Lightning_Main;                                           // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SpotLightning_C*>                 Lightning_Lights_04;                                      // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_Skybox_A_C*                              skybox;                                                   // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AEmitter*>                            lightning_emitters_01;                                    // 0x08B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AEmitter*>                            lightning_emitters_02;                                    // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AEmitter*>                            lightning_emitters_03;                                    // 0x08D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AEmitter*>                            lightning_emitters_04;                                    // 0x08E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AEmitter*>                            lightning_emitters_05;                                    // 0x08F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Met_Ace;                                                  // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0901(0x0007) MISSED OFFSET
	TArray<class ABP_CutsceneLight_01_C*>              CutsceneLights_01;                                        // 0x0908(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_CutsceneLight_01_C*>              CutsceneLights_02;                                        // 0x0918(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               SawCutscene;                                              // 0x0928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0929(0x0007) MISSED OFFSET
	TArray<class AActor*>                              SFX_Init;                                                 // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              SFX_Reactor;                                              // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              SFX_Powerdown;                                            // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      Rescue_Ford;                                              // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Rescue_Rigs;                                              // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              SFX_Lights;                                               // 0x0970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              SFX_Power_Active;                                         // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_SpotLightning_C*>                 Lightning_Lights_05;                                      // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AEmitter*>                            lightning_emitters_06;                                    // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Picked_Up_Item;                                           // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               Played_Footstep_Cue;                                      // 0x09B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Flashlight_Tutorial_Shown;                                // 0x09B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               Melee_Tutorial_Complete;                                  // 0x09B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Player_Died_Outside;                                      // 0x09B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               Met_Reggie;                                               // 0x09B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               Player_WallyStop1;                                        // 0x09B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Player_WallyStop2;                                        // 0x09B7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Upgraded_Weapon;                                          // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               SeenConsumableTip;                                        // 0x09B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               Wally_Escort_Complete;                                    // 0x09BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WaitingOnPrologue;                                        // 0x09BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData06[0x4];                                       // 0x09BC(0x0004) MISSED OFFSET
	class URemnantArchetype*                           Archetype;                                                // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player_WallyStopFinal;                                    // 0x09C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData07[0x7];                                       // 0x09C9(0x0007) MISSED OFFSET
	class AUIActor*                                    Archetype_Selection_Dialog;                               // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FirstTimeLoadingBeach;                                    // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               FirstTimeLoadingBase;                                     // 0x09D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               WaitingOnWally;                                           // 0x09DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               WallySpawned;                                             // 0x09DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WakeUpCalled;                                             // 0x09DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PlayerReadyForWallyIntro;                                 // 0x09DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Ford_Replaced;                                            // 0x09DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData08[0x1];                                       // 0x09DF(0x0001) MISSED OFFSET
	class AInteractive_DragonCrystal_PlayerBase_C*     Dragon_Crystal_Intro;                                     // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Dragon_Crystal_Main;                                      // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Dodged;                                                   // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Ace_Replaced;                                             // 0x09F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Intro.Quest_Intro_C");
		return ptr;
	}


	void SetDeathDialogFlags();
	void ResetManualDialogDeathFlags();
	void CanPlayerBeRescued(bool* CanBeRescued);
	bool Player_is_in_Zone_Intro();
	void Refresh_Health_Bar();
	void Update_Objectives();
	void Turn_Off_Merchant_POIs();
	void Set_POI_Enabled(bool* Enabled, class URemnantQuestEntity** POI);
	void SetPlayerReadyAfterTravel();
	void DetermineBaseState();
	void SetQuestCheckpoint(class URemnantQuestZoneLink** ZoneLink, bool* SaveImmediately);
	void Local_Testing_();
	void Show_Correct_Armor_on_Rigs__Rack();
	void EnablePlayerNoFall(bool* Enabled);
	void Put_Wally_on_his_Path(struct FName* Path_Point_Tag);
	class UStateMachineComponent* Get_Wally_s_State_Machine();
	void Instant_Fade_Out();
	void Wally_No_Longer_Needed();
	void Get_Valid_Ford(class URemnantQuestEntity** Ford);
	void Get_Valid_Ace(class URemnantQuestEntity** Ace);
	void Event_Tree_Trigger(struct FName* Trigger_Name, TEnumAsByte<EQuest_Intro_Speaker_Enum>* Speaker, bool* AllowInterrupt);
	void Zone_Player_to_Next_Part_of_Quest(TEnumAsByte<EQuest_Intro_Zone_Enum>* Destination);
	void Remove_Weapons();
	void Replace_Ford();
	void Player_Wake_Up_in_Base___Interactive_Setup();
	void Remove_Tutorial_Prompts();
	bool WallaceShouldBark();
	void Send_Ace_Upstairs();
	void Update_Power_Sources___End_of_Fight();
	void SFX_Start_Reacter_Idle_Active_Loop();
	void SFX_Start_Lights();
	void SFX_Reactor_Powerdown();
	void SFX_Start_Init();
	void Move_Ace_to_IntroEnd_Interactive_Position(class URemnantQuestEntity** OutputPin);
	void Teleport_NPC(class UQuestEntity** Quest_Entity, class AActor** Destination_Actor);
	void Gather_Reactor_Sounds();
	void SFX_Start_Reactor(bool* Fade_In);
	void Zone_to_Main_Game_Instance();
	void PlayerSawCutscene(bool* SawCutscene);
	void Holdout_Success();
	void Rescue_Player___Ace();
	void Gather_Cutscene_Lights();
	void Update_Reactor_Terminal();
	void Gather_Lights___FX_in_Player_Base();
	void PB___Intro_Lighting();
	void Rescue_Player___Ford();
	void Get_Nearest_Player_Saved_Point(class AActor** Nearest_Safe_Point);
	void Move_Player_to_Safe_Loc();
	void fade(EFadeDirection* Fade_Direction, struct FName* Reason);
	void Deactivate_Player_Spawn_Point(bool* Exterior);
	void Set_Player_State(struct FName* Name_ID, bool* Only_Set_if_Valid);
	class UStateMachineComponent* Get_Local_Player_s_State_Machine_Component();
	void Replace_Ace();
	void PlayerSavedOutside(bool* SavedOutside);
	void Get_Local_Remnant_PlayerController(class ARemnant_PlayerController_C** AsRemnant_Player_Controller);
	void EnablePlayerNoKill(bool* Enabled);
	void On_Before_Player_Killed();
	void PlayerSavedByAce(bool* SavedByAce);
	void Remove_Tutorial_Prompt(struct FName* Tutorial_ID, bool* Remove);
	void Add_Loot_Notification(class UClass** Item, int* Quantity);
	void Deactivate_Power__Lights_(bool* Activation);
	bool Check_Holdout_Completion();
	void Deactivate_Crystal();
	void Get_Player_as_Remnant_Character(class ARemnantCharacter** AsRemnant_Character);
	void Add_Archetype_UI_to_Screen();
	class UInventoryComponent* Get_Local_Player_s_Inventory_Component();
	void Add___Equip_Item(class UClass** Item, bool* Hide_Loot_Notification);
	void Equip_Player_per_Tutorial_Start();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnFailure_778E930B40FF1B87D8703095A2AB5AC6(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_778E930B40FF1B87D8703095A2AB5AC6(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void ActivatePower();
	void ActivateReturn();
	void ActivateKey();
	void ActivateTalk();
	void Complete();
	void ActivateUpgrade();
	void ActivateReturn2();
	void OpenArchetype();
	void BndEvt__Ace_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void BndEvt__Key_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Zone_Ward13_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Zone_Intro_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature();
	void ActivateCrystal();
	void BndEvt__Holdout_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature();
	void BndEvt__Return_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Power_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Defend_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Defend_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Crouch_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void BndEvt__CrouchComplete_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void BndEvt__Vault_K2Node_ComponentBoundEvent_3_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void BndEvt__VaultComplete_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void BndEvt__Cutscene_K2Node_ComponentBoundEvent_5_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void Player_Died();
	void BndEvt__FirstBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void BndEvt__Trigger_MoreBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void BndEvt__Trigger_GroundBroken_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void OnArchetypeSelected(class URemnantArchetype** Archetype);
	void BndEvt__Trigger_Intro_Ford_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void Show_Melee_Combat_Tutorial_Prompts();
	void Player_Died_In_Reactor_Room();
	void OnPlayerDead();
	void BndEvt__Lightning_01_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void Lightning_02();
	void Lightning_03();
	void BndEvt__Lightning_04_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void BndEvt__Lightning_05_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void BndEvt__Lightning_06_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void Lerp_Skylight();
	void BndEvt__Trigger_Intro_Ace_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void GeneratorsInitialized();
	void BndEvt__PowerSource_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void Cutscene_1_Finish();
	void Cutscene_1_Start();
	void BndEvt__Power_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Return_K2Node_ComponentBoundEvent_2_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Key_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Defend_K2Node_ComponentBoundEvent_4_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Ace_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Terminal_K2Node_ComponentBoundEvent_6_QuestVoidDelegate__DelegateSignature();
	void OnQuestComplete(EQuestResult* Result);
	void CompleteKey();
	void Zone();
	void BndEvt__Talk_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Initialize_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Kill_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature();
	void OnCharacterEvent(struct FName* EventName);
	void OnFordRescueEvent(struct FName* EventName);
	void OnRigsRescueEvent(struct FName* EventName);
	void EventTreeFadeOut();
	void EventTreeFadeIn();
	void TestLighting();
	void BndEvt__Trigger_Footsteps_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void BndEvt__Trigger_Ramp_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void Lightning_07();
	void Lightning_08();
	void Lightning_09();
	void CutsceneLighting_Wallace_Start();
	void CutsceneLighting_Wallace_End();
	void BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void PickupItemCollected();
	void BndEvt__PowerSource_StartUp_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void BndEvt__Crouch_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void BndEvt__Vault_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void BndEvt__Trigger_Sword_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void OnDead_Event_1(struct FDamageInfo* DamageInfo);
	void WakeUp_Intro();
	void BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void End_of_Fight_SFX();
	void Trigger_Holdout_Success();
	void BndEvt__Trigger_Reggie_K2Node_ComponentBoundEvent_10_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void AceStay();
	void Start_Reactor_SFX();
	void BndEvt__Rigs_K2Node_ComponentBoundEvent_11_QuestVoidDelegate__DelegateSignature();
	void BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_12_QuestVoidDelegate__DelegateSignature();
	void RigsWeaponUpgrade();
	void RigsGiveArmor();
	void BndEvt__ReturnFord2_K2Node_ComponentBoundEvent_13_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Upgrade_K2Node_ComponentBoundEvent_15_QuestVoidDelegate__DelegateSignature();
	void ResetFordTrigger();
	void VaultDoorComplete();
	void GiveWeaponMod();
	void BndEvt__SeeAva_K2Node_ComponentBoundEvent_16_QuestVoidDelegate__DelegateSignature();
	void AceDefault();
	void ZoneToIntro();
	void Closed_Event_1();
	void IntroSetup();
	void IntroWardSetup();
	void BndEvt__Trigger_HowToConsumable_K2Node_ComponentBoundEvent_17_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void Tutorial_Window_Closed_Event_1();
	void CatchTutorialWindow();
	void Show_Dragon_Heart_ToolTip();
	void BndEvt__Screamer_K2Node_ComponentBoundEvent_20_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void OnStateChange_Event_1(struct FName* StateName, struct FName* PreviousStateName);
	void ResetHealth();
	void WallyCine();
	void RemoveRewardWidget();
	void CinematicFord();
	void FadeHordeLoop();
	void BndEvt__Talk_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature();
	void WaitForNotifications();
	void Queue_Empty_Event_1();
	void BndEvt__Trigger_Pickups_K2Node_ComponentBoundEvent_21_QuestTriggerPlayerDelegate__DelegateSignature(class ARemnantCharacter** Player);
	void Show_Ranged_Combat_Tutorial_Prompts();
	void BndEvt__Upgrade_K2Node_ComponentBoundEvent_22_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Rigs_K2Node_ComponentBoundEvent_23_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void OnLeveledUp_Event_1(int* ItemID);
	void CinematicRigs();
	void ActivateUpgradeObj();
	void BndEvt__DragonCrystal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void UpgradeTutorialClosed();
	void Ford1NextObjective();
	void BndEvt__Zone_Prologue_K2Node_ComponentBoundEvent_18_QuestVoidDelegate__DelegateSignature();
	void SetFordArmsCrossed();
	void EventTreeFadeOutInstant();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_19_EventRegionPlayerDelegate__DelegateSignature(struct FEventRegionCharacter* Player);
	void StartPrologue();
	void PlayerReadyForWally();
	void PlayerSit();
	void PlayerDefault();
	void ExitTerminal();
	void EquipSword();
	void OnPlayerEnteredIntroZone(class APlayerController** Controller);
	void OnPlayerEnteredWard13(class APlayerController** Controller);
	void ReceiveBeginPlay();
	void Show_Message___Can_t_Join();
	void SetRigs();
	void EngageRigs();
	void BndEvt__ReactorTerminal_K2Node_ComponentBoundEvent_24_QuestActorDelegate__DelegateSignature(class AActor** Actor);
	void EnableSaving();
	void ExecuteUbergraph_Quest_Intro(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
