#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x308 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_FBPart.WBP_FBPart_C
class UWBP_FBPart_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFBImage*                              CharaIcon;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              DrawMaxSize;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_94;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SpriteMaxSize;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         UpdateFlipBook;                                    // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_871[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFlipbookPlayParam                    FlipbookPlayParamCache;                            // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_FBPart_C* GetDefaultObj();

	void OnLoadedNormalFlipbook(TArray<class UObject*>& ObjList);
	void SetFBParam_Normal(class FName Label, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, const struct FVector2D& DrawSize, bool IsLoop);
	void OnLoadedMonsterFlipbook(TArray<class UObject*>& ObjList);
	void SetFBParam_FromJobCharacter(int32 CharaID, enum class EPLAYER_JOB_FB_TYPE ActionType, enum class EJOB_TYPE JobID, bool IsLoop, const struct FVector2D& DrawSize, bool* Success);
	void SetCharacterColor(const struct FLinearColor& SetColor);
	void OnLoadedNpcFlipbook(TArray<class UObject*>& ObjList);
	void PreSetFlipbook(const struct FVector2D& Size);
	void SetIsUpdateFlipbook(bool UpdateFlipBook);
	void SetPosition(const struct FVector2D& DefaultSize, const struct FVector2D& DrawSize);
	void SetFBIconTranslation(float Scale, const struct FVector2D& Offset);
	void SetFBParam_FromMonsterList(class FName Label, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, const struct FVector2D& DefaultSize, const struct FVector2D& DrawSize, bool IsLoop);
	void Set_FBParam_from_Select_Character(class FName FBLabel, bool IsLoop, const struct FVector2D& DrawSize);
	void SetDrawSize(const struct FVector2D& Size);
	void SetBaseScale(const struct FVector2D& Scale);
	void SetMaxSize();
	void SetFBParam_FromCharacter(int32 CharaID, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, enum class EJOB_TYPE JobID, bool IsLoop, const struct FVector2D& DrawSize, bool* Success);
	void SetFBParam_FromNPC(class FName Label, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, const struct FVector2D& DrawSize, bool IsLoop, bool* Success);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_FBPart(int32 EntryPoint);
};

}


