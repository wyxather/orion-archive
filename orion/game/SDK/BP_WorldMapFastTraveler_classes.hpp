#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2E0 - 0x2D0)
// BlueprintGeneratedClass BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C
class ABP_WorldMapFastTraveler_C : public AWorldMapFastTraveler
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WorldMapFastTraveler_C* GetDefaultObj();

	void ResetBanMissionRecordFlag(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void OnFadeEnd();
	bool IsPossibleFastTravel(struct FWorldMapTable& WorldMapData);
	enum class EJudgeFastTravelAvailableResponse ExecFastTravelIfPossible(struct FWorldMapTable& DestinationData, FDelegateProperty_& OnCloseConfirmDialog, FDelegateProperty_& OnCloseFailedDialog);
	bool CanFastTravelSomeWhere(TMap<class FName, class UWorldMapIconBase*>& Icons);
	void CanFastTravel(const struct FWorldMapTable& WorldMapData, enum class EJudgeFastTravelAvailableResponse* Response, class FString* Message);
	void Is_Restriction_By_Main_Story(struct FWorldMapTable& WorldMapTable, bool* Restriction);
	void Is_Restriction_by_Follow_Field_Command(bool* Restriction);
	void OnStartFieldMainSequence(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void OnClosedFailedDialog(int32 SelectIndex);
	void OpenFailedDialog();
	void OpenConfirmDialog();
	void FastTravelRestrictionAtPrologue(const struct FWorldMapTable& WorldMapData, bool* Restriction);
	void IsVisitedLevel(const struct FWorldMapTable& WorldMapTable, bool* IsVisitedMap);
	void OnStartFastTravel(enum class EREQUEST_RESULT Result);
	void OnClosedConfrimDialog(int32 SelectIndex);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WorldMapFastTraveler(int32 EntryPoint);
};

}


