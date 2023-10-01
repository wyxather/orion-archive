#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Beastmaster_WARLoader_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_Beastmaster_WARLoader.StandIn_Beastmaster_WARLoader_C
// 0x0000 (0x0590 - 0x0590)
class AStandIn_Beastmaster_WARLoader_C : public AStandIn_Beastmaster_BULLoader_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Beastmaster_WARLoader.StandIn_Beastmaster_WARLoader_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
