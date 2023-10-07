#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x10 (0x10 - 0x0)
// Function ListItemTextArea.ListItemTextArea_C.SetEmblemIconPair
struct UListItemTextArea_C_SetEmblemIconPair_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            TexturePair;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB6 (0xB6 - 0x0)
// Function ListItemTextArea.ListItemTextArea_C.SetCharacterIcon
struct UListItemTextArea_C_SetCharacterIcon_Params
{
public:
	class FName                                  SubStoryLabel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ListItemTextArea.ListItemTextArea_C.SetEmblemIcon
struct UListItemTextArea_C_SetEmblemIcon_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ListItemTextArea.ListItemTextArea_C.SetResultText
struct UListItemTextArea_C_SetResultText_Params
{
public:
	class FText                                  ResultText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function ListItemTextArea.ListItemTextArea_C.SetStoryText
struct UListItemTextArea_C_SetStoryText_Params
{
public:
	class FText                                  StoryText;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function ListItemTextArea.ListItemTextArea_C.SetOrdererName
struct UListItemTextArea_C_SetOrdererName_Params
{
public:
	class FText                                  OrdererName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function ListItemTextArea.ListItemTextArea_C.SetViewMode
struct UListItemTextArea_C_SetViewMode_Params
{
public:
	bool                                         IsStoryOnly;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ListItemTextArea.ListItemTextArea_C.ExecuteUbergraph_ListItemTextArea
struct UListItemTextArea_C_ExecuteUbergraph_ListItemTextArea_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


