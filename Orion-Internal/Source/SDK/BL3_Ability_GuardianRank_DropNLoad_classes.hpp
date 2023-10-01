#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_DropNLoad_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_GuardianRank_DropNLoad.Ability_GuardianRank_DropNLoad_C
// 0x0048 (0x01F8 - 0x01B0)
class UAbility_GuardianRank_DropNLoad_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	class UFightForYourLifeComponent*                  myFFYLComponent;                                          // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_GuardianRank_DropNLoad;// 0x01C0(0x0028)
	TArray<class UInventorySlotData*>                  SlotsToIterate;                                           // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GuardianRank_DropNLoad.Ability_GuardianRank_DropNLoad_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void OnDownStateStart();
	void ExecuteUbergraph_Ability_GuardianRank_DropNLoad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
