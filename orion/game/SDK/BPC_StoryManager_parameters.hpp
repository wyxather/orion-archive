#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x4 (0x4 - 0x0)
// Function BPC_StoryManager.BPC_StoryManager_C.OnClosedSubStoryResultDialog
struct ABPC_StoryManager_C_OnClosedSubStoryResultDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPC_StoryManager.BPC_StoryManager_C.Debug_StartAutoPlay
struct ABPC_StoryManager_C_Debug_StartAutoPlay_Params
{
public:
	class FString                                ScenarioFileName;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0xA2 (0xA2 - 0x0)
// Function BPC_StoryManager.BPC_StoryManager_C.CompleteFakeSubStory
struct ABPC_StoryManager_C_CompleteFakeSubStory_Params
{
public:
	class FName                                  SubStoryLabel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3D0 (0x3D0 - 0x0)
// Function BPC_StoryManager.BPC_StoryManager_C.Temp_SubStoryResult
struct ABPC_StoryManager_C_Temp_SubStoryResult_Params
{
public:
	class FName                                  SubStoryLabel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPC_StoryManager.BPC_StoryManager_C.ReceiveTick
struct ABPC_StoryManager_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPC_StoryManager.BPC_StoryManager_C.ExecuteUbergraph_BPC_StoryManager
struct ABPC_StoryManager_C_ExecuteUbergraph_BPC_StoryManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


