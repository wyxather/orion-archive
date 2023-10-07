#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x90 (0x90 - 0x0)
// Function NarrationMessageWidget.NarrationMessageWidget_C.CheckNewLineRemove
struct UNarrationMessageWidget_C_CheckNewLineRemove_Params
{
public:
	class FText                                  Body;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  RetText;                                           // 0x18(0x18)(Parm, OutParm)
};

// 0x17 (0x17 - 0x0)
// Function NarrationMessageWidget.NarrationMessageWidget_C.UpdateState
struct UNarrationMessageWidget_C_UpdateState_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function NarrationMessageWidget.NarrationMessageWidget_C.GetTextEndOffset
struct UNarrationMessageWidget_C_GetTextEndOffset_Params
{
public:
	enum class ETextJustify                      Justification;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_168B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             TextSize;                                          // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             TmpOffset1;                                        // 0xC(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function NarrationMessageWidget.NarrationMessageWidget_C.GetTextStartOffset
struct UNarrationMessageWidget_C_GetTextStartOffset_Params
{
public:
	enum class ETextJustify                      Justification;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_168C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             TextSize;                                          // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             TmpOffset1;                                        // 0xC(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F8 (0x1F8 - 0x0)
// Function NarrationMessageWidget.NarrationMessageWidget_C.SettingText
struct UNarrationMessageWidget_C_SettingText_Params
{
public:
	class FText                                  Body;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        DrawTime;                                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextJustify                      Justification;                                     // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function NarrationMessageWidget.NarrationMessageWidget_C.PlayVoice
struct UNarrationMessageWidget_C_PlayVoice_Params
{
public:
	struct FTalkVoice                            VoiceData;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x44 (0x44 - 0x0)
// Function NarrationMessageWidget.NarrationMessageWidget_C.SetTime
struct UNarrationMessageWidget_C_SetTime_Params
{
public:
	float                                        DefaultTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function NarrationMessageWidget.NarrationMessageWidget_C.PlayMessage
struct UNarrationMessageWidget_C_PlayMessage_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        TextJustification;                                 // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableAnimation;                                  // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_168E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DrawTime;                                          // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_168F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalkVoice                            VoiceData;                                         // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function NarrationMessageWidget.NarrationMessageWidget_C.SetAnimTime
struct UNarrationMessageWidget_C_SetAnimTime_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function NarrationMessageWidget.NarrationMessageWidget_C.Tick
struct UNarrationMessageWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NarrationMessageWidget.NarrationMessageWidget_C.Debug_Localization
struct UNarrationMessageWidget_C_Debug_Localization_Params
{
public:
	bool                                         IsDebug;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x151 (0x151 - 0x0)
// Function NarrationMessageWidget.NarrationMessageWidget_C.ExecuteUbergraph_NarrationMessageWidget
struct UNarrationMessageWidget_C_ExecuteUbergraph_NarrationMessageWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


