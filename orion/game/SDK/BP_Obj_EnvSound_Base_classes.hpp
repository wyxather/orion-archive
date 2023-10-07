#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x248 - 0x230)
// BlueprintGeneratedClass BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C
class ABP_Obj_EnvSound_Base_C : public AEnvSoundObjectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAtomComponent*                        Atom;                                              // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Obj_EnvSound_Base_C* GetDefaultObj();

	void StopEnvSound(bool* Result);
	void GetAtomComponent(class UAtomComponent** AtomComponent);
	void Pause(bool bPause, bool* Result);
	void SetVolume(float Volume, bool* Result);
	void InitSound(bool* Result);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Obj_EnvSound_Base(int32 EntryPoint);
};

}


