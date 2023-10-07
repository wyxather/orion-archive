#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x239 - 0x228)
// BlueprintGeneratedClass FootStepTriggerBP.FootStepTriggerBP_C
class AFootStepTriggerBP_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  FootStepLabel;                                     // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  FootStepType;                                      // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFootStepTriggerBP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_FootStepTriggerBP(int32 EntryPoint);
};

}


