#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoints_BearFist_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponType_Hardpoints_BearFist.WeaponType_Hardpoints_BearFist_C
// 0x0028 (0x0AB0 - 0x0A88)
class AWeaponType_Hardpoints_BearFist_C : public AWeaponType_Hardpoints_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A88(0x0008) (Transient, DuplicateTransient)
	class UGameplayTasksComponent*                     GameplayTasks;                                            // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxActionComponent*                         GbxAction;                                                // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPAnim_IronBear_BearFist_C*                 BPAnim_BearFist_3rd;                                      // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPAnim_IronBear_BearFist_C*                 BPAnim_BearFist_1st;                                      // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponType_Hardpoints_BearFist.WeaponType_Hardpoints_BearFist_C");
		return ptr;
	}


	void UserConstructionScript();
	void CausedDamage_BearFist(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void K2_Initialize();
	void K2_InitializeMod();
	void K2_Initialize1P();
	void K2_InitializeMod1P();
	void InitializeHardPointIronCub();
	void ExecuteUbergraph_WeaponType_Hardpoints_BearFist(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
