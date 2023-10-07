#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x360 - 0x260)
// WidgetBlueprintGeneratedClass BarImproveRelationship.BarImproveRelationship_C
class UBarImproveRelationship_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerStatusPanel_C*                  PlayerStatusPanel;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                          TalkTextList;                                      // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBalloonBase*                          TalkBalloon;                                       // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterBase*                      TalkCharacter;                                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAddBalloonParam                      TalkParam;                                         // 0x290(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        TalkState;                                         // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Running;                                           // 0x334(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ImprovePrice;                                      // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TownName;                                          // 0x340(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        TownID;                                            // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DialogSelectIndex;                                 // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBarImproveRelationship_C* GetDefaultObj();

	void RelationConfirmCallback(int32 SelectIndex);
	void SetFooterVisibility(enum class ESlateVisibility InVisibility);
	void FinishTalk();
	void Start(class FName NPCLabel, bool* Result);
	void IsRunnning(bool* Running);
	void Init();
	void UpdateTalk();
	void IsNpcTalking(bool* IsTalking);
	void StartNpcTalk(class FName TalkLabel, class AActor* Target_Actor, bool* Result);
	void Construct();
	void ExecuteUbergraph_BarImproveRelationship(int32 EntryPoint);
};

}


