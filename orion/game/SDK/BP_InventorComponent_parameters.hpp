#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x4C (0x4C - 0x0)
// Function BP_InventorComponent.BP_InventorComponent_C.IsInventorItemAllReady
struct UBP_InventorComponent_C_IsInventorItemAllReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3E (0x3E - 0x0)
// Function BP_InventorComponent.BP_InventorComponent_C.StartCreateAllInventorItem
struct UBP_InventorComponent_C_StartCreateAllInventorItem_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function BP_InventorComponent.BP_InventorComponent_C.IsExecutableInventorItem
struct UBP_InventorComponent_C_IsExecutableInventorItem_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function BP_InventorComponent.BP_InventorComponent_C.UseInventorItem
struct UBP_InventorComponent_C_UseInventorItem_Params
{
public:
	class FName                                  StrInventorItemLabel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BP_InventorComponent.BP_InventorComponent_C.IsInventorItemReady
struct UBP_InventorComponent_C_IsInventorItemReady_Params
{
public:
	class FName                                  StrLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BP_InventorComponent.BP_InventorComponent_C.IsInventorItemExecCreate
struct UBP_InventorComponent_C_IsInventorItemExecCreate_Params
{
public:
	class FName                                  StrLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BP_InventorComponent.BP_InventorComponent_C.GetInventorItemCreateTurn
struct UBP_InventorComponent_C_GetInventorItemCreateTurn_Params
{
public:
	class FName                                  StrLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NRestTurn;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NCreateTurnMax;                                    // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x33A (0x33A - 0x0)
// Function BP_InventorComponent.BP_InventorComponent_C.UpdateCreateInventorItem
struct UBP_InventorComponent_C_UpdateCreateInventorItem_Params
{
public:
	int32                                        NTurnCount;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRandom;                                           // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseText;                                          // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x6(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function BP_InventorComponent.BP_InventorComponent_C.StartCreateInventorItem
struct UBP_InventorComponent_C_StartCreateInventorItem_Params
{
public:
	class FName                                  StrInventorItemLabel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x23A (0x23A - 0x0)
// Function BP_InventorComponent.BP_InventorComponent_C.InitInventorItemData
struct UBP_InventorComponent_C_InitInventorItemData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BP_InventorComponent.BP_InventorComponent_C.AddInventorItemData
struct UBP_InventorComponent_C_AddInventorItemData_Params
{
public:
	class FName                                  StrInventorItemLabel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NInventorTurn;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}
}


