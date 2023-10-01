#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Beastmaster_Spiderant_Evo1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_Beastmaster_Spiderant_Evo1.StandIn_Beastmaster_Spiderant_Evo1_C
// 0x0008 (0x0590 - 0x0588)
class AStandIn_Beastmaster_Spiderant_Evo1_C : public AStandIn_Beastmaster_Spiderant_C
{
public:
	class UParticleSystemComponent*                    AmbientFire;                                              // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Beastmaster_Spiderant_Evo1.StandIn_Beastmaster_Spiderant_Evo1_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
