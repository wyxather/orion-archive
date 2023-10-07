#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x128 (0x128 - 0x0)
// Function NPCManagerBP.NPCManagerBP_C.RecoverSwoonNPC_TZChange
struct ANPCManagerBP_C_RecoverSwoonNPC_TZChange_Params
{
public:
	int32                                        NPCIndex;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x195 (0x195 - 0x0)
// Function NPCManagerBP.NPCManagerBP_C.SwoonNPCRecoverInternal
struct ANPCManagerBP_C_SwoonNPCRecoverInternal_Params
{
public:
	int32                                        NPCID;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F9B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNPCBattleData                        NPCBattleData;                                     // 0x8(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x145 (0x145 - 0x0)
// Function NPCManagerBP.NPCManagerBP_C.RecoverAllSwoonNPC
struct ANPCManagerBP_C_RecoverAllSwoonNPC_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x17C (0x17C - 0x0)
// Function NPCManagerBP.NPCManagerBP_C.RecoverSwoonNPC
struct ANPCManagerBP_C_RecoverSwoonNPC_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x152 (0x152 - 0x0)
// Function NPCManagerBP.NPCManagerBP_C.AddSwoonNPC
struct ANPCManagerBP_C_AddSwoonNPC_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENpcSwoonType                     SwoonType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x118 (0x118 - 0x0)
// Function NPCManagerBP.NPCManagerBP_C.CreateSwoonNPCList
struct ANPCManagerBP_C_CreateSwoonNPCList_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19D (0x19D - 0x0)
// Function NPCManagerBP.NPCManagerBP_C.RecoverSwoonNPC_LevelChange
struct ANPCManagerBP_C_RecoverSwoonNPC_LevelChange_Params
{
public:
	class FName                                  NextLevel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function NPCManagerBP.NPCManagerBP_C.ExecuteUbergraph_NPCManagerBP
struct ANPCManagerBP_C_ExecuteUbergraph_NPCManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


