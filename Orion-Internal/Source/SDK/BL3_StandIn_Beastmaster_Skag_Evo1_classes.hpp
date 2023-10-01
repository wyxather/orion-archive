#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Beastmaster_Skag_Evo1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_Beastmaster_Skag_Evo1.StandIn_Beastmaster_Skag_Evo1_C
// 0x0000 (0x0588 - 0x0588)
class AStandIn_Beastmaster_Skag_Evo1_C : public AStandIn_Beastmaster_Skag_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Beastmaster_Skag_Evo1.StandIn_Beastmaster_Skag_Evo1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
