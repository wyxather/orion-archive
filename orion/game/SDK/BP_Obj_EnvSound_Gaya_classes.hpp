#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2F1 - 0x2C9)
// BlueprintGeneratedClass BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C
class ABP_Obj_EnvSound_Gaya_C : public AKSObjectBP_C
{
public:
	uint8                                        Pad_EB6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAtomComponent*                        Atom;                                              // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class USoundAtomCue*>                 CueTable;                                          // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         EventEndReq;                                       // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Obj_EnvSound_Gaya_C* GetDefaultObj();

	void StopEnvSound(bool* Result);
	void Pause(bool bPause, bool* Result);
	void SetVolume(float Volume, bool* Result);
	void InitSound(bool* Result);
	void GetAtomComponent(class UAtomComponent** AtomComponent);
	void PlayGaya(bool* IsPlay);
	void SetupBox();
	void SetupSphere();
	void Setup_Gaya_Voice_();
	void SetObjectEnable(bool Enable);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Obj_EnvSound_Gaya(int32 EntryPoint);
};

}


