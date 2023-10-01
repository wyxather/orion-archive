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

// Enum CableComponent.EFollowCableMovementMode
enum class EFollowCableMovementMode : uint8_t
{
	StopAtEnd                      = 0,
	Loop                           = 1,
	PingPong                       = 2,
	EFollowCableMovementMode_MAX   = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
