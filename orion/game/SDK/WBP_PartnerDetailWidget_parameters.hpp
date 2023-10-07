#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x30 (0x30 - 0x0)
// Function WBP_PartnerDetailWidget.WBP_PartnerDetailWidget_C.GetPartnerName
struct UWBP_PartnerDetailWidget_C_GetPartnerName_Params
{
public:
	enum class EHUNTER_PARTNER_ID                Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TextLabel;                                         // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F8 (0x2F8 - 0x0)
// Function WBP_PartnerDetailWidget.WBP_PartnerDetailWidget_C.Setup
struct UWBP_PartnerDetailWidget_C_Setup_Params
{
public:
	enum class EHUNTER_PARTNER_ID                NewParam;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PartnerDetailWidget.WBP_PartnerDetailWidget_C.Open
struct UWBP_PartnerDetailWidget_C_Open_Params
{
public:
	enum class EHUNTER_PARTNER_ID                PartnerID;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


