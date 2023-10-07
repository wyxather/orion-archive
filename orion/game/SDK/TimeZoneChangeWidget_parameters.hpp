#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function TimeZoneChangeWidget.TimeZoneChangeWidget_C.HideTemporaryInternal
struct UTimeZoneChangeWidget_C_HideTemporaryInternal_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWIDGET_TEMPORARY_HIDE_USER       HideUser;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function TimeZoneChangeWidget.TimeZoneChangeWidget_C.SetReference
struct UTimeZoneChangeWidget_C_SetReference_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function TimeZoneChangeWidget.TimeZoneChangeWidget_C.Tick
struct UTimeZoneChangeWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TimeZoneChangeWidget.TimeZoneChangeWidget_C.RefreshLanguage
struct UTimeZoneChangeWidget_C_RefreshLanguage_Params
{
public:
	enum class EKSLanguage                       NewLanguage;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function TimeZoneChangeWidget.TimeZoneChangeWidget_C.ExecuteUbergraph_TimeZoneChangeWidget
struct UTimeZoneChangeWidget_C_ExecuteUbergraph_TimeZoneChangeWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


