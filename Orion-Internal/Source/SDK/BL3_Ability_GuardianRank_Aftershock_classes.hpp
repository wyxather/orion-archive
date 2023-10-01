#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_Aftershock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C
// 0x008C (0x023C - 0x01B0)
class UAbility_GuardianRank_Aftershock_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	TArray<float>                                      DamageInstances;                                          // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UDamageCauserComponent*                      myDamageCauserComponent;                                  // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_GuardianRank_Aftershock;// 0x01D0(0x0028)
	struct FDataTableValueHandle                       DamageInstanceDurationHandle;                             // 0x01F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DamageInstanceDuration;                                   // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentDamageInstance;                                    // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GroundSlamLock;                                           // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	struct FDataTableValueHandle                       ConversionRateHandle;                                     // 0x0220(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ConversionRate;                                           // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C");
		return ptr;
	}


	void HandleDamageInstanceLogic();
	void HandleGroundSlamLock();
	void DealStoredDamage(class AActor* ActorToDamage, bool* DamageDealt);
	void StoreDamage(float Damage);
	void GetTotalInstanceDamageStored(float* Total);
	void InitAllDamageInstances();
	void DEBUGPrintAllDamageInstances();
	void ClearAllDamageInstances();
	void OnDeactivated();
	void OnActivated();
	void On_Damage_Caused(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_GuardianRank_Aftershock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
