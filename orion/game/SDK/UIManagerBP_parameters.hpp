#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x12 (0x12 - 0x0)
// Function UIManagerBP.UIManagerBP_C.IsWidgetRunning
struct AUIManagerBP_C_IsWidgetRunning_Params
{
public:
	bool                                         IsRunning;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EKSUIKind                         Kind;                                              // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function UIManagerBP.UIManagerBP_C.CloseMenuCommon
struct AUIManagerBP_C_CloseMenuCommon_Params
{
public:
	enum class EKSUIKind                         Kind;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function UIManagerBP.UIManagerBP_C.ForceCloseMenuCommon
struct AUIManagerBP_C_ForceCloseMenuCommon_Params
{
public:
	enum class EKSUIKind                         Kind;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA9 (0xA9 - 0x0)
// Function UIManagerBP.UIManagerBP_C.CloseDialog
struct AUIManagerBP_C_CloseDialog_Params
{
public:
	bool                                         OutIsSelected;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EF3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OutFocusIndex;                                     // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x94 (0x94 - 0x0)
// Function UIManagerBP.UIManagerBP_C.OpenDialog
struct AUIManagerBP_C_OpenDialog_Params
{
public:
	struct FKSUICommonDialogParam                InParam;                                           // 0x0(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UKSUserWidgetBase*                     ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function UIManagerBP.UIManagerBP_C.GetPartsWidgetClass
struct AUIManagerBP_C_GetPartsWidgetClass_Params
{
public:
	enum class EKSUIPartsKind                    Kind;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EF5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UUserWidget>             ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UIManagerBP.UIManagerBP_C.ReceiveTick
struct AUIManagerBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function UIManagerBP.UIManagerBP_C.ExecuteUbergraph_UIManagerBP
struct AUIManagerBP_C_ExecuteUbergraph_UIManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


