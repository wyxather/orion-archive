#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x260 - 0x230)
// BlueprintGeneratedClass NPCManagerBP.NPCManagerBP_C
class ANPCManagerBP_C : public ANPCManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                SwoonNPCList;                                      // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  SubMissionName_Start;                              // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SubMissionName_End;                                // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANPCManagerBP_C* GetDefaultObj();

	bool RecoverSwoonNPC_TZChange(int32 NPCIndex);
	void SwoonNPCRecoverInternal(int32 NPCID, struct FNPCBattleData& NPCBattleData);
	bool RecoverAllSwoonNPC();
	bool RecoverSwoonNPC(class FName& NPCLabel);
	bool AddSwoonNPC(class FName& NPCLabel, enum class ENpcSwoonType SwoonType);
	bool CreateSwoonNPCList();
	void RecoverSwoonNPC_LevelChange(class FName NextLevel);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NPCManagerBP(int32 EntryPoint);
};

}


