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

// UserDefinedEnum ECartelSpawnerType.ECartelSpawnerType
enum class ECartelSpawnerType : uint8_t
{
	NewEnumerator1                 = 0,
	NewEnumerator2                 = 1,
	ECartelSpawnerType_MAX         = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
