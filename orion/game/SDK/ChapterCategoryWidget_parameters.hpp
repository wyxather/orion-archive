#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetBodyText
struct UChapterCategoryWidget_C_SetBodyText_Params
{
public:
	class FName                                  Text;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetCategoryId
struct UChapterCategoryWidget_C_GetCategoryId_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetCategoryId
struct UChapterCategoryWidget_C_SetCategoryId_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetListNumText
struct UChapterCategoryWidget_C_GetListNumText_Params
{
public:
	class FText                                  ListNumLabel;                                      // 0x0(0x18)(Parm, OutParm)
};

// 0x18 (0x18 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetListNameText
struct UChapterCategoryWidget_C_GetListNameText_Params
{
public:
	class FText                                  ListName;                                          // 0x0(0x18)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.Set Material Icon DEPRECATED
struct UChapterCategoryWidget_C_Set_Material_Icon_DEPRECATED_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetCategoryHelpText
struct UChapterCategoryWidget_C_SetCategoryHelpText_Params
{
public:
	class FString                                CategoryHelpText;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CategoryHelpGameTextID;                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetHelpText
struct UChapterCategoryWidget_C_GetHelpText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0xC (0xC - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetHeight
struct UChapterCategoryWidget_C_GetHeight_Params
{
public:
	float                                        Height;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetCategoryName
struct UChapterCategoryWidget_C_GetCategoryName_Params
{
public:
	class FText                                  CategoryText;                                      // 0x0(0x18)(Parm, OutParm)
};

// 0x39 (0x39 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetCategoryName
struct UChapterCategoryWidget_C_SetCategoryName_Params
{
public:
	class FText                                  CategoryText;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  CategoryGameTextID;                                // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetCursorVisible
struct UChapterCategoryWidget_C_SetCursorVisible_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetIcon_DEPRECATED
struct UChapterCategoryWidget_C_SetIcon_DEPRECATED_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.PlayAnim
struct UChapterCategoryWidget_C_PlayAnim_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetCursorPosition
struct UChapterCategoryWidget_C_GetCursorPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChapterCategoryWidget.ChapterCategoryWidget_C.ExecuteUbergraph_ChapterCategoryWidget
struct UChapterCategoryWidget_C_ExecuteUbergraph_ChapterCategoryWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


