#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x24 (0x24 - 0x0)
// Function RadarMapIconWidgets.RadarMapIconWidgets_C.SetLevelTriggerIcon
struct URadarMapIconWidgets_C_SetLevelTriggerIcon_Params
{
public:
	enum class EGameColor                        IconColor;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RadarMapIconWidgets.RadarMapIconWidgets_C.GetObjectType
struct URadarMapIconWidgets_C_GetObjectType_Params
{
public:
	enum class ERADARMAP_ICON_OBJ_TYPE           Obj_Type;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function RadarMapIconWidgets.RadarMapIconWidgets_C.GetIconType
struct URadarMapIconWidgets_C_GetIconType_Params
{
public:
	enum class ERADARMAP_ICON_TYPE               IconType;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function RadarMapIconWidgets.RadarMapIconWidgets_C.IsEndLoopAnimation
struct URadarMapIconWidgets_C_IsEndLoopAnimation_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function RadarMapIconWidgets.RadarMapIconWidgets_C.GetCurrentTime
struct URadarMapIconWidgets_C_GetCurrentTime_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time;                                              // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function RadarMapIconWidgets.RadarMapIconWidgets_C.SetAnimationIcon
struct URadarMapIconWidgets_C_SetAnimationIcon_Params
{
public:
	bool                                         IsInAnima;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function RadarMapIconWidgets.RadarMapIconWidgets_C.SetupIcon
struct URadarMapIconWidgets_C_SetupIcon_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRadarMapIconParam                    IconParam;                                         // 0x8(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UWidget*                               Widget;                                            // 0x50(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RadarMapIconWidgets.RadarMapIconWidgets_C.ExecuteUbergraph_RadarMapIconWidgets
struct URadarMapIconWidgets_C_ExecuteUbergraph_RadarMapIconWidgets_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


