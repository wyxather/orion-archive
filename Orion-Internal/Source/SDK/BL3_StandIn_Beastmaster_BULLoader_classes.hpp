#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Beastmaster_BULLoader_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_Beastmaster_BULLoader.StandIn_Beastmaster_BULLoader_C
// 0x0010 (0x0590 - 0x0580)
class AStandIn_Beastmaster_BULLoader_C : public AStandIn_BeastMaster_PetBase_C
{
public:
	class UGbxSkeletalMeshComponent*                   GbxSkeletalMesh_ColorizationTarget;                       // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Mesh;                                                     // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Beastmaster_BULLoader.StandIn_Beastmaster_BULLoader_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
