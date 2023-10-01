#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPUsableComponent_Revive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPUsableComponent_Revive.BPUsableComponent_Revive_C
// 0x0000 (0x03B0 - 0x03B0)
class UBPUsableComponent_Revive_C : public UBP_UsableComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPUsableComponent_Revive.BPUsableComponent_Revive_C");
		return ptr;
	}


	bool K2_CanBeUsed(struct FUsabilityQuery* Query);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
