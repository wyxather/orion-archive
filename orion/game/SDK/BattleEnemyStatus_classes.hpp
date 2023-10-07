#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x288 (0x548 - 0x2C0)
// WidgetBlueprintGeneratedClass BattleEnemyStatus.BattleEnemyStatus_C
class UBattleEnemyStatus_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Bufficon_Loop;                                     // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      WeakShuffle_Open;                                  // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      WeakShuffle_Close;                                 // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Bufficon_FadeOut;                                  // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Bufficon_FadeIn;                                   // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        AlwaysDetail;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleSuccessRate_C*                  BattleSuccessRate;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleUnableAttack_C*                 BattleUnableAttack;                                // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBreakStatusIcon_C*                    BreakStatusIcon;                                   // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BuffIconPanel;                                     // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          CharacterName;                                     // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             FrashLine01;                                       // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          HideDetail;                                        // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Panel_FrashLine;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             QM_Left;                                           // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             QM_Light;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             QM_right;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Root;                                              // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             ShuffleEf01;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             ShuffleEf02;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             ShuffleEf03;                                       // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ShuffleEffectPanel;                                // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuffIcon_C*                           StateIcon01;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuffIcon_C*                           StateIcon02;                                       // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          TextWeakUI;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakLockBigIcon_C*                    WeakLockBigIcon_10;                                // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakLockBigIcon_C*                    WeakLockBigIcon_11;                                // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakLockBigIcon_C*                    WeakLockBigIcon_12;                                // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakLockBigIcon_C*                    WeakLockBigIcon_01;                                // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakLockBigIcon_C*                    WeakLockBigIcon_02;                                // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakLockBigIcon_C*                    WeakLockBigIcon_03;                                // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakLockBigIcon_C*                    WeakLockBigIcon_04;                                // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakLockBigIcon_C*                    WeakLockBigIcon_05;                                // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakLockBigIcon_C*                    WeakLockBigIcon_06;                                // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakLockBigIcon_C*                    WeakLockBigIcon_07;                                // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakLockBigIcon_C*                    WeakLockBigIcon_08;                                // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakLockBigIcon_C*                    WeakLockBigIcon_09;                                // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakStatusIcon_C*                     WeakStatusIcon_10;                                 // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakStatusIcon_C*                     WeakStatusIcon_11;                                 // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakStatusIcon_C*                     WeakStatusIcon_00;                                 // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakStatusIcon_C*                     WeakStatusIcon_01;                                 // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakStatusIcon_C*                     WeakStatusIcon_02;                                 // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakStatusIcon_C*                     WeakStatusIcon_03;                                 // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakStatusIcon_C*                     WeakStatusIcon_04;                                 // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakStatusIcon_C*                     WeakStatusIcon_05;                                 // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakStatusIcon_C*                     WeakStatusIcon_06;                                 // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakStatusIcon_C*                     WeakStatusIcon_07;                                 // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakStatusIcon_C*                     WeakStatusIcon_08;                                 // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeakStatusIcon_C*                     WeakStatusIcon_09;                                 // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABattleEnemyBP_C*                      Enemy;                                             // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWeakStatusIcon_C*>             WeakIconList;                                      // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSaveEnemyData                        EnemyInfoData;                                     // 0x470(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_1488[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBuffIcon_C*>                   DiseaseIconList;                                   // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        StatusPanelWidth;                                  // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWeakIconFullOpen;                                // 0x494(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1489[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FExecDiseaseHandler>           DiseaseListForIcon;                                // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        DiseaseIconIndex;                                  // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BuffIconFadeIn;                                    // 0x4AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_148A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentPageIndex;                                  // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PrevDiseaseCnt;                                    // 0x4B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LoopStartDiseaseCnt;                               // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RequestFadeIn;                                     // 0x4BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_148B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ShieldChangeValue;                                 // 0x4C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_148C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                WeakLockIndexList;                                 // 0x4C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        EnableWeakIconNum;                                 // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1491[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWeakLockBigIcon_C*>            WeakLockBigIconList;                               // 0x4E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<bool>                                 WeakLockData;                                      // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsPlayWeakLockAnimation;                           // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsRequestWeakChangeAnimation;                      // 0x501(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1492[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EDISEASE_TYPE>             NewDiseaseList;                                    // 0x508(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         DiseaseIconLooping;                                // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ExecIconChange;                                    // 0x519(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OpenPoison;                                        // 0x51A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Unable_Attack;                                  // 0x51B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1493[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeakStatusIcon_C*                     PoisonStatusIcon;                                  // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          WeaponIconLabel;                                   // 0x528(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          AttributeIconLabel;                                // 0x538(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBattleEnemyStatus_C* GetDefaultObj();

	void InitializeStatusUI();
	void InitializeShuffleParameter();
	void DebugForceEnemyNameVisble();
	void SetIsUnableAttack(bool IsUnableAttack);
	void SetPosition(const struct FVector2D& InPosition);
	void UpdatePoisonIcon();
	void CloseWeakPoison();
	void OpenWeakPoison(int32 Count);
	void SetBribeMoney(int32 Money, bool Negotiate, bool Enough_Money);
	void DiseaseIconChange();
	void UpdateIconLoop(float IconLoopAlpha);
	void SetSuccessRateVisible(bool Visible);
	void SetTameMonsterRate(bool Visible, bool Enable, int32 RateValue);
	void SetStealMoneyRate(bool Visible, bool Settled, bool Enable, int32 RateValue);
	void SetStealItemRate(bool Visible, bool Settled, bool Enable, int32 RateValue);
	void AddNewDisease(enum class EDISEASE_TYPE& DiseaseType);
	void SetEnemyNameVisible(bool Visible);
	void CallBackWeakLockAnimFinish();
	void PlayWeakChangeOpen();
	void SetWeakChangeIcon();
	void PlayWeakChangeClose();
	void PlayShieldChange(int32 ChangeValue);
	void SetupDiseaseIcon(TArray<struct FExecDiseaseHandler>& DiseaseList, TArray<class UBuffIcon_C*>& Icon, int32 StartPageIndex, bool Instant);
	void CallBackBuffIconChange();
	void SortDisease_by_Count(TArray<struct FExecDiseaseHandler>& DeiseaseList, TArray<struct FExecDiseaseHandler>* Result);
	void CheckWeaknessOpen(int32 WeakBitmask, int32 AttributeIndex, bool* Result);
	void SetupWeakLock(TArray<bool>& WeaponLock, TArray<bool>& AttributeLock);
	void GetWeakOpenStatus(TArray<bool>* WeaknessOpen);
	void OpenWeakIcon(int32 Index, bool Preparation2nd, int32* AttributeIndex);
	struct FSlateColor GetNameColor();
	void ResetDiseaseIcon();
	void SetLanguage();
	void UpdateDiseaseIcon();
	void ResumeBreak();
	void PlayBreak();
	void UpdateAttackAttribute(TArray<bool>& AttributeList);
	void SetupWeakIcon();
	void UpdateWeakList();
	void CloseEnemyStatus();
	void OpenEnemyStatus();
	void SetEnemySelect(bool Select);
	void SetupCharacter(class ABattleEnemyBP_C* Enemy);
	class FText GetCharacterName();
	void ShieldChangeDelay();
	void Construct();
	void WeakLockAnimDelay();
	void ExecuteUbergraph_BattleEnemyStatus(int32 EntryPoint);
};

}


