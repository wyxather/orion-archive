#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x440 (0x7A0 - 0x360)
// WidgetBlueprintGeneratedClass MainMenuMissionRecord.MainMenuMissionRecord_C
class UMainMenuMissionRecord_C : public UStoryRecordBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      MissionWidgetChangeExtra;                          // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MissionWidgetChangeMain;                           // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MissionWidgetChangeSub;                            // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MissionWidgetListOut;                              // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MissionWidgetListIn;                               // 0x388(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MissionWidgetClose;                                // 0x390(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MissionWidgetOpen;                                 // 0x398(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             ArrowLeft;                                         // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             ArrowRight_Main;                                   // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ArrowRoot;                                         // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             BackMod;                                           // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Border;                                            // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChapterListWidget_C*                  ChapterListWidget;                                 // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          ExtraPanel;                                        // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_0;                                           // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_2;                                           // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItemTextArea_C*                   ListItemTextArea;                                  // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeCoupling_C* MainMenuMissionRecordGaugeCoupling_1;              // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeCoupling_C* MainMenuMissionRecordGaugeCoupling_2;              // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeCoupling_C* MainMenuMissionRecordGaugeCoupling_3;              // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeCoupling_C* MainMenuMissionRecordGaugeCoupling_4;              // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeExtra_C*    MainMenuMissionRecordGaugeExtra;                   // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuRecordStoryMissionIcon_C*     MainMenuRecordStoryMissionIcon;                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuRecordStoryMissionIcon_C*     MainMenuRecordStoryMissionIcon_1;                  // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuRecordStoryMissionIcon_C*     MainMenuRecordStoryMissionIcon_2;                  // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MainMissionPanel;                                  // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeMain_C*     MainSelect01;                                      // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeMain_C*     MainSelect02;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeMain_C*     MainSelect03;                                      // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeMain_C*     MainSelect04;                                      // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeMain_C*     MainSelect05;                                      // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeMain_C*     MainSelect06;                                      // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeMain_C*     MainSelect07;                                      // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeMain_C*     MainSelect08;                                      // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          SubMissionPanel;                                   // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeSub_C*      SubSelect01;                                       // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeSub_C*      SubSelect02;                                       // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeSub_C*      SubSelect03;                                       // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeSub_C*      SubSelect04;                                       // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeSub_C*      SubSelect05;                                       // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeSub_C*      SubSelect06;                                       // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeSub_C*      SubSelect07;                                       // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeSub_C*      SubSelect08;                                       // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuMissionRecordGaugeSub_C*      SubSelect09;                                       // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             TopLine;                                           // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             UnderLine;                                         // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenuStoryRecordPartyChat_C*   WBP_MainMenuStoryRecordPartyChat;                  // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EMAINMENU_SEQ_MISSIONRECORD       Status;                                            // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CF2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPlayableCharacterID>      ShowCharacter;                                     // 0x4E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMainMenuMissionRecordGaugeBase_C*> GaugeList;                                         // 0x4F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        SelectPos;                                         // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CF3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FListWidgetCategory                   ListWidgetCategory;                                // 0x510(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FMJListWidgetItemData>         ListWidgetItem;                                    // 0x568(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FMAINMENU_MISSION_RECORD_DATA> SubTaskInfo;                                       // 0x578(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                MainMissionGaugeXPos;                              // 0x588(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<float>                                SubMissionGaugeXPos;                               // 0x598(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<int32>                                ShowArea;                                          // 0x5A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        OutSideXPosLeft;                                   // 0x5B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutSideXPosRight;                                  // 0x5BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GaugeMoveRight;                                    // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EMAINMENU_SEQ_MISSIONRECORD       MoveEndRetState;                                   // 0x5C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanotGaugeMove;                                    // 0x5C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CF4[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GaugeMoveTime;                                     // 0x5C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveTickTime;                                      // 0x5C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CF5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CursorMoveBeforeXPos;                              // 0x5D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                CursorMoveAfterXPos;                               // 0x5E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  PlayEventName;                                     // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReOpenSelectPos;                                   // 0x5F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CF6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuHeader_C*                         TmpHeaderUI;                                       // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         TmpFooterUI;                                       // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    GaugeSelectGuideMain;                              // 0x610(0x10)(Edit, BlueprintVisible)
	class FName                                  AllAreaIconLabel;                                  // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    GaugeSelectGuideMainNoMove;                        // 0x628(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GaugeSelectGuideSub;                               // 0x638(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GaugeSelectGuideSub_WithoutExtra;                  // 0x648(0x10)(Edit, BlueprintVisible)
	bool                                         IsOpenMainMission;                                 // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CFB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AllAreaName;                                       // 0x65C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ToWorldMapFlag;                                    // 0x664(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ReOpenFlag;                                        // 0x665(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Checker;                                           // 0x666(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFirstSetup;                                      // 0x667(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        MissionListSelectIdx;                              // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SubMissionAreaIndex;                               // 0x66C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    GaugeSelectGuideSubNoMove;                         // 0x670(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GaugeSelectGuideSubNoMove_WithoutExtra;            // 0x680(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GaugeListGuideMain;                                // 0x690(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GaugeListGuideSub;                                 // 0x6A0(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GaugeListGuideMain_Prolouge;                       // 0x6B0(0x10)(Edit, BlueprintVisible)
	TArray<struct FListWidgetCategory>           ChapterList;                                       // 0x6C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        RecordType;                                        // 0x6D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CFC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMainMenuRecordStoryMissionIcon_C*> CategoryList;                                      // 0x6D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<int32>                                MainStoryId;                                       // 0x6E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FMAINMENU_MISSION_RECORD_DATA> MainTaskList;                                      // 0x6F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    GaugeListGuideCategoySelect;                       // 0x708(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GaugeListGuidePartyChatList;                       // 0x718(0x10)(Edit, BlueprintVisible)
	TArray<float>                                ExtraStoryGaugeXPos;                               // 0x728(0x10)(Edit, BlueprintVisible, Interp)
	enum class EMISSIONRECORD_TYPE               CurrentMode;                                       // 0x738(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CFD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EEXTRA_STORY_CATEGORY>     ShowExtraCharacter;                                // 0x740(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_3DWorldMapWidget_C*               ThreeDWorldMap;                                    // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WillPlayEvent;                                     // 0x758(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CFE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExtraSizeX;                                        // 0x75C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChapterCategoryIndex;                              // 0x760(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LastSelectedWorldMapLabel;                         // 0x764(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CFF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuideData>                    GaugeSelectExtra;                                  // 0x770(0x10)(Edit, BlueprintVisible)
	TArray<struct FGuideData>                    GaugeSelectGuideExtraNoMove;                       // 0x780(0x10)(Edit, BlueprintVisible)
	class UCurveFloat*                           MoveCurveData;                                     // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayGaugeFocus;                                    // 0x798(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D00[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlayFocusAnimRate;                                 // 0x79C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMainMenuMissionRecord_C* GetDefaultObj();

	bool PreCloseAction();
	void SetStatus(enum class EMAINMENU_SEQ_MISSIONRECORD Status);
	void InsertSpaceByLanguage(class UKSTextBlock* TextBlock);
	void UpdateStoryInfoText();
	void ResetRenderPhase();
	void ProlougeReminiscenceConfirmDialog();
	void OnClosePartyChatList();
	void OnOpenPartyChatList();
	void UnPlayableProlugeReminiscenceDialog_FinalChapter();
	void CheckReminiscence();
	void UnPlayableProlougeReminiscenceCallback(int32 SelectIndex);
	void UnPlayableProlugeReminiscenceDialog();
	void MakeAreaID();
	void OpenProfessorConfirmDialog();
	void ProfessorPrologeConfirmDialog(int32 SelectIndex);
	TArray<class FName> GetReleasedBarPartyChatLabels();
	TArray<class FName> GetReleasedPartyChatLabelsByMainStoryIds(TArray<int32>& MainStoryIds);
	void SetWorldMap(class UWBP_3DWorldMapWidget_C* WorldMapUI);
	void IsProlougeReminiscence(int32 CategoryIndex, enum class EPlayableCharacterID CharacterID, bool* Enable);
	void SearchNextPage(bool Next);
	void InitCategoryIcon();
	void GetReminisceneDetailText(enum class EPlayableCharacterID PlayerID, class FText* DetaiText);
	void CheckOpenReminiscence(bool* Open);
	void SetCategoryIcon();
	void CheckExtraStoryOpen(bool* IsOpen);
	bool PartyChatReady();
	bool PartyChatStart();
	bool PartyChatFinish();
	void ReOpenPartyChatList();
	void SetupFlipbookSelectSelectSelect();
	void SetupFlipbookSelectWait();
	void SetExtraStoryGuideData();
	void SetupFlipbookFocus();
	void CreateExtraMissionListItem(enum class EEXTRA_STORY_CATEGORY ExCategory);
	void CreateExtraMissionListCategory(enum class EEXTRA_STORY_CATEGORY ExtraCategory);
	void ExtraMissionEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void CreateExtraMissionList(enum class EEXTRA_STORY_CATEGORY ExtraCategory);
	void ExtraMissionSetup();
	void SetSubStoryGuideData();
	void SetPartyChatGuideData();
	void SetCategoryGuideData();
	void SetMainStoryGuideData(int32 CategoryIndex);
	void Check_Party_Chat_List(enum class EMISSIONRECORD_TYPE Type, bool* Enable);
	void UpdateCategoryIcon(int32 BeforeIndex, int32 NextIndex);
	void ChangeMissionType(bool IsUp);
	void ProlougeReminiscenceCallback(int32 SelectIndex);
	void ButtonXEvent();
	void PlayProlougeReminiscenceDialog();
	void PlayTheaterEventRequestCallback(enum class EREQUEST_RESULT Result);
	void SetReOpenFlag(bool MissionReOpen);
	bool IsChangeStateOpenFinish();
	bool SetReference();
	void ReOpenList(class UChapterListWidget_C* TargetList);
	void GetAllAreaListItemData(TArray<struct FMAINMENU_MISSION_RECORD_DATA>* MissionList, TArray<struct FMJListWidgetItemData>* ItemList);
	void ShowList();
	void CursorRightEvent();
	void CursorLeftEvent();
	void DecideEvent();
	void CancelEvent();
	void ToWorldMap(bool* ToWorldMap);
	void IsEventPreview(bool* EventPreview);
	void ConstructEvent();
	void LBEvent();
	void RBEvent();
	void SearchNextTypeData(int32 Type, bool PrebMode, int32* NextTypePos);
	void ListSetupCommon(FDelegateProperty_& Delegate, bool IsStoryOnly);
	void GetAreaListItemData(int32 AreaID, TArray<struct FMAINMENU_MISSION_RECORD_DATA>* MissionList, TArray<struct FMJListWidgetItemData>* ItemList);
	void SubMissionEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void CreateSubMissionListItem(int32 AreaID);
	void CreateSubMissionListCategory(int32 AreaID);
	void CreateSubMissionList(int32 AreaID);
	void SetHeaderFooterText(class FName HeaderTextLabel, class FName FooterTextLabel, TArray<struct FGuideData>& FooterGuide);
	void SetHeaderFooterUI(class UMenuHeader_C* HeaderUI, class UMenuFooter_C* FooterUI);
	void UpdateGaugePosition(float Tick, bool* IsFinish, bool* IsPlayFocus);
	void SetGaugeMoveData(TArray<float>& XPositionData, bool& GaugeMoveRight);
	void SetGaugeMove(bool GaugeMoveRight, enum class EMAINMENU_SEQ_MISSIONRECORD MoveEndRetState, TArray<float>& XPositionData);
	void SetGaugePositionSort(TArray<float>& SortYPostion);
	void SubMissionSetup();
	void UpdateCursorSelect(bool IsMoveRight);
	void MainMissionEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll);
	void CreateMainMissionListItem(enum class EPlayableCharacterID CharacterID);
	void CreateMainMissionListCategory(enum class EPlayableCharacterID CharacterID);
	void CreateMainMissionList(enum class EPlayableCharacterID CharacterID);
	void TickEvent(float DeltaTime);
	void MainMissionSetup();
	void Close();
	void Open();
	bool IsRunning();
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonX();
	void OnMenuButtonY();
	void OnMenuButtonStart();
	void OnMenuButtonSelect();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnMenuDecideRepeat();
	void OnMenuCancelRepeat();
	void OnMenuButtonXRepeat();
	void OnMenuButtonYRepeat();
	void OnMenuLBRepeat();
	void OnMenuRBRepeat();
	void OnMenuButtonStartRepeat();
	void OnMenuButtonSelectRepeat();
	void OnRightAxisX(float AxisValue);
	void OnRightAxisY(float AxisValue);
	void OnMenuLStickButton();
	void OnMenuRStickButton();
	void OnLeftAxisX(float AxisValue);
	void OnLeftAxisY(float AxisValue);
	void OnPlusButton();
	void OnMinusButton();
	void OnRightAxisUp();
	void OnRightAxisDown();
	void OnMenuRBRelease();
	void OnGamePadAxisX(float AxisValue);
	void OnGamePadAxisY(float AxisValue);
	void OnCursorUpRelease();
	void OnCursorDownRelease();
	void OnCursorLeftRelease();
	void OnCursorRightRelease();
	void OnAnyButton();
	void OnListPaging(bool IsLeftInput);
	void OnMenuRTrigger();
	void OnMenuLTrigger();
	void OnMenuRightUpRepeat();
	void OnMenuRightDownRepeat();
	void ChangeTimeZone();
	void WorldMapZoomIn();
	void WorldMapZoomOut();
	void WorldMapSlowCursorX(float AxisValue);
	void WorldMapSlowCursorY(float AxisValue);
	void ChangeStatusRight();
	void ChangeStatusLeft();
	void HelpScrollAxis(float AxisaValue);
	void OnAnyKey();
	void UpdateOpening();
	void OnOpenFinish();
	void UpdateMain();
	void UpdateClosing();
	void OnCloseFinish();
	void Construct();
	void UIOpen();
	void UIClose();
	void OnMenuRB();
	void OnMenuLB();
	void OnMenuDecide();
	void OnMenuCancel();
	void OnCursorLeftRepeat();
	void OnCursorRightRepeat();
	void MainMissionPlayConfirmCallback(int32 SelectIndex);
	void OnFinishFadeOut();
	void ExtraMissionPlayConfirmCallback(int32 SelectIndex);
	void ProlougeReminiscenceCallback_Internal();
	void ExecuteUbergraph_MainMenuMissionRecord(int32 EntryPoint);
};

}


