#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x32 (0x32 - 0x0)
// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.ChangeBeforeParamColor
struct UParamBeforeAfterWBP_C_ChangeBeforeParamColor_Params
{
public:
	int32                                        ColorType;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.SetLimit
struct UParamBeforeAfterWBP_C_SetLimit_Params
{
public:
	int32                                        ParamMax;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ParamMin;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.SetIcon
struct UParamBeforeAfterWBP_C_SetIcon_Params
{
public:
	class UTexture2D*                            NewParam;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.SetParam
struct UParamBeforeAfterWBP_C_SetParam_Params
{
public:
	int32                                        ValueBefore;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ValueAfter;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowParamEvenIfSameValue;                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF0 (0xF0 - 0x0)
// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.UpdateParamText
struct UParamBeforeAfterWBP_C_UpdateParamText_Params
{
public:
	bool                                         ShowParamEvenIfSameValue;                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.ExecuteUbergraph_ParamBeforeAfterWBP
struct UParamBeforeAfterWBP_C_ExecuteUbergraph_ParamBeforeAfterWBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


