#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function EnvSoundInterface.EnvSoundInterface_C.StopEnvSound
struct IEnvSoundInterface_C_StopEnvSound_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function EnvSoundInterface.EnvSoundInterface_C.GetAtomComponent
struct IEnvSoundInterface_C_GetAtomComponent_Params
{
public:
	class UAtomComponent*                        AtomComponent;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EnvSoundInterface.EnvSoundInterface_C.InitSound
struct IEnvSoundInterface_C_InitSound_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function EnvSoundInterface.EnvSoundInterface_C.SetVolume
struct IEnvSoundInterface_C_SetVolume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function EnvSoundInterface.EnvSoundInterface_C.Pause
struct IEnvSoundInterface_C_Pause_Params
{
public:
	bool                                         bPause;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


