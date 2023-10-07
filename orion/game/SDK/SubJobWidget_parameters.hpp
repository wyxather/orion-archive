#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1C (0x1C - 0x0)
// Function SubJobWidget.SubJobWidget_C.SetCursorVisible
struct USubJobWidget_C_SetCursorVisible_Params
{
public:
	enum class ESlateVisibility                  Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function SubJobWidget.SubJobWidget_C.ShowFrameCursor
struct USubJobWidget_C_ShowFrameCursor_Params
{
public:
	bool                                         IsShowFrameCursor;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function SubJobWidget.SubJobWidget_C.InitializeIconScale
struct USubJobWidget_C_InitializeIconScale_Params
{
public:
	int32                                        FirstSelectJob;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function SubJobWidget.SubJobWidget_C.GetSelectJobMaxNum
struct USubJobWidget_C_GetSelectJobMaxNum_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function SubJobWidget.SubJobWidget_C.ApplyIconScale
struct USubJobWidget_C_ApplyIconScale_Params
{
public:
	class UJobListItem_C*                        JobIcon;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Angle;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function SubJobWidget.SubJobWidget_C.GetIconAngleCalc
struct USubJobWidget_C_GetIconAngleCalc_Params
{
public:
	int32                                        CurrentIndex;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextIndex;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Clockwise;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F4D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function SubJobWidget.SubJobWidget_C.GetAddAngle
struct USubJobWidget_C_GetAddAngle_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AddAngle;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function SubJobWidget.SubJobWidget_C.Get Icon Move Angle
struct USubJobWidget_C_Get_Icon_Move_Angle_Params
{
public:
	int32                                        MoveCursor;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F54[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ResultAngle;                                       // 0x8(0x10)(Parm, OutParm)
};

// 0xC0 (0xC0 - 0x0)
// Function SubJobWidget.SubJobWidget_C.SetupIconPosition
struct USubJobWidget_C_SetupIconPosition_Params
{
public:
	int32                                        CursorIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x104 (0x104 - 0x0)
// Function SubJobWidget.SubJobWidget_C.UpdateStraightAnimationWithAngleSelectIndex
struct USubJobWidget_C_UpdateStraightAnimationWithAngleSelectIndex_Params
{
public:
	float                                        AddPosX;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AddPosY;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOut;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE4 (0xE4 - 0x0)
// Function SubJobWidget.SubJobWidget_C.UpdateStraightAnimationWithAngle
struct USubJobWidget_C_UpdateStraightAnimationWithAngle_Params
{
public:
	float                                        AddPosX;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AddPosY;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AddAngle;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOut;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6C (0x6C - 0x0)
// Function SubJobWidget.SubJobWidget_C.GetStraightAnimData
struct USubJobWidget_C_GetStraightAnimData_Params
{
public:
	bool                                         IsStart;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F56[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AddStraightPosX;                                   // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AddStraightPosY;                                   // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function SubJobWidget.SubJobWidget_C.UpdateStraightAnimation
struct USubJobWidget_C_UpdateStraightAnimation_Params
{
public:
	float                                        AddPosX;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AddPosY;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function SubJobWidget.SubJobWidget_C.GetNextIndex
struct USubJobWidget_C_GetNextIndex_Params
{
public:
	int32                                        Current;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextIndex;                                         // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function SubJobWidget.SubJobWidget_C.GetSelectJobItemNum
struct USubJobWidget_C_GetSelectJobItemNum_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x45 (0x45 - 0x0)
// Function SubJobWidget.SubJobWidget_C.GetSelectJobEquipmentCharacters
struct USubJobWidget_C_GetSelectJobEquipmentCharacters_Params
{
public:
	TArray<int32>                                CharacterID;                                       // 0x0(0x10)(Parm, OutParm)
	bool                                         NotEquip;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function SubJobWidget.SubJobWidget_C.GetRemaingItems
struct USubJobWidget_C_GetRemaingItems_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsZero;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x55 (0x55 - 0x0)
// Function SubJobWidget.SubJobWidget_C.IsEquipItem
struct USubJobWidget_C_IsEquipItem_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanEquip;                                          // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function SubJobWidget.SubJobWidget_C.GetReleaseFlag
struct USubJobWidget_C_GetReleaseFlag_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Release;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x370 (0x370 - 0x0)
// Function SubJobWidget.SubJobWidget_C.Setup Widget New
struct USubJobWidget_C_Setup_Widget_New_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         IsPlaySelectAction;                                // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function SubJobWidget.SubJobWidget_C.SetSelectIcon
struct USubJobWidget_C_SetSelectIcon_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function SubJobWidget.SubJobWidget_C.SetFocusIconSelectMode
struct USubJobWidget_C_SetFocusIconSelectMode_Params
{
public:
	bool                                         IsDisable;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function SubJobWidget.SubJobWidget_C.GetSelectJobEquipmentCharacter
struct USubJobWidget_C_GetSelectJobEquipmentCharacter_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function SubJobWidget.SubJobWidget_C.IsPermission
struct USubJobWidget_C_IsPermission_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Permission;                                        // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function SubJobWidget.SubJobWidget_C.IsIconAnimationPlaying
struct USubJobWidget_C_IsIconAnimationPlaying_Params
{
public:
	bool                                         IsPlayingAnimation;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function SubJobWidget.SubJobWidget_C.StartIconAnimation
struct USubJobWidget_C_StartIconAnimation_Params
{
public:
	int32                                        MoveCursor;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D (0x3D - 0x0)
// Function SubJobWidget.SubJobWidget_C.UpdateIconAnimation
struct USubJobWidget_C_UpdateIconAnimation_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFinish;                                          // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function SubJobWidget.SubJobWidget_C.Get Icon Move Angle Old
struct USubJobWidget_C_Get_Icon_Move_Angle_Old_Params
{
public:
	int32                                        MoveCursor;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ResultAngle;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function SubJobWidget.SubJobWidget_C.GetIconStartAngle
struct USubJobWidget_C_GetIconStartAngle_Params
{
public:
	TArray<float>                                ResultData;                                        // 0x0(0x10)(Parm, OutParm)
};

// 0xDA (0xDA - 0x0)
// Function SubJobWidget.SubJobWidget_C.GetSelectJob
struct USubJobWidget_C_GetSelectJob_Params
{
public:
	int32                                        IsSelectJobID;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function SubJobWidget.SubJobWidget_C.SetupIconPosition_old
struct USubJobWidget_C_SetupIconPosition_old_Params
{
public:
	int32                                        CursorIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AddAngle;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function SubJobWidget.SubJobWidget_C.OutFocus
struct USubJobWidget_C_OutFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3D0 (0x3D0 - 0x0)
// Function SubJobWidget.SubJobWidget_C.Setup Widget Old DEPLECATED
struct USubJobWidget_C_Setup_Widget_Old_DEPLECATED_Params
{
public:
	struct FSavePlayerCharacterData              CharacterData;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x3C (0x3C - 0x0)
// Function SubJobWidget.SubJobWidget_C.Tick
struct USubJobWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SubJobWidget.SubJobWidget_C.OnAnimationFinished
struct USubJobWidget_C_OnAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function SubJobWidget.SubJobWidget_C.ExecuteUbergraph_SubJobWidget
struct USubJobWidget_C_ExecuteUbergraph_SubJobWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


