#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2 (0x2 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.SetShining
struct UListCategoryWidget_C_SetShining_Params
{
public:
	enum class EHOLY_TORCH_SHINING_STATE         Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.GetCategoryId
struct UListCategoryWidget_C_GetCategoryId_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.SetCategoryId
struct UListCategoryWidget_C_SetCategoryId_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.GetListNumText
struct UListCategoryWidget_C_GetListNumText_Params
{
public:
	class FText                                  ListNumLabel;                                      // 0x0(0x18)(Parm, OutParm)
};

// 0x18 (0x18 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.GetListNameText
struct UListCategoryWidget_C_GetListNameText_Params
{
public:
	class FText                                  ListName;                                          // 0x0(0x18)(Parm, OutParm)
};

// 0x29 (0x29 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.SetCategoryHelpText
struct UListCategoryWidget_C_SetCategoryHelpText_Params
{
public:
	class FString                                CategoryHelpText;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CategoryHelpGameTextID;                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.GetHelpText
struct UListCategoryWidget_C_GetHelpText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0xC (0xC - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.GetHeight
struct UListCategoryWidget_C_GetHeight_Params
{
public:
	float                                        Height;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.GetCategoryName
struct UListCategoryWidget_C_GetCategoryName_Params
{
public:
	class FText                                  CategoryText;                                      // 0x0(0x18)(Parm, OutParm)
};

// 0x39 (0x39 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.SetCategoryName
struct UListCategoryWidget_C_SetCategoryName_Params
{
public:
	class FText                                  CategoryText;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  CategoryGameTextID;                                // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.SetCursorVisible
struct UListCategoryWidget_C_SetCursorVisible_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.SetIcon
struct UListCategoryWidget_C_SetIcon_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.PlayAnim
struct UListCategoryWidget_C_PlayAnim_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFast;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.GetCursorPosition
struct UListCategoryWidget_C_GetCursorPosition_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.OutFocus
struct UListCategoryWidget_C_OutFocus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.Focus
struct UListCategoryWidget_C_Focus_Params
{
public:
	bool                                         IsFast;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ListCategoryWidget.ListCategoryWidget_C.ExecuteUbergraph_ListCategoryWidget
struct UListCategoryWidget_C_ExecuteUbergraph_ListCategoryWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


