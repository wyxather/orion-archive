#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.PreCloseAction
struct UMainMenuMissionRecord_C_PreCloseAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetStatus
struct UMainMenuMissionRecord_C_SetStatus_Params
{
public:
	enum class EMAINMENU_SEQ_MISSIONRECORD       Status;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.InsertSpaceByLanguage
struct UMainMenuMissionRecord_C_InsertSpaceByLanguage_Params
{
public:
	class UKSTextBlock*                          TextBlock;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UnPlayableProlougeReminiscenceCallback
struct UMainMenuMissionRecord_C_UnPlayableProlougeReminiscenceCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ProfessorPrologeConfirmDialog
struct UMainMenuMissionRecord_C_ProfessorPrologeConfirmDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.GetReleasedBarPartyChatLabels
struct UMainMenuMissionRecord_C_GetReleasedBarPartyChatLabels_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x9C (0x9C - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.GetReleasedPartyChatLabelsByMainStoryIds
struct UMainMenuMissionRecord_C_GetReleasedPartyChatLabelsByMainStoryIds_Params
{
public:
	TArray<int32>                                MainStoryIds;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetWorldMap
struct UMainMenuMissionRecord_C_SetWorldMap_Params
{
public:
	class UWBP_3DWorldMapWidget_C*               WorldMapUI;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.IsProlougeReminiscence
struct UMainMenuMissionRecord_C_IsProlougeReminiscence_Params
{
public:
	int32                                        CategoryIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              CharacterID;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SearchNextPage
struct UMainMenuMissionRecord_C_SearchNextPage_Params
{
public:
	bool                                         Next;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x168 (0x168 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.GetReminisceneDetailText
struct UMainMenuMissionRecord_C_GetReminisceneDetailText_Params
{
public:
	enum class EPlayableCharacterID              PlayerID;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C77[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DetaiText;                                         // 0x8(0x18)(Parm, OutParm)
};

// 0x25 (0x25 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CheckOpenReminiscence
struct UMainMenuMissionRecord_C_CheckOpenReminiscence_Params
{
public:
	bool                                         Open;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E (0x1E - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CheckExtraStoryOpen
struct UMainMenuMissionRecord_C_CheckExtraStoryOpen_Params
{
public:
	bool                                         IsOpen;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.PartyChatReady
struct UMainMenuMissionRecord_C_PartyChatReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.PartyChatStart
struct UMainMenuMissionRecord_C_PartyChatStart_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.PartyChatFinish
struct UMainMenuMissionRecord_C_PartyChatFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1DC (0x1DC - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateExtraMissionListItem
struct UMainMenuMissionRecord_C_CreateExtraMissionListItem_Params
{
public:
	enum class EEXTRA_STORY_CATEGORY             ExCategory;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateExtraMissionListCategory
struct UMainMenuMissionRecord_C_CreateExtraMissionListCategory_Params
{
public:
	enum class EEXTRA_STORY_CATEGORY             ExtraCategory;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x348 (0x348 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ExtraMissionEvent
struct UMainMenuMissionRecord_C_ExtraMissionEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C92[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateExtraMissionList
struct UMainMenuMissionRecord_C_CreateExtraMissionList_Params
{
public:
	enum class EEXTRA_STORY_CATEGORY             ExtraCategory;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x36 (0x36 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetMainStoryGuideData
struct UMainMenuMissionRecord_C_SetMainStoryGuideData_Params
{
public:
	int32                                        CategoryIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x45 (0x45 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.Check Party Chat List
struct UMainMenuMissionRecord_C_Check_Party_Chat_List_Params
{
public:
	enum class EMISSIONRECORD_TYPE               Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3E (0x3E - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UpdateCategoryIcon
struct UMainMenuMissionRecord_C_UpdateCategoryIcon_Params
{
public:
	int32                                        BeforeIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextIndex;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x55 (0x55 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ChangeMissionType
struct UMainMenuMissionRecord_C_ChangeMissionType_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ProlougeReminiscenceCallback
struct UMainMenuMissionRecord_C_ProlougeReminiscenceCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.PlayTheaterEventRequestCallback
struct UMainMenuMissionRecord_C_PlayTheaterEventRequestCallback_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetReOpenFlag
struct UMainMenuMissionRecord_C_SetReOpenFlag_Params
{
public:
	bool                                         MissionReOpen;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.IsChangeStateOpenFinish
struct UMainMenuMissionRecord_C_IsChangeStateOpenFinish_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetReference
struct UMainMenuMissionRecord_C_SetReference_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ReOpenList
struct UMainMenuMissionRecord_C_ReOpenList_Params
{
public:
	class UChapterListWidget_C*                  TargetList;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2AD (0x2AD - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.GetAllAreaListItemData
struct UMainMenuMissionRecord_C_GetAllAreaListItemData_Params
{
public:
	TArray<struct FMAINMENU_MISSION_RECORD_DATA> MissionList;                                       // 0x0(0x10)(Parm, OutParm)
	TArray<struct FMJListWidgetItemData>         ItemList;                                          // 0x10(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ToWorldMap
struct UMainMenuMissionRecord_C_ToWorldMap_Params
{
public:
	bool                                         ToWorldMap;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.IsEventPreview
struct UMainMenuMissionRecord_C_IsEventPreview_Params
{
public:
	bool                                         EventPreview;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SearchNextTypeData
struct UMainMenuMissionRecord_C_SearchNextTypeData_Params
{
public:
	int32                                        Type;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PrebMode;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CA3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NextTypePos;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ListSetupCommon
struct UMainMenuMissionRecord_C_ListSetupCommon_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                         IsStoryOnly;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x235 (0x235 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.GetAreaListItemData
struct UMainMenuMissionRecord_C_GetAreaListItemData_Params
{
public:
	int32                                        AreaID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CAB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMAINMENU_MISSION_RECORD_DATA> MissionList;                                       // 0x8(0x10)(Parm, OutParm)
	TArray<struct FMJListWidgetItemData>         ItemList;                                          // 0x18(0x10)(Parm, OutParm)
};

// 0x4E8 (0x4E8 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SubMissionEvent
struct UMainMenuMissionRecord_C_SubMissionEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CAC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateSubMissionListItem
struct UMainMenuMissionRecord_C_CreateSubMissionListItem_Params
{
public:
	int32                                        AreaID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateSubMissionListCategory
struct UMainMenuMissionRecord_C_CreateSubMissionListCategory_Params
{
public:
	int32                                        AreaID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateSubMissionList
struct UMainMenuMissionRecord_C_CreateSubMissionList_Params
{
public:
	int32                                        AreaID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetHeaderFooterText
struct UMainMenuMissionRecord_C_SetHeaderFooterText_Params
{
public:
	class FName                                  HeaderTextLabel;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FooterTextLabel;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    FooterGuide;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetHeaderFooterUI
struct UMainMenuMissionRecord_C_SetHeaderFooterUI_Params
{
public:
	class UMenuHeader_C*                         HeaderUI;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         FooterUI;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12C (0x12C - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UpdateGaugePosition
struct UMainMenuMissionRecord_C_UpdateGaugePosition_Params
{
public:
	float                                        Tick;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFinish;                                          // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPlayFocus;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA1 (0xA1 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetGaugeMoveData
struct UMainMenuMissionRecord_C_SetGaugeMoveData_Params
{
public:
	TArray<float>                                XPositionData;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         GaugeMoveRight;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetGaugeMove
struct UMainMenuMissionRecord_C_SetGaugeMove_Params
{
public:
	bool                                         GaugeMoveRight;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMAINMENU_SEQ_MISSIONRECORD       MoveEndRetState;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CB4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                XPositionData;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x65 (0x65 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetGaugePositionSort
struct UMainMenuMissionRecord_C_SetGaugePositionSort_Params
{
public:
	TArray<float>                                SortYPostion;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x31 (0x31 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UpdateCursorSelect
struct UMainMenuMissionRecord_C_UpdateCursorSelect_Params
{
public:
	bool                                         IsMoveRight;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x370 (0x370 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.MainMissionEvent
struct UMainMenuMissionRecord_C_MainMissionEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CB7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdxInAll;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E4 (0x2E4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateMainMissionListItem
struct UMainMenuMissionRecord_C_CreateMainMissionListItem_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateMainMissionListCategory
struct UMainMenuMissionRecord_C_CreateMainMissionListCategory_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateMainMissionList
struct UMainMenuMissionRecord_C_CreateMainMissionList_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B1 (0x2B1 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.TickEvent
struct UMainMenuMissionRecord_C_TickEvent_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.IsRunning
struct UMainMenuMissionRecord_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnRightAxisX
struct UMainMenuMissionRecord_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnRightAxisY
struct UMainMenuMissionRecord_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnLeftAxisX
struct UMainMenuMissionRecord_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnLeftAxisY
struct UMainMenuMissionRecord_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnGamePadAxisX
struct UMainMenuMissionRecord_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnGamePadAxisY
struct UMainMenuMissionRecord_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnListPaging
struct UMainMenuMissionRecord_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.WorldMapSlowCursorX
struct UMainMenuMissionRecord_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.WorldMapSlowCursorY
struct UMainMenuMissionRecord_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.HelpScrollAxis
struct UMainMenuMissionRecord_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.MainMissionPlayConfirmCallback
struct UMainMenuMissionRecord_C_MainMissionPlayConfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ExtraMissionPlayConfirmCallback
struct UMainMenuMissionRecord_C_ExtraMissionPlayConfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C7 (0x1C7 - 0x0)
// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ExecuteUbergraph_MainMenuMissionRecord
struct UMainMenuMissionRecord_C_ExecuteUbergraph_MainMenuMissionRecord_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


