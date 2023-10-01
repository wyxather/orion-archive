#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C
// 0x0050 (0x0200 - 0x01B0)
class UPassive_Beastmaster_Bond2_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	bool                                               bWasPetKill;                                              // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET
	struct FGameResourcePoolReference                  NewResourcePool;                                          // 0x01C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Bond2;// 0x01D8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C");
		return ptr;
	}


	void TryRefillAttackCommandPool();
	bool RandomChanceByGrade();
	void OnKilledEnemy_Bond2(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnActivated();
	void DoCooldownReduction_Bond2();
	void ExecuteUbergraph_Passive_Beastmaster_Bond2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
