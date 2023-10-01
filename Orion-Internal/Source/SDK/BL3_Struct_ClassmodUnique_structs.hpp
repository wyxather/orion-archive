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

// UserDefinedStruct Struct_ClassmodUnique.Struct_ClassmodUnique
// 0x0044
struct FStruct_ClassmodUnique
{
	class FString                                      Description_A_9_8E89FBF643D0B6E713D2FC89A792FC37;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Value_A_2_4C4DFC67484D02BA3DBB029A999F015E;               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class FString                                      Description_B_11_F977D68D4A34B4087AADAC8526423B2B;        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Value_B_5_AC44446B4200DFD2A654AC85CC59B4B0;               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class FString                                      Description_C_13_AA0BC782482A1E0DBECCECA369A1AC77;        // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Value_C_6_3F98C9DC474EDF4757401A9211583E20;               // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
