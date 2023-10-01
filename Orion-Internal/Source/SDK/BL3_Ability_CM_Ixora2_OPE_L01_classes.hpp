#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora2_OPE_L01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_CM_Ixora2_OPE_L01.Ability_CM_Ixora2_OPE_L01_C
// 0x0040 (0x0138 - 0x00F8)
class UAbility_CM_Ixora2_OPE_L01_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_CM_Ixora_OPE_L01;// 0x0100(0x0028)
	int                                                PercentAmmo;                                              // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class AOakCharacter*                               MyOakCharacter;                                           // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CM_Ixora2_OPE_L01.Ability_CM_Ixora2_OPE_L01_C");
		return ptr;
	}


	void OnActivated();
	void CSM_OPE_Ixora2_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Ability_CM_Ixora2_OPE_L01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
