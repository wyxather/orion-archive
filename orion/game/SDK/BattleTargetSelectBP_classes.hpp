#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x428 - 0x220)
// BlueprintGeneratedClass BattleTargetSelectBP.BattleTargetSelectBP_C
class ABattleTargetSelectBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBase*>          BattlePlayerList;                                  // 0x230(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABattleCharacterBase*>          BattleEnemyList;                                   // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         TargetSingle;                                      // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A4E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBattleTargetCursor_C*>         Cursor;                                            // 0x258(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ABattleCharacterBase*>          TargetCharacterList;                               // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        TargetIndex;                                       // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_TARGET_TYPE               TargetType;                                        // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnemySingleTargetIndex;                            // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PartySingleTargetIndex;                            // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EABILITY_TYPE                     AbilityType;                                       // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExceptEnforcer;                                    // 0x289(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsStealItemCommand;                                // 0x28A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsStealMoneyCommand;                               // 0x28B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTameMonsterCommand;                              // 0x28C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsWeakCheckAllCommand;                             // 0x28D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTargetSelectUP;                                  // 0x28E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPOTRecovery;                                     // 0x28F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBribeCommand;                                    // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A51[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BribeAbilityRatio;                                 // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      ActionCommand;                                     // 0x298(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBattleOtherArrowFocus_C*>      ScatterCursor;                                     // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsScatterCommand;                                  // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A54[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleCharacterBase*>          ScatterTargetList;                                 // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        ScatterCountMax;                                   // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A56[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, int32>                           ScatterSelectCount;                                // 0x3B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsSealActionCommand;                               // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A57[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleCharacterBase*>          SortedBattleEnemyList;                             // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABattleCharacterBaseBP_C*              BattleEnforcer;                                    // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABattleTargetSelectBP_C* GetDefaultObj();

	void MakeCatapultAttributeList(TArray<bool>* AttributeList);
	void SearchPriorityTargetByDiseaseType(TArray<class ABattleCharacterBase*>& CharacterList, enum class EDISEASE_TYPE DiseaseType, int32* PriorityTargetIndex);
	void SearchPriorityTargetByDiseaseCategory(TArray<class ABattleCharacterBase*>& CharacterList, enum class EDISEASE_CATEGORY DiseaseCategory, int32* PriorityTargetIndex);
	void CheckDiseaseRecovery(TArray<struct FAilmentHandler>& AilmentList, enum class EAILMENT_REMOVE_DISEASE_TYPE* TargetDisease, TArray<enum class EDISEASE_TYPE>* DiseaseTypeList, bool* Result);
	void UpdateCursorFunc();
	void GetScatterTargetSelectCount(class ABattleCharacterBase* WorkTarget, int32* Return);
	void IsEmptyScatterTarget(bool* IsEmpty);
	void CancelScatterTarget();
	void DecideScatterTarget(bool* ScatterCountMax);
	void CheckPOTRecovery(TArray<struct FAilmentHandler>& AilmentList, bool* Result);
	void FixupTargetOrder(class ABattleCameraBP_C* BattleCamera);
	void SortBattleTargetByCamera(TArray<class ABattleCharacterBase*>& TargetList, class ABattleCameraBP_C* BattleCamera, TArray<class ABattleCharacterBase*>* SortedList);
	void SortBattleTarget(TArray<class ABattleCharacterBaseBP_C*>& TargetList, TArray<class ABattleCharacterBaseBP_C*>* SortedList);
	void GetSpecialAttributeList(class FName AbilityLabel, bool* Enable, TArray<bool>* AttributeList);
	void AutoSelectTarget();
	void CreateTargetCursor();
	void InitTargetIndex();
	void SetSelectTarget(TArray<class ABattleCharacterBaseBP_C*>& Target);
	void InitCursor();
	void GetSelectedIndex(int32* Index);
	void SelectNext(bool* MoveSuccess);
	void SelectPrev(bool* MoveSuccess);
	void EndSelection(bool ResetCamera);
	void GetSelectedTarget(TArray<class ABattleCharacterBase*>* SelectTarget);
	void DestroyTargetSelect();
	void Start_Selection(class ABattleCharacterBaseBP_C* Enforcer, const struct FAbilityDataBase& Command, int32 Boost, class FName AbilityLabel);
	void SetupTargetSelect();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BattleTargetSelectBP(int32 EntryPoint);
};

}


