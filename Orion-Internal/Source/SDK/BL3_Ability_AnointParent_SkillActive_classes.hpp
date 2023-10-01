#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_SkillActive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C
// 0x0051 (0x0212 - 0x01C1)
class UAbility_AnointParent_SkillActive_C : public UAbility_AnointParent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)
	struct FAttributeInitializationData                AnointmentChargeDuration;                                 // 0x01D0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABPChar_Operative_C*                         OperativeCharacter;                                       // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerIsOperative;                                        // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceShutdown;                                            // 0x0211(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C");
		return ptr;
	}


	void AnointOnActionSkillCoolingDown(class UOakActionAbility** ActionAbility, bool* res);
	void AnointOnActionSkillActivated(class UOakActionAbility** ActionAbility, bool* res);
	void OnActivated();
	void AnointRemoveEffect();
	void OnDeactivated();
	void ExecuteUbergraph_Ability_AnointParent_SkillActive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
