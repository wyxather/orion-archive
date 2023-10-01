#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Death_TinkLoot_Death_F1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Death_TinkLoot_Death_F1.Death_TinkLoot_Death_F1_C
// 0x0010 (0x0228 - 0x0218)
class UDeath_TinkLoot_Death_F1_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Death_TinkLoot_Death_F1.Death_TinkLoot_Death_F1_C");
		return ptr;
	}


	void LootSpray();
	void OnServerBegin(class AActor** Actor);
	void Notify_DeathPowerUp();
	void ExecuteUbergraph_Death_TinkLoot_Death_F1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
