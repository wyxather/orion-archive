#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x258 - 0x248)
// BlueprintGeneratedClass BPC_FadeManager.BPC_FadeManager_C
class ABPC_FadeManager_C : public AFadeManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPC_FadeManager_C* GetDefaultObj();

	void CreateFadeWidget();
	void CreateBattleWipeWidget();
	void OnBeginPlay();
	void ExecuteUbergraph_BPC_FadeManager(int32 EntryPoint);
};

}


