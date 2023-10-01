#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_Gunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C
// 0x004A (0x020B - 0x01C1)
class UAbility_AnointParent_Gunner_C : public UAbility_AnointParent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)
	class UBPEventHub_Gunner_C*                        GunnerEventHub;                                           // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnterIronBearEvents;                                      // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_AnointParent_Gunner;// 0x01E0(0x0028)
	bool                                               ExitIronBearEvents;                                       // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoBearStarted;                                          // 0x0209(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoBearEnded;                                            // 0x020A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C");
		return ptr;
	}


	void AnointAutoBearEnded(bool HasValidTarget, class AActor* ChargeTarget);
	void AnointAutoBearStarted();
	void AnointIronBearEnded();
	void AnointIronIronBearStarted(class AOakCharacter_IronBear* IronBear);
	void OnActivated();
	void BindGunnerEvents();
	void ExecuteUbergraph_Ability_AnointParent_Gunner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
