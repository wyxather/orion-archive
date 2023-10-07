#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x4C (0x4C - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.SpawnSecretPointEffect
struct ATreasureBoxBP_C_SpawnSecretPointEffect_Params
{
public:
	bool                                         IsOpen;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.SetObjectData
struct ATreasureBoxBP_C_SetObjectData_Params
{
public:
	struct FKSObjectData                         ObjectData;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1A0 (0x1A0 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.OpenMaxItemNumDialog
struct ATreasureBoxBP_C_OpenMaxItemNumDialog_Params
{
public:
	class FName                                  ItemLabel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.LotteryItem
struct ATreasureBoxBP_C_LotteryItem_Params
{
public:
	class FName                                  Item_Label;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Item_Num;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.IsRandomItem
struct ATreasureBoxBP_C_IsRandomItem_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.PickItem
struct ATreasureBoxBP_C_PickItem_Params
{
public:
	class FName                                  ItemLabel;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemCount;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.MaxItemNumDialogCallback
struct ATreasureBoxBP_C_MaxItemNumDialogCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.SequenceRequestCallback
struct ATreasureBoxBP_C_SequenceRequestCallback_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.GetOpenText
struct ATreasureBoxBP_C_GetOpenText_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.IsOpenedTreasureBox
struct ATreasureBoxBP_C_IsOpenedTreasureBox_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.DialogFinishCallback
struct ATreasureBoxBP_C_DialogFinishCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.CheckAccessPoint
struct ATreasureBoxBP_C_CheckAccessPoint_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x134 (0x134 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.SetupTreasureBoxVisible
struct ATreasureBoxBP_C_SetupTreasureBoxVisible_Params
{
public:
	bool                                         IsOpen;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x139 (0x139 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.IsCanOpenBox
struct ATreasureBoxBP_C_IsCanOpenBox_Params
{
public:
	bool                                         IsComplete;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.AlreadyOpenCheck
struct ATreasureBoxBP_C_AlreadyOpenCheck_Params
{
public:
	int32                                        TreasureIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Position;                                          // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.OpenDialog
struct ATreasureBoxBP_C_OpenDialog_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.SetObjectEnable
struct ATreasureBoxBP_C_SetObjectEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.ReceiveTick
struct ATreasureBoxBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x909 (0x909 - 0x0)
// Function TreasureBoxBP.TreasureBoxBP_C.ExecuteUbergraph_TreasureBoxBP
struct ATreasureBoxBP_C_ExecuteUbergraph_TreasureBoxBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


