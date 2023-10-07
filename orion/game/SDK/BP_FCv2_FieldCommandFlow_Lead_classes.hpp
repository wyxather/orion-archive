#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x5B6 - 0x5B5)
// BlueprintGeneratedClass BP_FCv2_FieldCommandFlow_Lead.BP_FCv2_FieldCommandFlow_Lead_C
class ABP_FCv2_FieldCommandFlow_Lead_C : public ABP_FCv2_FieldCommandFlowBase_C
{
public:
	enum class EFCV2_SequenceState_Lead          State;                                             // 0x5B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FCv2_FieldCommandFlow_Lead_C* GetDefaultObj();

	class FString GetRunningStatus();
	void PostProcess();
	void OnFinishFieldCommand();
	void IsAvailable(class UNpcPropertyComponent* TargetNpc, bool* Result);
	TMap<class FString, class FString> GrabStateSnapshot_Internal();
	void IsGreaterEqualRequiredLevel(bool* Return);
	void ExecFollowFromEvent(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void UpdateFlow(bool IsInterruptPlay, enum class ESequenceResult* Result);
	enum class EFCV2_SequenceState_Lead GetState();
	void SetState(enum class EFCV2_SequenceState_Lead State);
	void PreProcess();
	void UserConstructionScript();
};

}


