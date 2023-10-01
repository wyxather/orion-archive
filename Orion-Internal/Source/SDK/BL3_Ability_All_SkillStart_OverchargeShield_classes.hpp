#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillStart_OverchargeShield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C
// 0x0013 (0x01D4 - 0x01C1)
class UAbility_All_SkillStart_OverchargeShield_C : public UAbility_AnointParent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)
	float                                              ShieldRefill;                                             // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C");
		return ptr;
	}


	void AnointOnActionSkillActivated(class UOakActionAbility** ActionAbility, bool* res);
	void SkillStarted(class UOakActionAbility* ActionAbility);
	void DrainShield();
	void ResetShield();
	void ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
