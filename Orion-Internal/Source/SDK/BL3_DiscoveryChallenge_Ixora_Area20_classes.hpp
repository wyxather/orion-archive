#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DiscoveryChallenge_Ixora_Area20_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DiscoveryChallenge_Ixora_Area20.DiscoveryChallenge_Ixora_Area20_C
// 0x0000 (0x0260 - 0x0260)
class UDiscoveryChallenge_Ixora_Area20_C : public UDiscoveryChallege_Ixora_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DiscoveryChallenge_Ixora_Area20.DiscoveryChallenge_Ixora_Area20_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
