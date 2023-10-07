#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xC1 (0xC1 - 0x0)
// Function BP_ResidentBase.BP_ResidentBase_C.InitManager_UltraFirst
struct ABP_ResidentBase_C_InitManager_UltraFirst_Params
{
public:
	bool                                         Complete;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function BP_ResidentBase.BP_ResidentBase_C.OnLoadedSystemData
struct ABP_ResidentBase_C_OnLoadedSystemData_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UKSSaveSystem*                         SystemData;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F5 (0x2F5 - 0x0)
// Function BP_ResidentBase.BP_ResidentBase_C.InitManager
struct ABP_ResidentBase_C_InitManager_Params
{
public:
	bool                                         bCompleted;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_ResidentBase.BP_ResidentBase_C.ReceiveTick
struct ABP_ResidentBase_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6D (0x6D - 0x0)
// Function BP_ResidentBase.BP_ResidentBase_C.ExecuteUbergraph_BP_ResidentBase
struct ABP_ResidentBase_C_ExecuteUbergraph_BP_ResidentBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


