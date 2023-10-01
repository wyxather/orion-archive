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

// UserDefinedStruct TutorialPage.TutorialPage
// 0x0040
struct FTutorialPage
{
	struct FText                                       Title_11_A106600F413F35953E0F91AF0E60D285;                // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Text_12_74E4CEB94E4541AF0363E3B6A9FE341A;                 // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FName                                       Style_10_F49C0DD449D7C342B0F6B08D8B41418E;                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Image_7_E83375764A3D175D8495D1B5FC60F4DB;                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
