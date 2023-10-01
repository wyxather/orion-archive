#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_HighHealthBreaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_HighHealthBreaker.Ability_All_HighHealthBreaker_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_All_HighHealthBreaker_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class ABPChar_Player_C*                            Player;                                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_EG_Generic_LowHealthExecutor;// 0x0108(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_HighHealthBreaker.Ability_All_HighHealthBreaker_C");
		return ptr;
	}


	void OnActivated();
	void ExecuteUbergraph_Ability_All_HighHealthBreaker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
