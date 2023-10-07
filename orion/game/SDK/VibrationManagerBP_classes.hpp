#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x29C - 0x280)
// BlueprintGeneratedClass VibrationManagerBP.VibrationManagerBP_C
class AVibrationManagerBP_C : public AVibrationManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Pow_Low;                                           // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pow_Mid;                                           // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pow_High;                                          // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AVibrationManagerBP_C* GetDefaultObj();

	bool ForcePlayVibrationByLabel(class FName VibLabel, float Power, bool Loop, int32 LoopInterval);
	void Init();
	bool PlayVibration2ByLabel(class FName VibLabel, enum class EVibrationPower Power, bool Loop, int32 LoopInterval);
	bool PlayVibrationByLabel(class FName VibLabel, float Power, bool Loop, int32 LoopInterval);
	void OnBeginPlay();
	void ExecuteUbergraph_VibrationManagerBP(int32 EntryPoint);
};

}


