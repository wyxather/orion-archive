#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_NPC_Shared_DoorSmall_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ASpawn_NPC_Shared_DoorSmall.ASpawn_NPC_Shared_DoorSmall_C
// 0x0008 (0x01C8 - 0x01C0)
class UASpawn_NPC_Shared_DoorSmall_C : public UGbxAction_SpawnAnim
{
public:
	class UParticleSystemComponent*                    MyTeleportEmitter;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ASpawn_NPC_Shared_DoorSmall.ASpawn_NPC_Shared_DoorSmall_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
