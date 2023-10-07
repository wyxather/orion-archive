#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x5C1 - 0x5B5)
// BlueprintGeneratedClass BP_FCv2_FieldCommandFlow_Hire_Release.BP_FCv2_FieldCommandFlow_Hire_Release_C
class ABP_FCv2_FieldCommandFlow_Hire_Release_C : public ABP_FCv2_FieldCommandFlowBase_C
{
public:
	uint8                                        Pad_1291[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUFieldCommandWidgetFollowBase*        FollowWidget;                                      // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFCV2_SequenceState_Hire_Release  State;                                             // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FCv2_FieldCommandFlow_Hire_Release_C* GetDefaultObj();

	void OnFinishFieldCommand();
	void IsAvailable(class UNpcPropertyComponent* TargetNpc, bool* Result);
	void UpdateFlow(bool IsInterruptPlay, enum class ESequenceResult* Result);
	void PreProcess();
	void SetState(enum class EFCV2_SequenceState_Hire_Release NewValue);
	enum class EFCV2_SequenceState_Hire_Release GetState();
};

}


