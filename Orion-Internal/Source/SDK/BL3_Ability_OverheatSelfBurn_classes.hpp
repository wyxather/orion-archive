#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_OverheatSelfBurn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_OverheatSelfBurn_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	float                                              SelfDamageScale;                                          // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverheatThreshold;                                        // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_OverheatSelfBurn;// 0x0108(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnPaused();
	void OnResumed();
	void OnActivated();
	void OnDeactivated();
	void OnUnregistered();
	void ExitedDownState();
	void ExecuteUbergraph_Ability_OverheatSelfBurn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
