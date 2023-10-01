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

// UserDefinedEnum IO_MissionDamageable_States.IO_MissionDamageable_States
enum class EIO_MissionDamageable_States : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	IO_MissionDamageable_MAX       = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
