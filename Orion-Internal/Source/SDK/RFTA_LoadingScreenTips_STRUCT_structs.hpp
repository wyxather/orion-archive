#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct LoadingScreenTips_STRUCT.LoadingScreenTips_STRUCT
// 0x0058
struct FLoadingScreenTips_STRUCT
{
	struct FText                                       Tip_2_5A3F69A144A66C6DE7E788BA17660CF5;                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Title_9_3E534D9548EFDB46109EE68BA007088F;                 // 0x0018(0x0018) (Edit, BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   Image_6_033E64FD4DCF6F62BCE49AB80490B492;                 // 0x0030(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
