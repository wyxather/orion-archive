#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2 (0x2 - 0x0)
// Function BPC_DialogManager.BPC_DialogManager_C.CloseRequestDialog
struct ABPC_DialogManager_C_CloseRequestDialog_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x27 (0x27 - 0x0)
// Function BPC_DialogManager.BPC_DialogManager_C.Initialize
struct ABPC_DialogManager_C_Initialize_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x109 (0x109 - 0x0)
// Function BPC_DialogManager.BPC_DialogManager_C.OpenRequestDialog
struct ABPC_DialogManager_C_OpenRequestDialog_Params
{
public:
	struct FMJUICommonDialogParam                Param;                                             // 0x0(0xC8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UCommonDialog*                         ReturnValue;                                       // 0xC8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BPC_DialogManager.BPC_DialogManager_C.SetReference
struct ABPC_DialogManager_C_SetReference_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}
}


