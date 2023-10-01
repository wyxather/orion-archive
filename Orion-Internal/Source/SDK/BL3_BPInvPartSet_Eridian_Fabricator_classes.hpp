#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInvPartSet_Eridian_Fabricator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInvPartSet_Eridian_Fabricator.BPInvPartSet_Eridian_Fabricator_C
// 0x0000 (0x00A0 - 0x00A0)
class UBPInvPartSet_Eridian_Fabricator_C : public UInventoryPartSetData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInvPartSet_Eridian_Fabricator.BPInvPartSet_Eridian_Fabricator_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
