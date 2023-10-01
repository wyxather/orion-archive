#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_M_Ep04_EarnSpaceship_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prologue_M_Ep04_EarnSpaceship.Prologue_M_Ep04_EarnSpaceship_C
// 0x01A8 (0x0620 - 0x0478)
class APrologue_M_Ep04_EarnSpaceship_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class AOakVehicle*                                 Ep04EllieFuelVehicle;                                     // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      EnemyForLilithToFight1;                                   // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  PlanettitleCardMaterialsToStream;                         // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ATargetPoint*                                TargetPoint_BiofuelRemovalFX_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_PsychoRoadApples_AINode_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_Ep04_EllieFirehawkElliePos_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AIO_Door_1000x600_SlideUp_Pandora_Generic_C* ShipFrontDoor_IO_Door_1000x800_SlideUp_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode16_Ep04_AttackInjuredLilith_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakSpawner*                                 OakSpawner_1_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_Catwalks_Destination_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_Catwalks_Destination_0_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_Catwalks_Destination_1_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_Catwalks_Destination_2_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_Ep04_EllieFirehawkLilithPos_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_EllieMoveToDoor_AINode_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_LookAtBiofuelRig_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0500(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_LilithRunOfftoFirehawk_AINode_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)
	class AIO_Door_1000x600_SlideUp_Pandora_Generic_C* ShipOuterGate_IO_Door_1000x600_SlideUp_Panodra_Vehicle_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_Ep04_EllieRunsOffToShip_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_EllieMoveToPos_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakVehicleSpawnPoint*                       OakVehicleSpawnPoint_3_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABPSmartObject_NPC_WalkInFog_C*              BPSmartObject_NPC_WalkInFog_0_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_Ep04_AttackCampNode_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_TannisDefault_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0540(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASmartObject_TannisKeyTable_C*               SmartObject_TannisKeyTable_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0548(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABPSmartObject_NPC_WalkInFog_C*              BPSmartObject_NPC_WalkInFog_3_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0550(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_Ep04_LilithTyreenFight_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0558(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_Ep04_LilithSpawnFirehawk_1_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0560(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_Ep04_LilithSpawnFirehawk_0_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0568(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_Ep04_LilithSpawnFirehawk_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0570(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakMissionSpawner*                          Ep04_OakMissionSpawner_LilithCombatEvents_3_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0578(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakMissionSpawner*                          Ep04_OakMissionSpawner_LilithCombatEvents_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0580(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_Ep04_LilithTannisBamf_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0588(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_LilithBamfsOutsideofDoor_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0590(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_Ep04_LilithTalkToTannis_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0598(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_Ep04_LilithTannisBamf_0_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x05A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_LilithInjured02_AINode_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x05A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_ForceGuyUpTopDown_AINode_4_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x05B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     LilithNearEllie_AINode_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x05B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AGbxBlockingVolume*                          GbxBlockingVolume_1_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x05C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_AINode_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x05C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAllPlayersRequiredVolume*                   OakMissionVolume_ShipDeck_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x05D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAllPlayersRequiredVolume*                   OakMissionVolume_Shipyard_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x05D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAllPlayersRequiredVolume*                   OakMissionVolume_Shipramp_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x05E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATerritory*                                  Territory_LilithRidge_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x05E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATerritory*                                  Territory_LilithRidge_3_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x05F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATerritory*                                  Territory_TannisDigSite_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x05F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Ep04_ExplosionLocation_EmptyActor_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0600(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_LilithBombed_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0608(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     Ep04_LilithBombed_8_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0610(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            SM_Button_Base_3_ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship_RefProperty;// 0x0618(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_M_Ep04_EarnSpaceship.Prologue_M_Ep04_EarnSpaceship_C");
		return ptr;
	}


	void OnDialogSequenceFinished_3();
	void OnCompleted_E22D4831433739E3497ED98C131C532F();
	void OnAborted_E22D4831433739E3497ED98C131C532F();
	void OnCompleted_628FB48C4FF1D50EDF1126B78B9D6CE3();
	void OnAborted_628FB48C4FF1D50EDF1126B78B9D6CE3();
	void OnCompleted_0BF4B0754EDF3531A7624C84CE64DDCD();
	void OnAborted_0BF4B0754EDF3531A7624C84CE64DDCD();
	void OnCompleted_F45E7896442823381E0F39A883F3F63C();
	void OnAborted_F45E7896442823381E0F39A883F3F63C();
	void OnCompleted_C229D5E6414801B57A2005A6480BB7E7();
	void OnAborted_C229D5E6414801B57A2005A6480BB7E7();
	void OnCompleted_11E698C94F34BE35CA3F2BBBBC4BDB06();
	void OnAborted_11E698C94F34BE35CA3F2BBBBC4BDB06();
	void OnCompleted_F710A8F047EC2C021061059E6B29CCCB();
	void OnAborted_F710A8F047EC2C021061059E6B29CCCB();
	void OnCompleted_8D147A6C4A4BD42CD6C066958667EE96();
	void OnAborted_8D147A6C4A4BD42CD6C066958667EE96();
	void OnCompleted_2F07846D4BF2BCD5E53066BE9D51E2BB();
	void OnAborted_2F07846D4BF2BCD5E53066BE9D51E2BB();
	void OnCompleted_223EF5F746B41DA7B5285E998CB30BEE();
	void OnAborted_223EF5F746B41DA7B5285E998CB30BEE();
	void OnCompleted_629C4B254E1C006BBDF096850A17B764();
	void OnAborted_629C4B254E1C006BBDF096850A17B764();
	void OnSuccess_398ED44E4FBA0C504C05148C815DBE8E();
	void OnInterrupt_398ED44E4FBA0C504C05148C815DBE8E();
	void OnBegin_398ED44E4FBA0C504C05148C815DBE8E();
	void OnUnreserve_398ED44E4FBA0C504C05148C815DBE8E();
	void OnReserve_398ED44E4FBA0C504C05148C815DBE8E();
	void OnCompleted_2722287D4096C6D3FADD46AA9FB36E1F();
	void OnAborted_2722287D4096C6D3FADD46AA9FB36E1F();
	void OnCompleted_73052D2740A0330A3D2F189A05ABBAA6();
	void OnAborted_73052D2740A0330A3D2F189A05ABBAA6();
	void OnSuccess_6CB20C594801C4C165CDDA80BAB9B062();
	void OnInterrupt_6CB20C594801C4C165CDDA80BAB9B062();
	void OnBegin_6CB20C594801C4C165CDDA80BAB9B062();
	void OnUnreserve_6CB20C594801C4C165CDDA80BAB9B062();
	void OnReserve_6CB20C594801C4C165CDDA80BAB9B062();
	void OnSuccess_87B26A7C43C496AC4E936EB216B694CA();
	void OnInterrupt_87B26A7C43C496AC4E936EB216B694CA();
	void OnBegin_87B26A7C43C496AC4E936EB216B694CA();
	void OnUnreserve_87B26A7C43C496AC4E936EB216B694CA();
	void OnReserve_87B26A7C43C496AC4E936EB216B694CA();
	void OnSuccess_5B43028A450F77BEBFC97AAB73203F6B();
	void OnInterrupt_5B43028A450F77BEBFC97AAB73203F6B();
	void OnBegin_5B43028A450F77BEBFC97AAB73203F6B();
	void OnUnreserve_5B43028A450F77BEBFC97AAB73203F6B();
	void OnReserve_5B43028A450F77BEBFC97AAB73203F6B();
	void OnCompleted_E434CD104ABA4E80E73DAF9C57BBB663();
	void OnAborted_E434CD104ABA4E80E73DAF9C57BBB663();
	void OnCompleted_2A6B26DE4BCBD96929CD8AA29641CB97();
	void OnAborted_2A6B26DE4BCBD96929CD8AA29641CB97();
	void OnCompleted_2F119A104D3E44D94184D5B0ABBB31EA();
	void OnAborted_2F119A104D3E44D94184D5B0ABBB31EA();
	void OnCompleted_12D1D0CA4456597D7AB810A4311AD516();
	void OnAborted_12D1D0CA4456597D7AB810A4311AD516();
	void OnCompleted_52F59D92417F4E2A24861992F0376005();
	void OnAborted_52F59D92417F4E2A24861992F0376005();
	void OnCompleted_539B070E46E1C871F1022E9BCB72DCA2();
	void OnAborted_539B070E46E1C871F1022E9BCB72DCA2();
	void BndEvt__IO_VehicleDestinationIndicator_2277_K2Node_ActorBoundEvent_12_VehicleArrivedAtDestination__DelegateSignature(class APawn* Vehicle);
	void BndEvt__OakMissionSpawner_2_K2Node_ActorBoundEvent_14_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void DisplaySpawnVehicleTutorial();
	void BndEvt__OakMissionVehicleSpawner_Convoy_K2Node_ActorBoundEvent_1_MissionVehicleSpawnedEvent__DelegateSignature(class AOakVehicle* MissionVehicle);
	void ResetStuckMessage();
	void MissionVehicleDestroyed(class AActor* DestroyedActor);
	void PlayerExitsMissionVehicle(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void PlayerEntersMissionVehicle(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void MissionVehicleCausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void EllieIntroToBiofuelRig();
	void BndEvt__OakTriggerBox_1_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__Pickup_Ep03_NavChip_1037_K2Node_ActorBoundEvent_2_OnPickedUp__DelegateSignature(class AActor* WasPickedUpBy);
	void BndEvt__OakTriggerBox_Ep03_MeetScooper_1_K2Node_ActorBoundEvent_21_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTriggerBox3_Ep03_HeadToShipAttack_K2Node_ActorBoundEvent_111_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void MRE_GotInVehicle();
	void BndEvt__AllPlayersRequiredVolume_1_K2Node_ActorBoundEvent_536_OakTriggerDelegate__DelegateSignature();
	void BndEvt__Ep03_Elevator_AllPlayersRequiredVolume_K2Node_ActorBoundEvent_537_PlayerTouchedButNotAllTouchingDelegate__DelegateSignature(class AActor* NewPlayer, int NumPlayersMissing);
	void BndEvt__IO_Switch_GenericButton_V_30_K2Node_ActorBoundEvent_719_On_SwitchUsed__DelegateSignature(class AController* UserController);
	void CheckIfPlayersAlreadyGathered();
	void BndEvt__OakTriggerBox_3_K2Node_ActorBoundEvent_864_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__Ep03_FinalFight_OakMissionSpawner_K2Node_ActorBoundEvent_355_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__Ep03_ElevatorSpawn_OakTriggerBox_K2Node_ActorBoundEvent_224_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakSpawner_1_K2Node_ActorBoundEvent_315_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__OakMissionSpawner_13_K2Node_ActorBoundEvent_481_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__OakMissionSpawner_12_K2Node_ActorBoundEvent_507_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__OakMissionSpawner_14_K2Node_ActorBoundEvent_533_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__OakTriggerSphere_Ep04_GoToShip1_EllieFirehawk_K2Node_ActorBoundEvent_4_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void MRE_LilithFirehawkAwayByShip();
	void MoveEllieToHerOffice();
	void MRE_LilithHoldsOutMapForPlayer();
	void MRE_TannisEmerges();
	void MRE_GiveMapToT();
	void MRE_LilithArrival();
	void BndEvt__OakMissionSpawner_Ep04_FirstWave_K2Node_ActorBoundEvent_8_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__OakSpawner_Ep04_LilithWave_K2Node_ActorBoundEvent_9_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void MRE_TannisReturns();
	void TannisSetKeyDown();
	void MRE_TannisActivatesKeyTable();
	void TannisExamineKeyFinished();
	void BndEvt__Ep04_TriggerNavChipDialogue_OakMissionWaypoint_K2Node_ActorBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__Ep04_TriggerNavChipDialogue_OakMissionWaypoint_0_K2Node_ActorBoundEvent_10_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void MRE_LilithDownState();
	void MRE_LilithRevived();
	void MRE_GoToShipExplosions();
	void BndEvt__Ep04_OakMissionSpawner_LilithCombatEvents_K2Node_ActorBoundEvent_7_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__Ep04_OakMissionSpawner_LilithCombatEvents_3_K2Node_ActorBoundEvent_11_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__OakSpawner_Ep04_Wave2_Encounter_K2Node_ActorBoundEvent_18_SpawnerWaveEvent__DelegateSignature(class ASpawner* Spawner, int WaveIndex);
	void BndEvt__Ep04_OakMissionSpawner_LilithCombatEvents_K2Node_ActorBoundEvent_20_SpawnerDoneEvent__DelegateSignature(class ASpawner* Spawner);
	void BndEvt__Ep04_OakMissionSpawner_LilithCombatEvents_3_K2Node_ActorBoundEvent_22_SpawnerDoneEvent__DelegateSignature(class ASpawner* Spawner);
	void MRE_LilithAndTannisBamfAway();
	void MRE_LilithLooksAtPlayer();
	void MRE_LilithAndEllieLookAtEachOther();
	void MRE_DeactivateTannis();
	void MRE_LilithReturnsToShipEntrance();
	void BndEvt__Ep04_WaypointForCouryardFight_K2Node_ActorBoundEvent_16_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void MRE_LilithAndTannisLookAtEachOther();
	void BndEvt__SpawnMesh_CardboardBox_4_K2Node_ActorBoundEvent_24_SpawnPointEvent__DelegateSignature(class ASpawnPoint* SpawnPoint, class AActor* Actor);
	void BndEvt__Ep04_ShipyardPlayerCheck4_Late_K2Node_ActorBoundEvent_13_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__Ep04_ShipyardPlayerCheck5_Late_K2Node_ActorBoundEvent_17_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__Ep04_ShipyardPlayerCheck6_Late_K2Node_ActorBoundEvent_18_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__Ep04_ShipyardPlayerCheck7_Late_K2Node_ActorBoundEvent_23_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__Ep04_ShipyardPlayerCheck8_Late_K2Node_ActorBoundEvent_25_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__Ep04_ShipyardPlayerCheck9_Late_K2Node_ActorBoundEvent_26_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void MRE_LilithTakesAndGivesKey();
	void MRE_GoToShipExplosions_Delayed();
	void BndEvt__OakMissionSpawner_1_K2Node_ActorBoundEvent_27_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__BP_CatchARide_Platform_4_K2Node_ActorBoundEvent_0_VehicleScanned__DelegateSignature();
	void BndEvt__BP_CatchARide_Platform_3_K2Node_ActorBoundEvent_3_VehicleScanned__DelegateSignature();
	void BndEvt__BP_CatchARide_Platform_4_K2Node_ActorBoundEvent_0_VehicleScanned__DelegateSignature_UNIX1560094721();
	void BndEvt__BP_CatchARide_Platform_3_K2Node_ActorBoundEvent_3_VehicleScanned__DelegateSignature_UNIX1560094721();
	void BndEvt__BP_CatchARide_Platform_4_K2Node_ActorBoundEvent_0_VehicleScanned__DelegateSignature_UNIX1560094750();
	void BndEvt__BP_CatchARide_Platform_3_K2Node_ActorBoundEvent_3_VehicleScanned__DelegateSignature_UNIX1560094750();
	void BndEvt__BP_CatchARide_Platform_4_K2Node_ActorBoundEvent_0_VehicleScanned__DelegateSignature_UNIX1560094779();
	void BndEvt__BP_CatchARide_Platform_3_K2Node_ActorBoundEvent_3_VehicleScanned__DelegateSignature_UNIX1560094779();
	void BndEvt__BP_CatchARide_Console_66_K2Node_ActorBoundEvent_24_PlayerBeginInteraction__DelegateSignature(class AOakPlayerController* InteractingPlayer);
	void BndEvt__BP_CatchARide_Console_2_K2Node_ActorBoundEvent_5_PlayerBeginInteraction__DelegateSignature(class AOakPlayerController* InteractingPlayer);
	void BndEvt__BP_CatchARide_Console_2_K2Node_ActorBoundEvent_5_PlayerBeginInteraction__DelegateSignature_UNIX1560096125(class AOakPlayerController* InteractingPlayer);
	void BndEvt__BP_CatchARide_Console_2_K2Node_ActorBoundEvent_5_PlayerBeginInteraction__DelegateSignature_UNIX1560096276(class AOakPlayerController* InteractingPlayer);
	void BndEvt__OakTriggerBox_1_K2Node_ActorBoundEvent_34_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakCinematicBrain_1_K2Node_ActorBoundEvent_35_OnCinematicBrainEvent__DelegateSignature(class UOakCinematicTag* CinematicTag);
	void ExecuteUbergraph_Prologue_M_Ep04_EarnSpaceship(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
