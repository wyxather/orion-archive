#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GameplayTags_classes.hpp"
#include "BL3_GbxProbesCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxProbes.GbxProbeExtraData
// 0x0020
struct FGbxProbeExtraData
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
