#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_Siren_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_AnointParent_Siren.Ability_AnointParent_Siren_C
// 0x004C (0x020D - 0x01C1)
class UAbility_AnointParent_Siren_C : public UAbility_AnointParent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)
	class UBPEventHub_Siren_C*                         SirenEventHub;                                            // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PhaseCast;                                                // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PhaseGraspStart;                                          // 0x01D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PhaseSlamStart;                                           // 0x01DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PhaseFlareStart;                                          // 0x01DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_AnointParent_Siren;// 0x01E0(0x0028)
	bool                                               GraspValidTarget;                                         // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PhaseGraspEnd;                                            // 0x0209(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PhaseSlamEnd;                                             // 0x020A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PhaseFlareEnd;                                            // 0x020B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnointWhileSkillActive;                                   // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent_Siren.Ability_AnointParent_Siren_C");
		return ptr;
	}


	void AnointFlareStarted(EPhaseTranceAttackFamilyType FamilyType, TEnumAsByte<EPhasetranceAttackAction> ActionAction, bool Success);
	void AnointCastStarted(EPhaseTranceAttackFamilyType FamilyType, TEnumAsByte<EPhasetranceAttackAction> AttackAction, bool Success);
	void AnointGraspEnded(bool Killed);
	void AnointGraspStarted(class AActor* Enemy, EPhaseTranceElementalType Element);
	void AnointSlamEnded();
	void AnointSlamStarted();
	void OnActivated();
	void BindSirenEvents();
	void ExecuteUbergraph_Ability_AnointParent_Siren(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
