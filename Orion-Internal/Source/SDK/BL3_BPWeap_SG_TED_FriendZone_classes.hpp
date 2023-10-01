#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SG_TED_FriendZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C
// 0x000C (0x0A64 - 0x0A58)
class ABPWeap_SG_TED_FriendZone_C : public ABPWeap_SG_TED_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A58(0x0008) (Transient, DuplicateTransient)
	float                                              DropChance;                                               // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C");
		return ptr;
	}


	void TedioreThrowWeapon(class AActor** ThrownProjectile);
	void UserConstructionScript();
	void SpawnTurret();
	void ExecuteUbergraph_BPWeap_SG_TED_FriendZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
