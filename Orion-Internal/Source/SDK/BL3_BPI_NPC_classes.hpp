#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_NPC.BPI_NPC_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_NPC_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_NPC.BPI_NPC_C");
		return ptr;
	}


	void SetNPCEngagePlayerRange(float Units);
	void ForceNPCRevive();
	void NPCCanReviveOthers(bool CanReviveOthers);
	void ForceDefaultCombatNPCDownstate();
	void TakeThingThenGiveBack();
	void NPCResetUsable();
	void NPCConstrainUsable();
	void IgnoreEnemies(bool IgnoreEnemies);
	void NPCHideSword();
	void NPCUnhideSword();
	void NPCUnhideWeapon();
	void NPCHideWeapon();
	void HoldHandOutToTakeSomething();
	void GiveSomethingToThePlayer();
	void ThingToHold(class UStaticMesh* TheThingToHold, const struct FItemPoolInfo& ThePickupToHold, const struct FTransform& OffsetTransform, float PutAwayOffset, float TakeOutOffset, bool UseAltAnimation);
	void CanPatrol(bool CanPatrol);
	void EngagePlayerWhenIdle(bool LookAtPlayer);
	void UseSmartObjects(bool UseSmartObjects);
	void EngageInCombat(bool EngageInCombat);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
