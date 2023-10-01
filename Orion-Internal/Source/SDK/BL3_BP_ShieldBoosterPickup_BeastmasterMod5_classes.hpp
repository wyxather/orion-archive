#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ShieldBoosterPickup_BeastmasterMod5_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShieldBoosterPickup_BeastmasterMod5.BP_ShieldBoosterPickup_BeastmasterMod5_C
// 0x0010 (0x04E0 - 0x04D0)
class ABP_ShieldBoosterPickup_BeastmasterMod5_C : public AShieldBoosterNonAugment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter_Player*                        PickerUpper;                                              // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShieldBoosterPickup_BeastmasterMod5.BP_ShieldBoosterPickup_BeastmasterMod5_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PickedUp(class AOakCharacter* PickupInstigator);
	void ExecuteUbergraph_BP_ShieldBoosterPickup_BeastmasterMod5(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
