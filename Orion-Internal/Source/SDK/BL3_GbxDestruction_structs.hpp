#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_ApexDestruction_classes.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxDestruction.EDestructibleRelevance
enum class EDestructibleRelevance : uint8_t
{
	DR_GameplayAndNetwork          = 0,
	DR_Gameplay                    = 1,
	DR_None                        = 2,
	DR_MAX                         = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxDestruction.GbxDestructibleNetBuffer
// 0x0020
struct FGbxDestructibleNetBuffer
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
