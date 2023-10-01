#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkLoot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_TinkLoot.BPI_TinkLoot_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_TinkLoot_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TinkLoot.BPI_TinkLoot_C");
		return ptr;
	}


	void TinkLoot_NormalDeathStart();
	void TinkLoot_DeathPreamble();
	void TinkLoot_DeathProtection(bool IsActivated);
	void TinkLoot_ClearEscapeMound();
	void TinkLoot_TriggerRunAwayDialog();
	void TinkLoot_StopAnnounce();
	void TinkLoot_StartAnnounce();
	void TinkLoot_StopCashTrail();
	void TinkLoot_StartCashTrail();
	void TinkLoot_OnTargetChanged();
	void TinkLoot_DeathLoot();
	void TinkLoot_AllowHiding();
	void TinkLoot_Escaped();
	void TinkLoot_DigInterupted();
	void TinkLoot_StartDig();
	void TinkLoot_TimeToEscape();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
