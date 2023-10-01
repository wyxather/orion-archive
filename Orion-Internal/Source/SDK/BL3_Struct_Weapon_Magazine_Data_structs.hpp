#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_Weapon_Magazine_Data.Struct_Weapon_Magazine_Data
// 0x0024
struct FStruct_Weapon_Magazine_Data
{
	float                                              DamageScale_21_E122A464430D697B8D7698BB199E4BB9;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecoilHeight_2_B1A0B3294A6469A2FA445DBCB6F8286E;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecoilWidth_4_6070437243E00325871D5F9CCD57876D;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccuracyImpulse_6_6CA8A1004EADD613FB23E7B2166FB852;       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAccuracy_17_F1A0785B4ECFC95D33DF6FBD4373828C;          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwayAccuracyScale_8_C379A7AE4E965503B92361A200E6C5C9;     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwayZoomAccuracyScale_10_874F70D34C35589F931B86BA24D0A92F;// 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwayDiscHeight_12_634AB3964D2D2DC78190E1877FE79881;       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwayDiscWidth_14_453AA5724EB892DF24EFF8A41D4816B7;        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
