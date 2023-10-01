#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxStreamingInteraction.EStreamingService
enum class EStreamingService : uint8_t
{
	None                           = 0,
	Twitch                         = 1,
	Mixer                          = 2,
	EStreamingService_MAX          = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxStreamingInteraction.InteractiveStreamingServiceViewer
// 0x0020
struct FInteractiveStreamingServiceViewer
{
	class FString                                      ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      Name;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
