#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x14 (0x14 - 0x0)
// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.GetSelectedResolution
struct UListItemWidget_Opt8_C_GetSelectedResolution_Params
{
public:
	struct FIntPoint                             Resolution;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDD (0xDD - 0x0)
// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.SetupWindowResolution
struct UListItemWidget_Opt8_C_SetupWindowResolution_Params
{
public:
	struct FIntPoint                             CurrentResolution;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.RefreshGuideData
struct UListItemWidget_Opt8_C_RefreshGuideData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.InitInstance
struct UListItemWidget_Opt8_C_InitInstance_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.SetSpacerEnable
struct UListItemWidget_Opt8_C_SetSpacerEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function ListItemWidget_Opt8.ListItemWidget_Opt8_C.ExecuteUbergraph_ListItemWidget_Opt8
struct UListItemWidget_Opt8_C_ExecuteUbergraph_ListItemWidget_Opt8_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


