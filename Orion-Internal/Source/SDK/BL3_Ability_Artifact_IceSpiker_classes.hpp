#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_IceSpiker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C
// 0x004E (0x0168 - 0x011A)
class UAbility_Artifact_IceSpiker_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	float                                              BonusDamage;                                              // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class UClass*                                      ElementalDamageType;                                      // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_FrozenAurora;// 0x0138(0x0028)
	class ABPChar_Player_C*                            Player;                                                   // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C");
		return ptr;
	}


	void GbxAsyncRequest_Spawned_8F4C186441C83D0984C828A8A9143007(class AActor* Actor, int InstanceIndex);
	void GbxAsyncRequest_Spawned_3D3B284F40AA4A2CD27B3FA660DADB8E(class AActor* Actor, int InstanceIndex);
	void OnActivated();
	void OnDeactivated();
	void GroundSlam_End(const struct FGroundSlamEndedDetails& Details);
	void ExecuteUbergraph_Ability_Artifact_IceSpiker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
