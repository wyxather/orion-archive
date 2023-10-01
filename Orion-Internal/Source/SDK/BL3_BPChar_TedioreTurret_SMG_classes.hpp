#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TedioreTurret_SMG_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_TedioreTurret_SMG.BPChar_TedioreTurret_SMG_C
// 0x0000 (0x240D - 0x240D)
class ABPChar_TedioreTurret_SMG_C : public ABPChar_TedioreTurret_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_TedioreTurret_SMG.BPChar_TedioreTurret_SMG_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
