#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_FlickerCloak_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mod_FlickerCloak.Mod_FlickerCloak_C
// 0x001C (0x0728 - 0x070C)
class AMod_FlickerCloak_C : public ARangedWeapon_Mod_Action_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0710(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ShieldHealthPct;                                          // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShieldDuration;                                           // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxLevelShieldHealthPct;                                  // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CooldownDuration;                                         // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_FlickerCloak.Mod_FlickerCloak_C");
		return ptr;
	}


	void GetShieldHealthPctScalar(float* Out);
	void DoAction(class UActionComponent** ActionComponent, int* ActionID);
	float GetModActiveRemainingPct();
	void ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnBeginUse();
	void AddModPower(float* Damage, float* BonusModPowerMod);
	void ExecuteUbergraph_Mod_FlickerCloak(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
