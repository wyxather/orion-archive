#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x400 - 0x2A8)
// BlueprintGeneratedClass FCv2_FieldCommandManager.FCv2_FieldCommandManager_C
class AFCv2_FieldCommandManager_C : public AFieldCommandManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_FCv2_FieldCommandFlow_BadConnection_C* BadConnectionTalkFlow;                             // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FCv2_FieldCommandFlow_Swoon_C*     SwoonTalkFlow;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterBase*                      TargetNpc;                                         // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFCv2_FieldCommandManagerRootSequence RootSequence;                                      // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFCV2_FieldCommandManagerPreSequence PreSequence;                                       // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFCV2_FieldCommandManagerMainSequence MainSequence;                                      // 0x2D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFCV2_FieldCommandManagerPostSequence PostSequence;                                      // 0x2D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AKSCharacterBase*>              CurrentPlayersInParty;                             // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<enum class EMJFieldCommandType, class ABP_FCv2_FieldCommandFlowBase_C*> PoolingFlowTable;                                  // 0x2E8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EMJFieldCommandType, class ABP_FCv2_FieldCommandFlowBase_C*> ActiveFlowTable;                                   // 0x338(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          FieldCommandActionTimerHandle;                     // 0x388(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_FieldCommandPreviewWidget_C*      FieldCommandPreviewWidget;                         // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FCv2_FieldCommandFlowBase_C*       ExecuteFlow;                                       // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EMJFieldCommandType, class ABP_FCv2_FieldCommandFlowBase_C*> PoolingSubFlowTable;                               // 0x3A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EMJFieldCommandType               SubFlowType;                                       // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFCv2_FieldCommandManagerFlowType FlowType;                                          // 0x3F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      Target_Npc;                                        // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFCv2_FieldCommandManager_C* GetDefaultObj();

	bool IsPlayingBadConnectionFlow();
	void SetIdleGuestCharacter();
	bool StartBadConnectionTalk();
	void SetIsIgnoreSwoonProcessFromEventCommand(bool Val);
	void RestoreFollowWaitingNpcsIfNeeded();
	void OnClosedWaitingNpcComeBackDialog(int32 SelectIndex);
	void UpdateLastResult(enum class ESequenceResult Result);
	void SetupFlowBase(class AKSCharacterBase* TargetChara, enum class EMJFieldCommandType FCType);
	bool CanExecFieldCommand(class FName NPCLabel, enum class EMJFieldCommandType FCType);
	bool ResetManagerFromTitle();
	bool ResetManager();
	bool RecoveryConnectionValue(int32 TownID);
	bool ConnectionBadNotification();
	void OnFinishBadConnectionTutorial(enum class ETUTORIAL_TYPE TutorialType);
	void OpenConnectionBadNotification(bool* IsOpenTutorial);
	bool StartSwoonTalk(class AKSCharacterBase* TargetNpc);
	class AKSCharacterBase* GetTargetNpc();
	class AFieldCommandFlowBase* GetFlowBase(enum class EMJFieldCommandType FCType);
	TArray<struct FPurchaseItemInfoData> GetPurchaseItemList(class FName NPCLabel);
	bool IsBattleType();
	bool GetIsGameOverWhenLoose();
	class AKSCharacterBase* GetCharacterByFcType(enum class EMJFieldCommandType FieldCommandType);
	bool IsImpossibleSucceed(enum class EMJFieldCommandType FCType, class AKSCharacterBase* TargetNpc);
	bool IsAvailableFieldCommand(enum class EMJFieldCommandType FCType, class AKSCharacterBase* TargetNpc);
	bool IsCompleteFieldCommand(enum class EMJFieldCommandType FCType, class AKSCharacterBase* TargetNpc);
	void CreateFlowClassIfNeeded(enum class EMJFieldCommandType& FCType);
	void CreateFlowClasssesIfNeeded(TArray<enum class EMJFieldCommandType>& FcTypes);
	enum class EFCv2_FieldCommandManagerFlowType GetFlowType();
	void SetFlowType(enum class EFCv2_FieldCommandManagerFlowType NewValue);
	bool SetStartParam(class AKSCharacterBase* TargetChara, enum class EMJFieldCommandType Type);
	void SetIsIgnoreFollowProcessFromEventCommand(bool Val);
	TMap<class FString, class FString> GrabStateSnapshot_Internal();
	class AFieldCommandFlowBase* GetPlayingCommand();
	class FString GetState();
	void CanExecMainSequence(bool* Yes);
	void GetFieldCommandPreviewWidget(class UWBP_FieldCommandPreviewWidget_C** Return);
	bool FinishFieldCommand();
	bool IsEndFieldCommandAction();
	bool IsPlaying();
	void IsPlayingFieldCommandAction(bool* IsPlaying);
	void OnFinishFieldCommandAction();
	void PlayFieldCommandActions(bool* IsPlayed, float* MaxWaitTime);
	void GetActiveFcFlows(TArray<class ABP_FCv2_FieldCommandFlowBase_C*>* Flows);
	void GetActiveFcTypes(TArray<enum class EMJFieldCommandType>* FcTypes);
	void SetupActiveFlows(TArray<class AKSCharacterBase*>& Party);
	void GetPostSequence(enum class EFCV2_FieldCommandManagerPostSequence* PostSequence);
	void SetPostSequence(enum class EFCV2_FieldCommandManagerPostSequence PostSequence);
	void GetMainSequence(enum class EFCV2_FieldCommandManagerMainSequence* MainSequence);
	void SetMainSequence(enum class EFCV2_FieldCommandManagerMainSequence MainSequence);
	void GetPreSequence(enum class EFCV2_FieldCommandManagerPreSequence* PreSequence);
	void SetPreSequence(enum class EFCV2_FieldCommandManagerPreSequence PreSequence);
	void UpdatePostSequence(enum class ESequenceResult* Result);
	void UpdateMainSequence(enum class ESequenceResult* Result);
	void UpdatePreSequence(enum class ESequenceResult* Result);
	void GetRootSequence(enum class EFCv2_FieldCommandManagerRootSequence* RootSequence);
	void SetRootSequence(enum class EFCv2_FieldCommandManagerRootSequence RootSequence);
	void UpdateManager(float DeltaSeconds);
	void UpdateRootSequence(enum class ESequenceResult* Result);
	bool StartFieldCommand();
	bool SetupCommand(TArray<enum class EMJFieldCommandType>& FieldCommand);
	void OnEnterGameOver(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void OnStartFieldMainSequence(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void UserConstructionScript();
	void OnBeginPlay();
	void ExecuteUbergraph_FCv2_FieldCommandManager(int32 EntryPoint);
};

}


