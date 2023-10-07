#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7 (0x5BC - 0x5B5)
// BlueprintGeneratedClass BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C
class ABP_FCv2_FieldCommandFlow_Lure_C : public ABP_FCv2_FieldCommandFlowBase_C
{
public:
	enum class EFCV2_SequenceState_Lure          State;                                             // 0x5B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Judge;                                             // 0x5B6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8CC[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReleasedNpcId;                                     // 0x5B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FCv2_FieldCommandFlow_Lure_C* GetDefaultObj();

	void PostProcess();
	class FString GetRunningStatus();
	void OnFinishFieldCommand();
	void IsAvailable(class UNpcPropertyComponent* TargetNpc, bool* Result);
	bool Draw();
	void UpdateFlow(bool IsInterruptPlay, enum class ESequenceResult* Result);
	TMap<class FString, class FString> GrabStateSnapshot_Internal();
	void PreProcess();
	void ExecFollowFromEvent(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void SetState(enum class EFCV2_SequenceState_Lure NewValue);
	enum class EFCV2_SequenceState_Lure GetState();
	void UserConstructionScript();
};

}


