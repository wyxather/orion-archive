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

// UserDefinedStruct S_BranchOptions.S_BranchOptions
// 0x0020
struct FS_BranchOptions
{
	TArray<class UStaticMesh*>                         BranchOptions_3_017446B244D554CCE50A01876C8207C1;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BranchDeadzones_17_5BB1A0FA46B2C4D797F6D2B2FEDB7EB3;      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
