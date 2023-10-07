#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x60 (0x60 - 0x0)
// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.ReplaceFontStyleTag
struct USearchDetailPartsWidget_C_ReplaceFontStyleTag_Params
{
public:
	class FString                                InputText;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  OutText;                                           // 0x10(0x18)(Parm, OutParm)
};

// 0xA0 (0xA0 - 0x0)
// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.ReplaceColorTag
struct USearchDetailPartsWidget_C_ReplaceColorTag_Params
{
public:
	class FString                                Body;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  OutText;                                           // 0x10(0x18)(Parm, OutParm)
};

// 0x60 (0x60 - 0x0)
// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.ApplyHistoryColor
struct USearchDetailPartsWidget_C_ApplyHistoryColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x144 (0x144 - 0x0)
// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.RemoveColorTag
struct USearchDetailPartsWidget_C_RemoveColorTag_Params
{
public:
	class FString                                Body;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  OutText;                                           // 0x10(0x18)(Parm, OutParm)
};

// 0xA8 (0xA8 - 0x0)
// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.SetTextAlpha
struct USearchDetailPartsWidget_C_SetTextAlpha_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x74 (0x74 - 0x0)
// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.GetInformationData
struct USearchDetailPartsWidget_C_GetInformationData_Params
{
public:
	TArray<class FName>                          InfoIDList;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FNPCHearInfoDataBase>          InfoDataList;                                      // 0x10(0x10)(Parm, OutParm)
};

// 0x418 (0x418 - 0x0)
// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.SetupSearchDetail
struct USearchDetailPartsWidget_C_SetupSearchDetail_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAlreadyCompleted;                                // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.Tick
struct USearchDetailPartsWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.PreConstruct
struct USearchDetailPartsWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x65 (0x65 - 0x0)
// Function SearchDetailPartsWidget.SearchDetailPartsWidget_C.ExecuteUbergraph_SearchDetailPartsWidget
struct USearchDetailPartsWidget_C_ExecuteUbergraph_SearchDetailPartsWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


