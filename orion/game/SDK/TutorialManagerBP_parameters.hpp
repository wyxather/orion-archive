#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x9 (0x9 - 0x0)
// Function TutorialManagerBP.TutorialManagerBP_C.OpenEndCard
struct ATutorialManagerBP_C_OpenEndCard_Params
{
public:
	enum class ETUTORIAL_TYPE                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForcedDisplay;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsOpen;                                            // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1204[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharaID;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function TutorialManagerBP.TutorialManagerBP_C.OpenTutorialListData
struct ATutorialManagerBP_C_OpenTutorialListData_Params
{
public:
	struct FDataTableTutorialList                ListData;                                          // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         AutoPushPop;                                       // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ForcedDisplay;                                     // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsOpen;                                            // 0x2A(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1207[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUITutorialBase*                       Tutorial;                                          // 0x30(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function TutorialManagerBP.TutorialManagerBP_C.IsRunningTutorial
struct ATutorialManagerBP_C_IsRunningTutorial_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function TutorialManagerBP.TutorialManagerBP_C.OpenTutorial
struct ATutorialManagerBP_C_OpenTutorial_Params
{
public:
	enum class ETUTORIAL_TYPE                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForcedDisplay;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsOpen;                                            // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1211[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharaID;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TutorialManagerBP.TutorialManagerBP_C.ReceiveTick
struct ATutorialManagerBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function TutorialManagerBP.TutorialManagerBP_C.ExecuteUbergraph_TutorialManagerBP
struct ATutorialManagerBP_C_ExecuteUbergraph_TutorialManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


