#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x20 (0x20 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.PreLoadTitleWidgets
struct ABP_ResidentGame_C_PreLoadTitleWidgets_Params
{
public:
	TArray<TSoftObjectPtr<class UObject>>        Array;                                             // 0x0(0x10)(Parm, OutParm)
};

// 0x120 (0x120 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.OnLoaded_UIMainTitle
struct ABP_ResidentGame_C_OnLoaded_UIMainTitle_Params
{
public:
	TArray<class UObject*>                       ObjList;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.DirectLoadGame_CallbackLoadGame
struct ABP_ResidentGame_C_DirectLoadGame_CallbackLoadGame_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_157F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMJSaveData*                           SaveGame;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6F (0x6F - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.DirectLoadGame_CallbackChangeMap
struct ABP_ResidentGame_C_DirectLoadGame_CallbackChangeMap_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.Step Load Common UIResources
struct ABP_ResidentGame_C_Step_Load_Common_UIResources_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.CheckPoint
struct ABP_ResidentGame_C_CheckPoint_Params
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.CheckTime
struct ABP_ResidentGame_C_CheckTime_Params
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.IsLevelManagerReady
struct ABP_ResidentGame_C_IsLevelManagerReady_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.StepInitSaveData
struct ABP_ResidentGame_C_StepInitSaveData_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.StepPlayerController
struct ABP_ResidentGame_C_StepPlayerController_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.StepCharacter
struct ABP_ResidentGame_C_StepCharacter_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.StepDebug
struct ABP_ResidentGame_C_StepDebug_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.StepEffect
struct ABP_ResidentGame_C_StepEffect_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.StepFinish
struct ABP_ResidentGame_C_StepFinish_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.StepUIResource
struct ABP_ResidentGame_C_StepUIResource_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x45 (0x45 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.StepBattle
struct ABP_ResidentGame_C_StepBattle_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.StepDBAccess
struct ABP_ResidentGame_C_StepDBAccess_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.Setup Manager
struct ABP_ResidentGame_C_Setup_Manager_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.ReceiveTick
struct ABP_ResidentGame_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_ResidentGame.BP_ResidentGame_C.ExecuteUbergraph_BP_ResidentGame
struct ABP_ResidentGame_C_ExecuteUbergraph_BP_ResidentGame_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


