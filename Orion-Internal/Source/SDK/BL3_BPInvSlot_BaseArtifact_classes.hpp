#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInvSlot_BaseArtifact_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInvSlot_BaseArtifact.BPInvSlot_BaseArtifact_C
// 0x0000 (0x0078 - 0x0078)
class UBPInvSlot_BaseArtifact_C : public UInventorySlotData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInvSlot_BaseArtifact.BPInvSlot_BaseArtifact_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
