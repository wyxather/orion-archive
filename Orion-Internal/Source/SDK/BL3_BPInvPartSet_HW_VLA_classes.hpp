#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInvPartSet_HW_VLA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInvPartSet_HW_VLA.BPInvPartSet_HW_VLA_C
// 0x0000 (0x00A0 - 0x00A0)
class UBPInvPartSet_HW_VLA_C : public UInventoryPartSetData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInvPartSet_HW_VLA.BPInvPartSet_HW_VLA_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
