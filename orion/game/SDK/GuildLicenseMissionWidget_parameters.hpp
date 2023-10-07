#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x10 (0x10 - 0x0)
// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.GetAcquisitionJobAbility
struct UGuildLicenseMissionWidget_C_GetAcquisitionJobAbility_Params
{
public:
	int32                                        JobID;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.GetCurrentIndex
struct UGuildLicenseMissionWidget_C_GetCurrentIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.IsActive
struct UGuildLicenseMissionWidget_C_IsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.UpdateSelectIndex
struct UGuildLicenseMissionWidget_C_UpdateSelectIndex_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.CursorUpdate
struct UGuildLicenseMissionWidget_C_CursorUpdate_Params
{
public:
	bool                                         IsUp;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.PlayOpenAnim
struct UGuildLicenseMissionWidget_C_PlayOpenAnim_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xCD (0xCD - 0x0)
// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.Setup
struct UGuildLicenseMissionWidget_C_Setup_Params
{
public:
	class FName                                  GuildLabel;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReOpen;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.ExecuteUbergraph_GuildLicenseMissionWidget
struct UGuildLicenseMissionWidget_C_ExecuteUbergraph_GuildLicenseMissionWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


