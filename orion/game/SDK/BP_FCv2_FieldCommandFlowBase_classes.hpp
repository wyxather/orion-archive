#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x385 (0x5B5 - 0x230)
// BlueprintGeneratedClass BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C
class ABP_FCv2_FieldCommandFlowBase_C : public AFieldCommandFlowBase
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterBase*                      TargetNpc;                                         // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterBase*                      TargetPlayer;                                      // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SE_Label;                                          // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NPCLabel;                                          // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NextPlayerTalkEventLabel;                          // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BeforeEventLabel1;                                 // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BeforeEventLabel2;                                 // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SuccessEventLabel1;                                // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SuccessEventLabel2;                                // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FailedEventLabel;                                  // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NPCID;                                             // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNPCLeadDataBase                      CurrentNpcLeadData;                                // 0x290(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FNPCBattleData                        CurrentNpcBattleData;                              // 0x340(0xE8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FNPCPurchaseDataBase                  CurrentNpcPurchaseData;                            // 0x428(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FNPCHearDataBase                      CurrentNpcHearData;                                // 0x478(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  BadConnectionEventLabel;                           // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BranchEventWeight1;                                // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BranchEventWeight2;                                // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NextEventLabel;                                    // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBalloonBase*                          RefBalloon;                                        // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UFieldCommandPreviewPanelBase> PanelClass;                                        // 0x540(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                          RequestNotificationList;                           // 0x568(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          GotItemList;                                       // 0x578(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          InformationItemList;                               // 0x588(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFieldCommandManager*                  FcManager;                                         // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsAlreadyCompleted;                                // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsIgnoreSwoonProcessFromEventCommand;              // 0x5A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsIgnoreFollowProcessFromEventCommand;             // 0x5A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPlayedEvent;                                     // 0x5A3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSwoonedNpc;                                      // 0x5A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsNeedFollowWaitingProcessFlag;                    // 0x5A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsRestored;                                        // 0x5A6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14F1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReleasedFollowWaitingNpcId;                        // 0x5A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReservedEventOnFlowFinished;                       // 0x5AC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasNpcReleased;                                    // 0x5B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_FCv2_FieldCommandFlowBase_C* GetDefaultObj();

	void RefreshEmotionOnRelease(int32 ReleaseNpcId);
	bool GetWasNpcReleased();
	void ReleaseFollowingNpc(bool WithoutRefresh);
	void IsReserveEvent(bool* Return);
	void PlayReservedEventIfNeeded(bool* IsPlayed);
	void ReserveEventIfNeeded(enum class ENPCEVENT_TYPE EventType, bool* IsReserved);
	void SetTargetPlayer(class AKSCharacterBase* TargetPlayer);
	void ReleaseFollowWaitingNpcIfNeeded(int32* ReleasedNpcId);
	void RestoreFollowWaitingNpcIfNeededByPlayerId(enum class EPlayableCharacterID CharaID, bool* IsRestored);
	void GetFollowWaitingNpcLabel(class FName* NPCLabel);
	void RestoreFollowWaitingNpcIfNeeded(bool* IsRestored);
	void GetFollowWaitingNpcName(class FText* Name);
	void GetNPCName(class FText* Name);
	void GetFollowingNpcName(class FText* Name);
	class FName GetFollowingNpcLabel();
	void GetFollowWaitingNpcId(int32* ID);
	void IsStoryFollowNpc(bool* Story_Npc);
	void Open_Follow_Waiting_Npc_Dialog_if_Needed();
	void Follow_Npc();
	void SwoonNpc_Internal(class AKSCharacterBase* TargetNpc, enum class ENpcSwoonType SwoonType);
	void GetIsSwoonedNpc(bool* Return);
	void GetIsPlayedEvent(bool* Return);
	void SetTargetPlayerHP(int32 HP);
	void GetIsAlreadyCompleted(bool* IsAlreadyCompleted);
	void GetFooterText(class FName* TextLabel);
	void GetHeaderText(class FName* TextLabel);
	void GetHelpText(class FName* TextLabel);
	void GetFieldCommandData(struct FFieldCommandData* Data);
	bool IsImpossibleSucceed(class AKSCharacterBase* TargetNpc);
	void IsAvailable(class UNpcPropertyComponent* TargetNpc, bool* Result);
	bool GetPlayableEventLabelByGotItems(class FName* EventName);
	void AddGotItem(class FName& NewItem);
	void SetIsIgnoreFollowProcessFromEventCommand(bool IsIgnoreFollowProcessFromEventCommand);
	void SetIsIgnoreSwoonProcessFromEventCommand(bool IsIgnoreSwoonProcessFromEventCommand);
	void WillPlayEvent(bool* Result);
	void ExecuteFromPanel();
	void IsExecutableFromPanel(bool* Result);
	void OnStartFieldCommand();
	void OnFinishFieldCommand();
	void IsCompleted(bool* Result);
	void HasRequiredMoney(bool* Return);
	void GetFollowingNpcSupportLimit(int32* Limit);
	void IsFollowingNpc(bool* Result);
	void GetFollowingNpcId(int32* ID);
	void GetFollowingNpc(class AKSCharacterBase** NPC);
	void IsNeedFollowWaitingProcess(bool* Return);
	void IsFollowWaitingNpc(bool* Return);
	void IsFollowNpc(bool* Return);
	bool GetIsWaitingToStartEvent();
	void GetTargetPlayerCharacterID(enum class EPlayableCharacterID* Player);
	void GetTargetPlayer(class AKSCharacterBase** TargetPlayer);
	void GetTargetNpc(class AKSCharacterBase** TargetNpc);
	void HasRequiredItem(bool* Return);
	void IsGreaterEqualRequiredLevel(bool* Return);
	void PostProcess();
	bool AddNpcTalkBalloon(class FName RowName, class AActor* Target);
	void IsRunningFieldCommandWidget(bool* IsRunning);
	void BeginEventCallback(enum class EREQUEST_RESULT Result);
	void SetNextEventLabel(class FName NextEventLabel);
	void UpdateFlow(bool IsInterruptPlay, enum class ESequenceResult* Result);
	void PreProcess();
	bool PlayFieldCommandAction(bool IsPlaySe);
	void TurnPlayerToNpc();
	void FaceEachOther();
	void GetNpcSerifLabel(class FName SerifLabel, enum class EFC_NpcSerifType SerifType, class FName* OutputSerifLabel);
	void SwapTargetNPC(class AKSCharacterBase* TargetNpc);
	void IsOpeningBalloon(bool* Return);
	void IsIgnoreFollowProcess(bool* Ignore_Follow_Process);
	void IsFulfilledExecCondition(bool* Return);
	int32 GetNpcUniqueID();
	void PlayPlayerTalkEventCallback(enum class EREQUEST_RESULT Result);
	void RequestPlayerTalkEvent(class FName EventLabel);
	void DrawEventLabel(TMap<class FName, float> LabelAndWightSet, class FName* WinningLabel);
	void GetNPCData(struct FNPCData* NPCData);
	void GetNpcLabel(class FName* NPCLabel);
	void GetNPCHearData(struct FNPCHearDataBase* HearData);
	void GetNPCPurchaseData(struct FNPCPurchaseDataBase* PurchaseData);
	void GetPlayerProperty(class UPlayerPropertyComponent** PlayerProp);
	void GetNpcProperty(class UNpcPropertyComponent** NpcProp);
	void GetNPCBattleData(struct FNPCBattleData* BattleData);
	void GetNPCLeadData(struct FNPCLeadDataBase* LeadData);
	void SetupFlow(class AKSCharacterBase* TargetNpc, class AKSCharacterBase* TargetPlayer);
	void UserConstructionScript();
};

}


