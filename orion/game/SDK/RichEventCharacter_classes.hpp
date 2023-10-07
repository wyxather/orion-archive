#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x53 (0xC4F - 0xBFC)
// BlueprintGeneratedClass RichEventCharacter.RichEventCharacter_C
class ARichEventCharacter_C : public AKSFieldNPCCharacter_C
{
public:
	uint8                                        Pad_15A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                  EmotionName;                                       // 0xC08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URichEventEditorComponent*             RichEventEditorComponent;                          // 0xC10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TagName;                                           // 0xC18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  ChracterLabel;                                     // 0xC20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterBase*                      AttachCharacter;                                   // 0xC28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       ParentAttachComponent;                             // 0xC30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CacheLocation;                                     // 0xC38(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LandPositionAdjustment;                            // 0xC44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttachPlayRate;                                    // 0xC48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EventSpawnCharacter;                               // 0xC4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IgonoreFootStep;                                   // 0xC4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseDither;                                         // 0xC4E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ARichEventCharacter_C* GetDefaultObj();

	void UpdateDitherMask();
	bool IsFieldNpcCharacter();
	void SetFadeMode(bool Enable, float FadeTime);
	void UpdateFadeMaterial(float DeltaTime);
	void SetFootStepSound(bool IgnoreFootStep);
	void SetEmotionText(bool SetBalloon, int32 EmotionType);
	class FName GetTextInfo();
	void SetLandPositionAdjustment(bool SetAdjustment);
	void SetCharacterLandPosition(float DeltaSeconds);
	void ChangeCharacterAction(enum class EKSCharacterAction ActionLabelName, int32 Frame, enum class EKSCharacterAnimationLoop LoopSetting, enum class EKSCharacterDir SetDir);
	void SetTagVoiceText(bool SetVoice);
	void Set_Up_Debug_Text(enum class EKSCharacterDir SetDir);
	void InitTagData(class FName AddTagName);
	void DetachCharacter();
	void AttachCharacterChangeCollision(bool Enabled);
	void Change_Flipbook(enum class EKSCharacterAction CharacterAction, enum class EKSCharacterDir CharaDir, enum class EKSCharacterAnimationLoop AnimationLoop);
	void AttachChara(class AKSCharacterBase* Character, enum class EKSCharacterDir SetDir);
	void Set_Up_Flipbook(const struct FSoftObjectPath& TargetObjectPath, TSoftObjectPtr<class UPaperFlipbook> FlipbookObject_Soft, enum class EKSCharacterAnimationLoop AnimationLoop);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void InitCharacter(class FName CharacterLabel, enum class EKSCharacterDir SetDir, class FName AddTagName);
	void AttachPlayer(enum class EKSCharacterDir SetDir, class FName LabelName);
	void AttachCharacterAction(enum class EKSCharacterAction ActionLabelName, int32 Frame, enum class EKSCharacterAnimationLoop LoopSetting, enum class EKSCharacterDir SetDir);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_RichEventCharacter(int32 EntryPoint);
};

}


