#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_Operative_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_AnointParent_Operative.Ability_AnointParent_Operative_C
// 0x0057 (0x0218 - 0x01C1)
class UAbility_AnointParent_Operative_C : public UAbility_AnointParent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)
	class UBPEventHub_Operative_C*                     OperativeEventHub;                                        // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_AnointParent_Operative;// 0x01D8(0x0028)
	bool                                               BarrierStarted;                                           // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BarrierEnded;                                             // 0x0201(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CloneStarted;                                             // 0x0202(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CloneEnded;                                               // 0x0203(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SNTRYStarted;                                             // 0x0204(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SNTRYEnded;                                               // 0x0205(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CloneSwappedPlaces;                                       // 0x0206(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CannonActivated;                                          // 0x0207(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnointActiveWhileSkillActive;                             // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
	class ABPChar_Operative_C*                         OperativeCharacter;                                       // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent_Operative.Ability_AnointParent_Operative_C");
		return ptr;
	}


	void AnointOperativeIsActionAbilityActive(class UClass* ActionSkill, bool* res);
	void AnointOperativeActionSkillEnd(TEnumAsByte<EOperativeGadgets> ActionSkill);
	void AnointOperativeActionSkillStart(TEnumAsByte<EOperativeGadgets> ActionSkill);
	void AnointCloneSwappedPlaces();
	void AnointCannonActivated(bool* res);
	void AnointSNTRYEnded(bool* res);
	void AnointSNTRYStarted(bool* res);
	void AnointCloneEnded(bool* res);
	void AnointCloneStarted(bool* res);
	void AnointBarrierEnded(bool* res);
	void AnointBarrierStart(bool* res);
	void OnActivated();
	void BindOperativeEvents();
	void ExecuteUbergraph_Ability_AnointParent_Operative(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
