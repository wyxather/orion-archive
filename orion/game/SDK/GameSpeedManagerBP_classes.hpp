#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x24C - 0x238)
// BlueprintGeneratedClass GameSpeedManagerBP.GameSpeedManagerBP_C
class AGameSpeedManagerBP_C : public AGameSpeedManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        EventDefaultSpeed;                                 // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGameSpeedManagerBP_C* GetDefaultObj();

	void EventSpeedUp(class UObject* WorldContextObject, bool Enable);
	void BattleSpeedUp();
	void ReceiveTick(float DeltaSeconds);
	void OnBeginPlay();
	void ExecuteUbergraph_GameSpeedManagerBP(int32 EntryPoint);
};

}


