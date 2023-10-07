#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x4 (0x4 - 0x0)
// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.IsChangeFlipbook
struct UBarMenuPlayerSelect_C_IsChangeFlipbook_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x634 (0x634 - 0x0)
// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.SetupByStoryData
struct UBarMenuPlayerSelect_C_SetupByStoryData_Params
{
public:
	struct FBarMenuStoryItem                     StoryData;                                         // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x80 (0x80 - 0x0)
// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.SetGrayOut
struct UBarMenuPlayerSelect_C_SetGrayOut_Params
{
public:
	bool                                         IsGrayOut;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.Focus
struct UBarMenuPlayerSelect_C_Focus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.OutFocus
struct UBarMenuPlayerSelect_C_OutFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.Tick
struct UBarMenuPlayerSelect_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.ExecuteUbergraph_BarMenuPlayerSelect
struct UBarMenuPlayerSelect_C_ExecuteUbergraph_BarMenuPlayerSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


