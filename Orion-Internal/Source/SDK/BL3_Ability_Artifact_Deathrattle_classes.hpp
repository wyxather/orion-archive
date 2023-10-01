#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Deathrattle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C
// 0x003F (0x0159 - 0x011A)
class UAbility_Artifact_Deathrattle_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_ElDragonJr;// 0x0128(0x0028)
	class APlayerController*                           PlayerController;                                         // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               usedFreeSecondWind;                                       // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_Deathrattle.Ability_Artifact_Deathrattle_C");
		return ptr;
	}


	void OnDeactivated();
	void DownStateStopped();
	void OnRegistered();
	void OnActivated();
	void OnUnregistered();
	void DownStateStarted();
	void ExecuteUbergraph_Ability_Artifact_Deathrattle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
