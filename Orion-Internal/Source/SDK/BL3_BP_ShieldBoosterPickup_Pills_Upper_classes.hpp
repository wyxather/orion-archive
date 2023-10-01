#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ShieldBoosterPickup_Pills_Upper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C
// 0x0020 (0x0508 - 0x04E8)
class ABP_ShieldBoosterPickup_Pills_Upper_C : public AShieldChargeInventoryPickup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (Transient, DuplicateTransient)
	float                                              Ammo_Value;                                               // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_Value;                                             // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter_Player*                        PickerUpper;                                              // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UStatusEffectData*                           PillType;                                                 // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PickedUp(class AOakCharacter* PickupInstigator);
	void ExecuteUbergraph_BP_ShieldBoosterPickup_Pills_Upper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
