#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Basic.hpp"
#include "RFTA_Engine_classes.hpp"
#include "RFTA_NavigationSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GunfireNavigation.ENavVolumeDrawType
enum class ENavVolumeDrawType : uint8_t
{
	DRAWTYPE_Open                  = 0,
	DRAWTYPE_Blocked               = 1,
	DRAWTYPE_All                   = 2,
	DRAWTYPE_MAX                   = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
