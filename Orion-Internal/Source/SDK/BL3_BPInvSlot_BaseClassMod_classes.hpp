#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInvSlot_BaseClassMod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInvSlot_BaseClassMod.BPInvSlot_BaseClassMod_C
// 0x0000 (0x0078 - 0x0078)
class UBPInvSlot_BaseClassMod_C : public UInventorySlotData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInvSlot_BaseClassMod.BPInvSlot_BaseClassMod_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
