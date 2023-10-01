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

// UserDefinedEnum JournalEchoState.JournalEchoState
enum class EJournalEchoState : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	JournalEchoState_MAX           = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
