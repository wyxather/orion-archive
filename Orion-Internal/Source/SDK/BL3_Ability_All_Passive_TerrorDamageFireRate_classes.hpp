#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_TerrorDamageFireRate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_Passive_TerrorDamageFireRate.Ability_All_Passive_TerrorDamageFireRate_C
// 0x0020 (0x0118 - 0x00F8)
class UAbility_All_Passive_TerrorDamageFireRate_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class ABPChar_Player_C*                            Player;                                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                GenerateTerrorRate;                                       // 0x0108(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                GenerateTerrorDuration;                                   // 0x0110(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_Passive_TerrorDamageFireRate.Ability_All_Passive_TerrorDamageFireRate_C");
		return ptr;
	}


	void OnActivated();
	void ExecuteUbergraph_Ability_All_Passive_TerrorDamageFireRate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
