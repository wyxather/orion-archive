#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x280 - 0x270)
// BlueprintGeneratedClass TimeZoneManagerBP.TimeZoneManagerBP_C
class ATimeZoneManagerBP_C : public ATimeZoneManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATimeZoneManagerBP_C* GetDefaultObj();

	void OnBeginPlay();
	void ExecuteUbergraph_TimeZoneManagerBP(int32 EntryPoint);
};

}


