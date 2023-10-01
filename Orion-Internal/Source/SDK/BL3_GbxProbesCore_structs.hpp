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
//Enums
//---------------------------------------------------------------------------

// Enum GbxProbesCore.EGbxProbeResult
enum class EGbxProbeResult : uint8_t
{
	Seen                           = 0,
	Skipped                        = 1,
	Succeeded                      = 2,
	Failed                         = 3,
	Disabled                       = 4,
	Count                          = 5,
	EGbxProbeResult_MAX            = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxProbesCore.GbxProbeId
// 0x0018
struct FGbxProbeId
{
	struct FName                                       Class;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Type;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SubType;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
