#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Beastmaster_Monkey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_Beastmaster_Monkey.StandIn_Beastmaster_Monkey_C
// 0x0008 (0x0588 - 0x0580)
class AStandIn_Beastmaster_Monkey_C : public AStandIn_BeastMaster_PetBase_C
{
public:
	class UGbxSkeletalMeshComponent*                   Mesh;                                                     // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Beastmaster_Monkey.StandIn_Beastmaster_Monkey_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
