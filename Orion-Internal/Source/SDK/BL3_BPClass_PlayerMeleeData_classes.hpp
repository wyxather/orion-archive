#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPClass_PlayerMeleeData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPClass_PlayerMeleeData.BPClass_PlayerMeleeData_C
// 0x0000 (0x0140 - 0x0140)
class UBPClass_PlayerMeleeData_C : public UPlayerMeleeData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPClass_PlayerMeleeData.BPClass_PlayerMeleeData_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
