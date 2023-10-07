#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x630 - 0x5E8)
// BlueprintGeneratedClass KSGameModeBP.KSGameModeBP_C
class AKSGameModeBP_C : public AKSGameMode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEncountWipe;                                     // 0x5F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EKSLanguage                       OldLanguage;                                       // 0x5F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSkipTitleLogo;                                   // 0x5FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsLoadedFirstData;                                 // 0x5FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C72[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSSimpleLevelLoader*                  Loader;                                            // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllManagerReady;                                   // 0x608(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C73[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                KSDebug;                                           // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ManagerReady;                                      // 0x618(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LoadReady;                                         // 0x619(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C75[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATitlePawn_C*                          TitltePawn;                                        // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_LetterBox_C*                      LetterUI;                                          // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AKSGameModeBP_C* GetDefaultObj();

	void IsLoadReady(bool* Result);
	void IsManagerReady_DEPRICATED(bool* Result);
	void SetLoadReady(bool Ready, bool* Result);
	void SetManagerReady_DEPRICATED(bool Ready, bool* Result);
	void SetAllManagerReady(bool Ready, bool* Result);
	void IsAllManagerReady(bool* Result);
	void SetBalloonManager(class UObject* BalloonManager, bool* Result);
	void GetLoader(class AKSSimpleLevelLoader** Loader);
	void PossessTitlePawn();
	void CreateLetterWidget();
	void Debug_GetStoryMemoryData(TArray<class FString>* TextList, int32 MemoryIndex);
	void Debug_ResetEncountWipeFlag();
	void StartApp();
	void CreateAutoSavingWidget();
	void CreateLoadingWidget();
	void CreateFadeWidget();
	void ReceiveBeginPlay();
	void RemoveTitlePawn();
	void ShowTitle();
	void ExecuteUbergraph_KSGameModeBP(int32 EntryPoint);
};

}


