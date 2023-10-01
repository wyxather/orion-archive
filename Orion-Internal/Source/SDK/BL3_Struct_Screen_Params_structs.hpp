#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_Screen_Params.Struct_Screen_Params
// 0x006C
struct FStruct_Screen_Params
{
	class UTexture*                                    T_Screen_163_95CCC96C4F0DC23D1EDF6082BCFE811D;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              T_Screen_Array_Index_110_7BD456F148F44BA699FDD8BDF3912F3E;// 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Screen_BaseColor_Mult_93_3C6B06D746B9EDBF6CCE07AD005F7AF2;// 0x000C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Screen_EmissiveColor_Mult_120_7FF60E874A3B9C6F53A4C5A9F1685CDA;// 0x001C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Screen_Emissive_Intensity_161_42E9432249CB762D4AB985B3D84DF5BF;// 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Image_Strength_155_11EF049A4C15F74493CA1387A0501128;// 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Image_Contrast_119_2012779A40A7FC968180A287E3831253;// 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Image_Desaturation_Amount_118_5ACE2E684E4E3593B3039BAE248EE429;// 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Image_HueShift_117_630B15884C856D8A3330199093B6FCFA;// 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Chromatic_Aberration_Intensity_128_8BBD6AB747B660430BC6A2AC967F8A18;// 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Noise_Intensity_122_0D0DBC884719F59C54CE6CA94308E796;// 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Scanlines_Intensity_124_8898F1D944033E734DED778332FC5B2A;// 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Snow_Intensity_126_94D84D694A2ACCEE413CC3A51D67A9EC;// 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Flicker_Intensity_158_D156FF3D42A78213A7CED9B99B1D8F24;// 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Flicker_Speed_159_F5F6EF314551D0AB6CCB04B8BA4B5CDB;// 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Glitch_Horizontal_Stretching_Intensity_132_CC0C89AE4B61676DBD4429BC556044B6;// 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Glitch_Vertical_Stretching_Intensity_134_9885A8AA4D0A5B9FA8DFC995D2081948;// 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Glitch_Scrolling_Intensity_151_2EF69D5F4D51CC44C98A7EABEBE55881;// 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Glitch_Scrolling_Micro_Intensity_143_B33C209E4F604BB5E66286BFB2F940CA;// 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Glitch_Scrolling_Steady_Speed_144_9978F496406F08F2A48914A76867D4FE;// 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
