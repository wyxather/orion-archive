#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDC (0x334 - 0x258)
// BlueprintGeneratedClass EffectManagerBP.EffectManagerBP_C
class AEffectManagerBP_C : public AKSEffectManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DebugSpawnOffset;                                  // 0x268(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EffectManagerReady;                                // 0x274(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F68[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InitializeEffectCounter;                           // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InitializeEffectMax;                               // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>      TmpSpawnEffect;                                    // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FName>                          EffectNameList;                                    // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        EffectLoadIndex;                                   // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LoopCounter;                                       // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LoopMax;                                           // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LoopEffect;                                        // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F6A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ParticleSystem;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EffectOffset;                                      // 0x2B8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F6B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                SpawnMaxList;                                      // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                 LoopFlagList;                                      // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       OffsetList;                                        // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                EffectIndex;                                       // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsEffectSetup;                                     // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F6D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       EffectList;                                        // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        EffectMakeCount;                                   // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EffectMakeIndex;                                   // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EffectMaxCount;                                    // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DebugSpawnEffectLabel;                             // 0x32C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AEffectManagerBP_C* GetDefaultObj();

	void IsReady(bool* Result);
	void DebugSpawn(class FName EffectLabel, const struct FVector& VPos);
	void LoadEffectMakeTick(bool* Result);
	void LoadEffectMakeEffect(int32 StartIndex, int32 Count);
	void LoadEffectCleanup();
	void LoadEffectCreate(class UParticleSystem* ParticleSystem, int32 MaxCount, bool LoopFlag, int32 Index, const struct FVector& Offset);
	void LoadEffectComplete(TArray<class UObject*>& Loaded);
	void LoadEffect();
	void InitializeEffect();
	void ClearAllEffect();
	void ExecInitializeEffect();
	void ExecEffectDBLoad();
	void NextEffectDBLoad();
	void ExecEffectSpawn();
	void NextEffectSpawn();
	void ReceiveTick(float DeltaSeconds);
	void DebugSpawnEffect(class FName EffectLabel, uint8 SpawnCnt);
	void ExecuteUbergraph_EffectManagerBP(int32 EntryPoint);
};

}


