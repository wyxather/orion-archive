#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x280 - 0x240)
// BlueprintGeneratedClass EncountTrigger.EncountTrigger_C
class AEncountTrigger_C : public AEncountTriggerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  EncountTriggerLabel;                               // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                StartFlag;                                         // 0x250(0x10)(Edit, BlueprintVisible)
	TArray<int32>                                EndFlag;                                           // 0x260(0x10)(Edit, BlueprintVisible)
	TArray<struct FEncountFlagData>              ReplaceEncountData;                                // 0x270(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class AEncountTrigger_C* GetDefaultObj();

	void SetDisableTrigger();
	class FString Debug_GetDebugInfo_BP();
	void SetEncountVolume();
	void GetReplaceEncountTriggerLabel();
	void Set_Encount_Volume_OLD();
	void CheckTriggerActive(bool* IsActive);
	bool CanActivateTrigger();
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_EncountTrigger(int32 EntryPoint);
};

}


