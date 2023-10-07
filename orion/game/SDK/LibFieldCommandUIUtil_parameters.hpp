#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x28 (0x28 - 0x0)
// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.GetHelpWindowGuide
struct ULibFieldCommandUIUtil_C_GetHelpWindowGuide_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuideData                            Guide;                                             // 0x8(0x10)(Parm, OutParm, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.GetFcIconColor
struct ULibFieldCommandUIUtil_C_GetFcIconColor_Params
{
public:
	enum class EFieldCommandCategory             FcCategory;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F5F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           Color;                                             // 0x10(0x28)(Parm, OutParm)
};

// 0x2A2 (0x2A2 - 0x0)
// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.SetNPCStatusWidget
struct ULibFieldCommandUIUtil_C_SetNPCStatusWidget_Params
{
public:
	class UNpcPropertyComponent*                 NpcProperty;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               StatusWidget;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x81 (0x81 - 0x0)
// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.OpenFollowTwoNpcDialogWithPlayerStatus
struct ULibFieldCommandUIUtil_C_OpenFollowTwoNpcDialogWithPlayerStatus_Params
{
public:
	class UNpcPropertyComponent*                 LeftNpcProperty;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               LeftNpcStatus;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNpcPropertyComponent*                 RightNpcProperty;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               RightNpcWidget;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerStatusPanel_C*                  PlayerStatus;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCFollowChangePartsWidget_C*         ChangeCaptionWidgfet;                              // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Detail;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FText>                          Button;                                            // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	FDelegateProperty_                           OnClosedCallback;                                  // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	class UObject*                               __WorldContext;                                    // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.OpenFollowTwoNpcDialog
struct ULibFieldCommandUIUtil_C_OpenFollowTwoNpcDialog_Params
{
public:
	class UNpcPropertyComponent*                 LeftNpcProperty;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               LeftNpcStatus;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNpcPropertyComponent*                 RightNpcProperty;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               RightNpcWidget;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCFollowChangePartsWidget_C*         ChangeCaptionWidgfet;                              // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Detail;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FText>                          Button;                                            // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	FDelegateProperty_                           OnClosedCallback;                                  // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	class UObject*                               __WorldContext;                                    // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.OpenFollowNpcDialogWithPlayerStatus
struct ULibFieldCommandUIUtil_C_OpenFollowNpcDialogWithPlayerStatus_Params
{
public:
	class UNpcPropertyComponent*                 NpcProperty;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               NpcStatus;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerStatusPanel_C*                  PlayerStatus;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Detail;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FText>                          Button;                                            // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	FDelegateProperty_                           OnClosedCallback;                                  // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	class UObject*                               __WorldContext;                                    // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function LibFieldCommandUIUtil.LibFieldCommandUIUtil_C.OpenFollowNpcDialog
struct ULibFieldCommandUIUtil_C_OpenFollowNpcDialog_Params
{
public:
	class UNpcPropertyComponent*                 NpcProperty;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               NpcStatus;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Detail;                                            // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FText>                          Button;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	FDelegateProperty_                           OnClosedCallback;                                  // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	class UObject*                               __WorldContext;                                    // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


