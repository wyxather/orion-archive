#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_Infusion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Siren_Infusion.Passive_Siren_Infusion_C
// 0x0038 (0x0220 - 0x01E8)
class UPassive_Siren_Infusion_C : public UOakPassiveAbility_Siren
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (Transient, DuplicateTransient)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Passive_Siren_Gentrification;// 0x01F0(0x0028)
	class UWeaponShotModifier*                         ShotModifier;                                             // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_Infusion.Passive_Siren_Infusion_C");
		return ptr;
	}


	void GetShotModifier(class UWeaponShotModifier** res);
	void AddShotModifier();
	void RemoveAllShotModifiers();
	void OnAttunedElementChanged();
	void ExecuteUbergraph_Passive_Siren_Infusion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
