#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_BeastMaster_PetBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_BeastMaster_PetBase.StandIn_BeastMaster_PetBase_C
// 0x0000 (0x0580 - 0x0580)
class AStandIn_BeastMaster_PetBase_C : public AStandInAuxiliaryActor_Pet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_BeastMaster_PetBase.StandIn_BeastMaster_PetBase_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
