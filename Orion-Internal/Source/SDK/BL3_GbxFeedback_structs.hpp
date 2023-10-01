#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxFeedback.EPlatform
enum class EPlatform : uint8_t
{
	Windows                        = 0,
	PS4                            = 1,
	XBoxOne                        = 2,
	PS5                            = 3,
	XBoxSeriesX                    = 4,
	EPlatform_MAX                  = 5
};


// Enum GbxFeedback.ERumbleSlot
enum class ERumbleSlot : uint8_t
{
	LeftSmall                      = 0,
	LeftLarge                      = 1,
	RightSmall                     = 2,
	RightLarge                     = 3,
	ERumbleSlot_MAX                = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxFeedback.RumbleSlotMapping
// 0x0080
struct FRumbleSlotMapping
{
	ERumbleSlot                                        MapSlotTo;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          MappingScalar;                                            // 0x0008(0x0078) (Edit, Config)
};

// ScriptStruct GbxFeedback.RumbleRemap
// 0x0200
struct FRumbleRemap
{
	struct FRumbleSlotMapping                          LeftSmallScalar;                                          // 0x0000(0x0080) (Edit, Config)
	struct FRumbleSlotMapping                          LeftLargeScalar;                                          // 0x0080(0x0080) (Edit, Config)
	struct FRumbleSlotMapping                          RightSmallScalar;                                         // 0x0100(0x0080) (Edit, Config)
	struct FRumbleSlotMapping                          RightLargeScalar;                                         // 0x0180(0x0080) (Edit, Config)
};

// ScriptStruct GbxFeedback.RemapByConsole
// 0x0210
struct FRemapByConsole
{
	class FString                                      ConsoleName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, Config, EditConst)
	struct FRumbleRemap                                RemapValues;                                              // 0x0010(0x0200) (Edit, Config)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
