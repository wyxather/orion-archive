#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora2_GUN_L01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C
// 0x0068 (0x0160 - 0x00F8)
class UAbility_CM_Ixora2_GUN_L01_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter_Player*                        OakCharacter;                                             // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_CM_Ixora_BSM_L01;// 0x0108(0x0028)
	class AActor*                                      Player;                                                   // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWeapon_Hardpoint_Minigun_C*                 Minigun;                                                  // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UHeatComponent_Gunner_Minigun_C*             HeatComponentLeft;                                        // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UHeatComponent_Gunner_Minigun_C*             HeatComponentRight;                                       // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AOakWeapon_IronBearHardPoint*                HardPointLeft;                                            // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakWeapon_IronBearHardPoint*                HardPointRight;                                           // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C");
		return ptr;
	}


	void OnActivated();
	void CMIxora2_EnterIronBear(class AOakCharacter_IronBear* IronBear);
	void CMIxora2_ExitIronBear(class AOakCharacter_IronBear* IronBear);
	void ExecuteUbergraph_Ability_CM_Ixora2_GUN_L01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
