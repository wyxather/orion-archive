#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function KSGameModeBP.KSGameModeBP_C.IsLoadReady
struct AKSGameModeBP_C_IsLoadReady_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSGameModeBP.KSGameModeBP_C.IsManagerReady_DEPRICATED
struct AKSGameModeBP_C_IsManagerReady_DEPRICATED_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSGameModeBP.KSGameModeBP_C.SetLoadReady
struct AKSGameModeBP_C_SetLoadReady_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSGameModeBP.KSGameModeBP_C.SetManagerReady_DEPRICATED
struct AKSGameModeBP_C_SetManagerReady_DEPRICATED_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSGameModeBP.KSGameModeBP_C.SetAllManagerReady
struct AKSGameModeBP_C_SetAllManagerReady_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSGameModeBP.KSGameModeBP_C.IsAllManagerReady
struct AKSGameModeBP_C_IsAllManagerReady_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function KSGameModeBP.KSGameModeBP_C.SetBalloonManager
struct AKSGameModeBP_C_SetBalloonManager_Params
{
public:
	class UObject*                               BalloonManager;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function KSGameModeBP.KSGameModeBP_C.GetLoader
struct AKSGameModeBP_C_GetLoader_Params
{
public:
	class AKSSimpleLevelLoader*                  Loader;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function KSGameModeBP.KSGameModeBP_C.Debug_GetStoryMemoryData
struct AKSGameModeBP_C_Debug_GetStoryMemoryData_Params
{
public:
	TArray<class FString>                        TextList;                                          // 0x0(0x10)(Parm, OutParm)
	int32                                        MemoryIndex;                                       // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA9 (0xA9 - 0x0)
// Function KSGameModeBP.KSGameModeBP_C.ExecuteUbergraph_KSGameModeBP
struct AKSGameModeBP_C_ExecuteUbergraph_KSGameModeBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


