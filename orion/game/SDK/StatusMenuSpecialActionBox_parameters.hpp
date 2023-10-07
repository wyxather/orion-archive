#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function StatusMenuSpecialActionBox.StatusMenuSpecialActionBox_C.SetIconImage
struct UStatusMenuSpecialActionBox_C_SetIconImage_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function StatusMenuSpecialActionBox.StatusMenuSpecialActionBox_C.SetDescriptionText
struct UStatusMenuSpecialActionBox_C_SetDescriptionText_Params
{
public:
	class FText                                  DescriptionText;                                   // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x52 (0x52 - 0x0)
// Function StatusMenuSpecialActionBox.StatusMenuSpecialActionBox_C.SetNameText
struct UStatusMenuSpecialActionBox_C_SetNameText_Params
{
public:
	class FText                                  NameText;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  NameSuffixText1;                                   // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  NameSuffixText2;                                   // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xAD (0xAD - 0x0)
// Function StatusMenuSpecialActionBox.StatusMenuSpecialActionBox_C.SetCategoryText
struct UStatusMenuSpecialActionBox_C_SetCategoryText_Params
{
public:
	class FText                                  CategoryText;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CategorySuffixText;                                // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


