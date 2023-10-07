#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.SetIsDialogOpening
struct UJobStatusWidget_C_SetIsDialogOpening_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.GetIsDialogOpening
struct UJobStatusWidget_C_GetIsDialogOpening_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x140 (0x140 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.ExcludeGuest
struct UJobStatusWidget_C_ExcludeGuest_Params
{
public:
	TArray<struct FSavePlayerCharacterData>      In;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSavePlayerCharacterData>      Out;                                               // 0x10(0x10)(Parm, OutParm)
};

// 0x6C (0x6C - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.JobChangeRemoveSelectedCharaCallback
struct UJobStatusWidget_C_JobChangeRemoveSelectedCharaCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3F0 (0x3F0 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.MakeSubJobChangeText
struct UJobStatusWidget_C_MakeSubJobChangeText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
};

// 0x89 (0x89 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.JobChangeConfirmCallback
struct UJobStatusWidget_C_JobChangeConfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.JobSupportAbilityAcquisitionCallback
struct UJobStatusWidget_C_JobSupportAbilityAcquisitionCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.JobAbilityConfirmCallback
struct UJobStatusWidget_C_JobAbilityConfirmCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B (0x1B - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.GetListFirstCursor
struct UJobStatusWidget_C_GetListFirstCursor_Params
{
public:
	int32                                        ListCursorPos;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.ChangePlayerSubjobChangeNone
struct UJobStatusWidget_C_ChangePlayerSubjobChangeNone_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.ChangeStateSubJobChangeConfirm
struct UJobStatusWidget_C_ChangeStateSubJobChangeConfirm_Params
{
public:
	enum class EMAINMENU_SUBJOB_COMFIRMRETURN    FinishType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayOkSe;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.PreCloseAction
struct UJobStatusWidget_C_PreCloseAction_Params
{
public:
	bool                                         CanClose;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.UpdateJobPoint
struct UJobStatusWidget_C_UpdateJobPoint_Params
{
public:
	int32                                        JobPoint;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x45 (0x45 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.ChangeCharacterCommon
struct UJobStatusWidget_C_ChangeCharacterCommon_Params
{
public:
	bool                                         Increment;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x190 (0x190 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.SetAbilityComparisionParameter
struct UJobStatusWidget_C_SetAbilityComparisionParameter_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        AbilitySlot;                                       // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AbilityID;                                         // 0xF4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.CalcCollectionParam
struct UJobStatusWidget_C_CalcCollectionParam_Params
{
public:
	struct FCharacterParam                       BaseParam;                                         // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FCharacterParam                       JobRevision;                                       // 0x34(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<int32>                                CollectionParam;                                   // 0x68(0x10)(Parm, OutParm)
};

// 0x148 (0x148 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.GetListTitleIcon
struct UJobStatusWidget_C_GetListTitleIcon_Params
{
public:
	enum class EJOB_TYPE                         JobType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1783[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            JobTitleIcon;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12C (0x12C - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.GetCanChangeJobNum
struct UJobStatusWidget_C_GetCanChangeJobNum_Params
{
public:
	int32                                        CanChangeJobNum;                                   // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.CheckCanChangeJobByJobID
struct UJobStatusWidget_C_CheckCanChangeJobByJobID_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanChangeJob;                                      // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1FE (0x1FE - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.CharacterDataUpdate
struct UJobStatusWidget_C_CharacterDataUpdate_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.SetDialogWidgetParts
struct UJobStatusWidget_C_SetDialogWidgetParts_Params
{
public:
	class UJobAbilityConfirmParts_C*             JobAbilityConfirmParts;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x288 (0x288 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.ChangeStateJobAbilityConfirm
struct UJobStatusWidget_C_ChangeStateJobAbilityConfirm_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1785[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FJobLearnAbility                      AbilityState;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x198 (0x198 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.CreateAcquisitionListCategory
struct UJobStatusWidget_C_CreateAcquisitionListCategory_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1786[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FListWidgetCategory                   ListWidgetCategoryData;                            // 0x8(0x58)(Parm, OutParm)
};

// 0x28 (0x28 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.OpenCurrentMainJobAcquisitionAbilityList
struct UJobStatusWidget_C_OpenCurrentMainJobAcquisitionAbilityList_Params
{
public:
	bool                                         PlayAnimation;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC9 (0xC9 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.JobAbilityAcquisitionEvent
struct UJobStatusWidget_C_JobAbilityAcquisitionEvent_Params
{
public:
	enum class ELIST_EVENT_TYPE                  EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1788[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategoryIdx;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIdx;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x198 (0x198 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.SetJobComparisonParameter
struct UJobStatusWidget_C_SetJobComparisonParameter_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x508 (0x508 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.SetupCharacterParameter
struct UJobStatusWidget_C_SetupCharacterParameter_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x31 (0x31 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.ChangeCurrentCharacterSubJob
struct UJobStatusWidget_C_ChangeCurrentCharacterSubJob_Params
{
public:
	int32                                        ChangeJobID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.OpenCurrentSubJobAcquisitionAbilityList
struct UJobStatusWidget_C_OpenCurrentSubJobAcquisitionAbilityList_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayAnimation;                                     // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x27C (0x27C - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.OpenAcquisitionAbilityList
struct UJobStatusWidget_C_OpenAcquisitionAbilityList_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1789[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x8(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         PlayAnimation;                                     // 0xF8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6C (0x6C - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.AddIntArray
struct UJobStatusWidget_C_AddIntArray_Params
{
public:
	TArray<int32>                                Base;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                Add;                                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                Result;                                            // 0x20(0x10)(Parm, OutParm)
};

// 0x2 (0x2 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.IsRunning
struct UJobStatusWidget_C_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2A9 (0x2A9 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.SetupPlayerData
struct UJobStatusWidget_C_SetupPlayerData_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x21 (0x21 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.UpdateCategoryCursor
struct UJobStatusWidget_C_UpdateCategoryCursor_Params
{
public:
	int32                                        NewCursor;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.OpenJobStatus
struct UJobStatusWidget_C_OpenJobStatus_Params
{
public:
	TArray<struct FSavePlayerCharacterData>      CharacterData;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UListWidget_C*                         AbilityAcquisitionList;                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.OnRightAxisX
struct UJobStatusWidget_C_OnRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.OnRightAxisY
struct UJobStatusWidget_C_OnRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.OnLeftAxisX
struct UJobStatusWidget_C_OnLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.OnLeftAxisY
struct UJobStatusWidget_C_OnLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.OnGamePadAxisX
struct UJobStatusWidget_C_OnGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.OnGamePadAxisY
struct UJobStatusWidget_C_OnGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.OnListPaging
struct UJobStatusWidget_C_OnListPaging_Params
{
public:
	bool                                         IsLeftInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.WorldMapSlowCursorX
struct UJobStatusWidget_C_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.WorldMapSlowCursorY
struct UJobStatusWidget_C_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.HelpScrollAxis
struct UJobStatusWidget_C_HelpScrollAxis_Params
{
public:
	float                                        AxisaValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.Tick
struct UJobStatusWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function JobStatusWidget.JobStatusWidget_C.ExecuteUbergraph_JobStatusWidget
struct UJobStatusWidget_C_ExecuteUbergraph_JobStatusWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


