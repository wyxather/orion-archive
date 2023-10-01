#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxPerfAnalytics.ESetTelemetryValue
enum class ESetTelemetryValue : uint8_t
{
	Overwrite                      = 0,
	IfNew                          = 1,
	ESetTelemetryValue_MAX         = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxPerfAnalytics.K2EventRef
// 0x0018
struct FK2EventRef
{
	class FString                                      EventName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GbxPerfAnalytics.K2TelemetryValues
// 0x0028
struct FK2TelemetryValues
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FK2EventRef                                 Event;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
