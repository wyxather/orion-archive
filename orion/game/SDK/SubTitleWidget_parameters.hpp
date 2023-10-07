#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x4 (0x4 - 0x0)
// Function SubTitleWidget.SubTitleWidget_C.SetTextOpacity
struct USubTitleWidget_C_SetTextOpacity_Params
{
public:
	float                                        Opacity;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function SubTitleWidget.SubTitleWidget_C.Stop
struct USubTitleWidget_C_Stop_Params
{
public:
	bool                                         IsNext;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function SubTitleWidget.SubTitleWidget_C.CheckNextBlockWithGroupIndex
struct USubTitleWidget_C_CheckNextBlockWithGroupIndex_Params
{
public:
	bool                                         IsNext;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function SubTitleWidget.SubTitleWidget_C.SequenceRequestCallback
struct USubTitleWidget_C_SequenceRequestCallback_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x85 (0x85 - 0x0)
// Function SubTitleWidget.SubTitleWidget_C.ChangeEventFlags
struct USubTitleWidget_C_ChangeEventFlags_Params
{
public:
	TMap<class FName, bool>                      Flags;                                             // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x14 (0x14 - 0x0)
// Function SubTitleWidget.SubTitleWidget_C.FadeBackGround
struct USubTitleWidget_C_FadeBackGround_Params
{
public:
	bool                                         IsFadeIn;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function SubTitleWidget.SubTitleWidget_C.IsActive
struct USubTitleWidget_C_IsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function SubTitleWidget.SubTitleWidget_C.GetViewTime
struct USubTitleWidget_C_GetViewTime_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E (0x2E - 0x0)
// Function SubTitleWidget.SubTitleWidget_C.UpdateOpenSeq
struct USubTitleWidget_C_UpdateOpenSeq_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function SubTitleWidget.SubTitleWidget_C.CheckNextBlock
struct USubTitleWidget_C_CheckNextBlock_Params
{
public:
	bool                                         IsNext;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function SubTitleWidget.SubTitleWidget_C.Tick
struct USubTitleWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function SubTitleWidget.SubTitleWidget_C.ExecuteUbergraph_SubTitleWidget
struct USubTitleWidget_C_ExecuteUbergraph_SubTitleWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


