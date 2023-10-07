#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x5B6 - 0x5B5)
// BlueprintGeneratedClass BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C
class ABP_FCv2_FieldCommandFlow_Steal_C : public ABP_FCv2_FieldCommandFlowBase_C
{
public:
	enum class EFCV2_SequenceState_Steal         State;                                             // 0x5B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FCv2_FieldCommandFlow_Steal_C* GetDefaultObj();

	void IsAvailable(class UNpcPropertyComponent* TargetNpc, bool* Result);
	void IsCompleted(bool* Result);
	void WillPlayEvent(bool* Result);
	void UpdateFlow(bool IsInterruptPlay, enum class ESequenceResult* Result);
	void PreProcess();
	void OnFinishFieldCommand();
	void OnStartFieldCommand();
	enum class EFCV2_SequenceState_Steal GetState();
	void SetState(enum class EFCV2_SequenceState_Steal NewValue);
	void UserConstructionScript();
};

}


