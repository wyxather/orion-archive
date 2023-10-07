#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x28 (0x28 - 0x0)
// Function PlacedSequencerBP.PlacedSequencerBP_C.ChangeInputMode
struct APlacedSequencerBP_C_ChangeInputMode_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function PlacedSequencerBP.PlacedSequencerBP_C.ReceiveTick
struct APlacedSequencerBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlacedSequencerBP.PlacedSequencerBP_C.ReceiveEndPlay
struct APlacedSequencerBP_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function PlacedSequencerBP.PlacedSequencerBP_C.ExecuteUbergraph_PlacedSequencerBP
struct APlacedSequencerBP_C_ExecuteUbergraph_PlacedSequencerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


