#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2C0 - 0x2B0)
// BlueprintGeneratedClass UIResourceManagerBP.UIResourceManagerBP_C
class AUIResourceManagerBP_C : public AUIResourceManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUIResourceManagerBP_C* GetDefaultObj();

	void Callback();
	void UpdateManager(float DeltaSeconds);
	void ExecuteUbergraph_UIResourceManagerBP(int32 EntryPoint);
};

}


