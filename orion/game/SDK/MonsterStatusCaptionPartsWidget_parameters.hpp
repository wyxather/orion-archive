#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x234 (0x234 - 0x0)
// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.SetMonsterFlipbook
struct UMonsterStatusCaptionPartsWidget_C_SetMonsterFlipbook_Params
{
public:
	class FName                                  MonsterLabel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.SetProcessItemData
struct UMonsterStatusCaptionPartsWidget_C_SetProcessItemData_Params
{
public:
	bool                                         CantProcess;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1427[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ItemLabel;                                         // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1428[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ItemName;                                          // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        ItemNum;                                           // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.SetCountVisiblity
struct UMonsterStatusCaptionPartsWidget_C_SetCountVisiblity_Params
{
public:
	bool                                         Visiblity;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x390 (0x390 - 0x0)
// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.SetSkillData
struct UMonsterStatusCaptionPartsWidget_C_SetSkillData_Params
{
public:
	class UKSTextBlock*                          TextBlock;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAttributeIconPlate_C*                 AttributeIconPlane;                                // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AttributeName;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.SetInformation
struct UMonsterStatusCaptionPartsWidget_C_SetInformation_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Rank;                                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_142F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AbilityLabel;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector2D                             FlipbookOffset;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             FlipbookSize;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.Tick
struct UMonsterStatusCaptionPartsWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.ExecuteUbergraph_MonsterStatusCaptionPartsWidget
struct UMonsterStatusCaptionPartsWidget_C_ExecuteUbergraph_MonsterStatusCaptionPartsWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


