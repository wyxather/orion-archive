#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Vengeance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C
// 0x003E (0x0158 - 0x011A)
class UAbility_Artifact_Vengeance_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	class ABPChar_Player_C*                            Player;                                                   // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_Vengeance;// 0x0130(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C");
		return ptr;
	}


	void OnActivated();
	void OnSlamEnd(const struct FGroundSlamEndedDetails& Details);
	void ExecuteUbergraph_Ability_Artifact_Vengeance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
