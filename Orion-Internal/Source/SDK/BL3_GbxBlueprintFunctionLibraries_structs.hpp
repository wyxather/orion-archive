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

// Enum GbxBlueprintFunctionLibraries.ECompareTag
enum class ECompareTag : uint8_t
{
	ContainsSameTags               = 0,
	UniqueTags                     = 1,
	ECompareTag_MAX                = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
