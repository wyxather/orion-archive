#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_IronBear_DakkaBear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C
// 0x0040 (0x2728 - 0x26E8)
class ABPChar_IronBear_DakkaBear_C : public ABPChar_IronBear_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x26E8(0x0008) (Transient, DuplicateTransient)
	class APawn*                                       GunnersNextActor;                                         // 0x26F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FStatusEffectInstanceReference              IronBearDakkaInstance;                                    // 0x26F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStatusEffectInstanceReference              GunnerDakkaInstance;                                      // 0x2710(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C");
		return ptr;
	}


	void BootGunnersNestOccupant(bool* InputPin, float* Delay);
	void KickPlayerOutOfGunnersNest(bool* zKilled_, float* Delay);
	void UserConstructionScript();
	void OnRep_GunnersNestOccupied();
	void OnAttachStateChanged_GunnersNest();
	void StartGunnersNestBonus();
	void StopGunnersNextBonus();
	void CalculateAutoBearDuration();
	void ExecuteUbergraph_BPChar_IronBear_DakkaBear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
