#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_BloodyHarvest_Terror_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C
// 0x0078 (0x0170 - 0x00F8)
class UAbility_BloodyHarvest_Terror_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	float                                              TerrorDuration;                                           // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FGameResourcePoolReference                  ResourcePool_Terror;                                      // 0x0108(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ResourcePoolDelegate RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Ability_BloodyHarvest_Insanity;// 0x0120(0x0028)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BloodyHarvest_Terror;// 0x0148(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C");
		return ptr;
	}


	void ForceResetAllTerror();
	void SetTerrorResourcePool();
	void GetTerrorResourcePoolValues(bool* IsValid_, float* Terror_Current_Value);
	void RemoveTerror();
	void ApplyTerror3_Presentation();
	void ApplyTerror2_Presentation();
	void ApplyTerror1_Presentation();
	void RemoveTerror3_Presentation();
	void RemoveTerror2_Presentation();
	void RemoveTerror1_Presentation();
	void ApplyTerror();
	void Terror();
	void Update_Terror(const struct FGameResourcePoolReference& ResourcePool);
	void OnDeath_Terror(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_Ability_BloodyHarvest_Terror(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
