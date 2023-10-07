#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2 (0x2 - 0x0)
// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.StopEnvSound
struct ABP_Obj_EnvSound_Base_C_StopEnvSound_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.GetAtomComponent
struct ABP_Obj_EnvSound_Base_C_GetAtomComponent_Params
{
public:
	class UAtomComponent*                        AtomComponent;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.Pause
struct ABP_Obj_EnvSound_Base_C_Pause_Params
{
public:
	bool                                         bPause;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.SetVolume
struct ABP_Obj_EnvSound_Base_C_SetVolume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.InitSound
struct ABP_Obj_EnvSound_Base_C_InitSound_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.ExecuteUbergraph_BP_Obj_EnvSound_Base
struct ABP_Obj_EnvSound_Base_C_ExecuteUbergraph_BP_Obj_EnvSound_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


