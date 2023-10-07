#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x254 - 0x220)
// BlueprintGeneratedClass BP_ResidentBase.BP_ResidentBase_C
class ABP_ResidentBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        ShowTitleStep;                                     // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLoaded;                                          // 0x234(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F8[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            ManagerTable;                                      // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InitManagerStep;                                   // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F9[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UKSSaveSystem*                         System_Data;                                       // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        UltraFirstStep;                                    // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ResidentBase_C* GetDefaultObj();

	void InitManager_UltraFirst(bool* Complete);
	void CheckFCv2();
	void OnLoadedSystemData(const class FString& SlotName, int32 UserIndex, class UKSSaveSystem* SystemData);
	void SetInitManagerDelegate();
	void InitManager(bool* bCompleted);
	void OnLevelLoaded_Event();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ResidentBase(int32 EntryPoint);
};

}


