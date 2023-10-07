#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x9 (0x9 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCursorPosition
struct UWBP_3DWorldMapWidgetBase_C_GetCursorPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.CursorRight
struct UWBP_3DWorldMapWidgetBase_C_CursorRight_Params
{
public:
	bool                                         MenuDecide;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.CursorLeft
struct UWBP_3DWorldMapWidgetBase_C_CursorLeft_Params
{
public:
	bool                                         MenuCancel;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.DecideMenu
struct UWBP_3DWorldMapWidgetBase_C_DecideMenu_Params
{
public:
	bool                                         NextState;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.CancelMenu
struct UWBP_3DWorldMapWidgetBase_C_CancelMenu_Params
{
public:
	bool                                         ReturnState;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetMenuRelativePos
struct UWBP_3DWorldMapWidgetBase_C_GetMenuRelativePos_Params
{
public:
	struct FVector2D                             RelativePos;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x560 (0x560 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OnPaint
struct UWBP_3DWorldMapWidgetBase_C_OnPaint_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCursorSlowScale
struct UWBP_3DWorldMapWidgetBase_C_GetCursorSlowScale_Params
{
public:
	struct FVector2D                             Val;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OutFocusWorldMap
struct UWBP_3DWorldMapWidgetBase_C_OutFocusWorldMap_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.FocusWorldMap
struct UWBP_3DWorldMapWidgetBase_C_FocusWorldMap_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4D (0x4D - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateWidgetFromSequencer
struct UWBP_3DWorldMapWidgetBase_C_UpdateWidgetFromSequencer_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetWorldMapActorClass
struct UWBP_3DWorldMapWidgetBase_C_GetWorldMapActorClass_Params
{
public:
	TSoftClassPtr<class AWorldMapActorBase>      WorldMapActorClassRef;                             // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SetBackgroundMode_IconOnly
struct UWBP_3DWorldMapWidgetBase_C_SetBackgroundMode_IconOnly_Params
{
public:
	bool                                         IsHide;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Force;                                             // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SetBackgroundMode
struct UWBP_3DWorldMapWidgetBase_C_SetBackgroundMode_Params
{
public:
	bool                                         IsHide;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Force;                                             // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetAutoRotateSpeed
struct UWBP_3DWorldMapWidgetBase_C_GetAutoRotateSpeed_Params
{
public:
	float                                        Param;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.MakeFooterGuideData
struct UWBP_3DWorldMapWidgetBase_C_MakeFooterGuideData_Params
{
public:
	enum class EWorldMapZoomType                 ZoomType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWorldMapTable                        SelectedIconData;                                  // 0x8(0x90)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FGuideData>                    NewParam;                                          // 0x98(0x10)(Parm, OutParm)
};

// 0x19 (0x19 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.RotateToCenterByWorldMapLabel
struct UWBP_3DWorldMapWidgetBase_C_RotateToCenterByWorldMapLabel_Params
{
public:
	class FName                                  WorldMapLabel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAnimate;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NotFound;                                          // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.IsClosed
struct UWBP_3DWorldMapWidgetBase_C_IsClosed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateWorldMap
struct UWBP_3DWorldMapWidgetBase_C_UpdateWorldMap_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x45 (0x45 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.EaseFastGlobeRotateSpeed
struct UWBP_3DWorldMapWidgetBase_C_EaseFastGlobeRotateSpeed_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.EaseInputValue
struct UWBP_3DWorldMapWidgetBase_C_EaseInputValue_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.IsSpawnedWorldMapActor
struct UWBP_3DWorldMapWidgetBase_C_IsSpawnedWorldMapActor_Params
{
public:
	bool                                         IsSpawned;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWorldMapActorBase*                    SpawnedActor;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetFastRotateGlobeLine
struct UWBP_3DWorldMapWidgetBase_C_GetFastRotateGlobeLine_Params
{
public:
	struct FVector2D                             Param;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetRotationGlobeScale
struct UWBP_3DWorldMapWidgetBase_C_GetRotationGlobeScale_Params
{
public:
	struct FVector2D                             Param;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetFastRotationGlobeScaleMap
struct UWBP_3DWorldMapWidgetBase_C_GetFastRotationGlobeScaleMap_Params
{
public:
	struct FVector2D                             Param;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetMaxGlobeRotation
struct UWBP_3DWorldMapWidgetBase_C_GetMaxGlobeRotation_Params
{
public:
	struct FVector2D                             Param;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCursorSpeedScale
struct UWBP_3DWorldMapWidgetBase_C_GetCursorSpeedScale_Params
{
public:
	struct FVector2D                             Param;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCursorMoveLimit
struct UWBP_3DWorldMapWidgetBase_C_GetCursorMoveLimit_Params
{
public:
	struct FVector2D                             Param;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCursorSnapDuration
struct UWBP_3DWorldMapWidgetBase_C_GetCursorSnapDuration_Params
{
public:
	float                                        Param;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCursorSnapDistance
struct UWBP_3DWorldMapWidgetBase_C_GetCursorSnapDistance_Params
{
public:
	float                                        Param;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E (0x1E - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SetSetectedIcon
struct UWBP_3DWorldMapWidgetBase_C_SetSetectedIcon_Params
{
public:
	class UWorldMapIconBase*                     SelectedIcon;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.IsZooming
struct UWBP_3DWorldMapWidgetBase_C_IsZooming_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.IsFastTraveling
struct UWBP_3DWorldMapWidgetBase_C_IsFastTraveling_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SetFooter
struct UWBP_3DWorldMapWidgetBase_C_SetFooter_Params
{
public:
	class UMenuFooter_C*                         Footer;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SetHeader
struct UWBP_3DWorldMapWidgetBase_C_SetHeader_Params
{
public:
	class UMenuHeader_C*                         Header;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateCursorSnap
struct UWBP_3DWorldMapWidgetBase_C_UpdateCursorSnap_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCenterPosition
struct UWBP_3DWorldMapWidgetBase_C_GetCenterPosition_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateGlobe
struct UWBP_3DWorldMapWidgetBase_C_UpdateGlobe_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA7 (0xA7 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateCamera
struct UWBP_3DWorldMapWidgetBase_C_UpdateCamera_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1BC (0x1BC - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateCursorPosition
struct UWBP_3DWorldMapWidgetBase_C_UpdateCursorPosition_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateSnapProcess
struct UWBP_3DWorldMapWidgetBase_C_UpdateSnapProcess_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3F (0x3F - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.Tick
struct UWBP_3DWorldMapWidgetBase_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetRightAxisX
struct UWBP_3DWorldMapWidgetBase_C_GetRightAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetRightAxisY
struct UWBP_3DWorldMapWidgetBase_C_GetRightAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetGamePadAxisX
struct UWBP_3DWorldMapWidgetBase_C_GetGamePadAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetGamePadAxisY
struct UWBP_3DWorldMapWidgetBase_C_GetGamePadAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetLeftAxisX
struct UWBP_3DWorldMapWidgetBase_C_GetLeftAxisX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetLeftAxisY
struct UWBP_3DWorldMapWidgetBase_C_GetLeftAxisY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SubMenu_WorldMapSlowCursorX
struct UWBP_3DWorldMapWidgetBase_C_SubMenu_WorldMapSlowCursorX_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SubMenu_WorldMapSlowCursorY
struct UWBP_3DWorldMapWidgetBase_C_SubMenu_WorldMapSlowCursorY_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.ExecuteUbergraph_WBP_3DWorldMapWidgetBase
struct UWBP_3DWorldMapWidgetBase_C_ExecuteUbergraph_WBP_3DWorldMapWidgetBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OnSelectIconEvent__DelegateSignature
struct UWBP_3DWorldMapWidgetBase_C_OnSelectIconEvent__DelegateSignature_Params
{
public:
	bool                                         IsSelect;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


