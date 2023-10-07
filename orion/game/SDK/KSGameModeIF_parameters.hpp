#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function KSGameModeIF.KSGameModeIF_C.IsLoadReady
struct IKSGameModeIF_C_IsLoadReady_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSGameModeIF.KSGameModeIF_C.IsManagerReady_DEPRICATED
struct IKSGameModeIF_C_IsManagerReady_DEPRICATED_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSGameModeIF.KSGameModeIF_C.SetLoadReady
struct IKSGameModeIF_C_SetLoadReady_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSGameModeIF.KSGameModeIF_C.SetManagerReady_DEPRICATED
struct IKSGameModeIF_C_SetManagerReady_DEPRICATED_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function KSGameModeIF.KSGameModeIF_C.SetAllManagerReady
struct IKSGameModeIF_C_SetAllManagerReady_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function KSGameModeIF.KSGameModeIF_C.IsAllManagerReady
struct IKSGameModeIF_C_IsAllManagerReady_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function KSGameModeIF.KSGameModeIF_C.SetBalloonManager
struct IKSGameModeIF_C_SetBalloonManager_Params
{
public:
	class UObject*                               BalloonManager;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function KSGameModeIF.KSGameModeIF_C.GetLoader
struct IKSGameModeIF_C_GetLoader_Params
{
public:
	class AKSSimpleLevelLoader*                  Loader;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


