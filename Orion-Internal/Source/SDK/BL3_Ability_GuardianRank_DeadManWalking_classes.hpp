#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_DeadManWalking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_GuardianRank_DeadManWalking.Ability_GuardianRank_DeadManWalking_C
// 0x003A (0x01EA - 0x01B0)
class UAbility_GuardianRank_DeadManWalking_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	class UFightForYourLifeComponent*                  myFFYLComponent;                                          // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_GuardianRank_DeadManWalking;// 0x01C0(0x0028)
	bool                                               InFFYL;                                                   // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AppliedStatusEffect;                                      // 0x01E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GuardianRank_DeadManWalking.Ability_GuardianRank_DeadManWalking_C");
		return ptr;
	}


	void AddStatusEffect();
	void RemoveStatusEffect();
	void OnDownStateStart();
	void OnDownStateEnd();
	void OnActivated();
	void UpdateConsumption();
	void OnDeactivated();
	void ExecuteUbergraph_Ability_GuardianRank_DeadManWalking(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
