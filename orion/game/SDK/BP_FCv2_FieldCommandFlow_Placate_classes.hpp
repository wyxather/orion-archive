#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x5C1 - 0x5B5)
// BlueprintGeneratedClass BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C
class ABP_FCv2_FieldCommandFlow_Placate_C : public ABP_FCv2_FieldCommandFlowBase_C
{
public:
	uint8                                        Pad_17C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EFCV2_SequenceState_Placate       State;                                             // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FCv2_FieldCommandFlow_Placate_C* GetDefaultObj();

	class FString GetRunningStatus();
	void OnFinishFieldCommand();
	void IsAvailable(class UNpcPropertyComponent* TargetNpc, bool* Result);
	void ComsumeItems(struct FNPCLeadDataBase& NPCLeadDataBase);
	void UpdateFlow(bool IsInterruptPlay, enum class ESequenceResult* Result);
	void PreProcess();
	void ExecFollowFromEvent(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	TMap<class FString, class FString> GrabStateSnapshot_Internal();
	enum class EFCV2_SequenceState_Placate GetState();
	void SetState(enum class EFCV2_SequenceState_Placate State);
	void HasRequiredItem(bool* Return);
	void UserConstructionScript();
	void ExecuteUbergraph_BP_FCv2_FieldCommandFlow_Placate(int32 EntryPoint);
};

}


