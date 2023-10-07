#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x58 (0x58 - 0x0)
// Function UICommonNotification.UICommonNotification_C.AddRequestToStack
struct UUICommonNotification_C_AddRequestToStack_Params
{
public:
	struct FCommonNotificationParam              NewItem;                                           // 0x0(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x47 (0x47 - 0x0)
// Function UICommonNotification.UICommonNotification_C.UpdateNotificationMessage
struct UUICommonNotification_C_UpdateNotificationMessage_Params
{
public:
	struct FCommonNotificationParam              CommonNotificationParam;                           // 0x0(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x3 (0x3 - 0x0)
// Function UICommonNotification.UICommonNotification_C.HideTemporaryInternal
struct UUICommonNotification_C_HideTemporaryInternal_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWIDGET_TEMPORARY_HIDE_USER       HideUser;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UICommonNotification.UICommonNotification_C.GetIsOpenning
struct UUICommonNotification_C_GetIsOpenning_Params
{
public:
	bool                                         IsOpening;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA1 (0xA1 - 0x0)
// Function UICommonNotification.UICommonNotification_C.SetPause
struct UUICommonNotification_C_SetPause_Params
{
public:
	bool                                         Pause;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function UICommonNotification.UICommonNotification_C.OpenRequest
struct UUICommonNotification_C_OpenRequest_Params
{
public:
	struct FCommonNotificationParam              Request;                                           // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x34 (0x34 - 0x0)
// Function UICommonNotification.UICommonNotification_C.UpdateWait
struct UUICommonNotification_C_UpdateWait_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function UICommonNotification.UICommonNotification_C.AddInfoRequest
struct UUICommonNotification_C_AddInfoRequest_Params
{
public:
	struct FCommonNotificationParam              Request;                                           // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x3C (0x3C - 0x0)
// Function UICommonNotification.UICommonNotification_C.Tick
struct UUICommonNotification_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UICommonNotification.UICommonNotification_C.OnCompleteMainStory
struct UUICommonNotification_C_OnCompleteMainStory_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DCE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC2 (0xC2 - 0x0)
// Function UICommonNotification.UICommonNotification_C.ExecuteUbergraph_UICommonNotification
struct UUICommonNotification_C_ExecuteUbergraph_UICommonNotification_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


