#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagBadass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_SkagBadass.BPChar_SkagBadass_C
// 0x0198 (0x2798 - 0x2600)
class ABPChar_SkagBadass_C : public ABPChar_SkagShared_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2600(0x0008) (Transient, DuplicateTransient)
	TMap<EOakElementalType, class UClass*>             ElementToAIExplosiveComponentMap_Bomb;                    // 0x2608(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UParticleSystem*>    ElementToHowlExplosionFXMap;                              // 0x2658(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UWwiseEvent*>        ElementToAuraWwiseSTART;                                  // 0x26A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UWwiseEvent*>        ElementToAuraWwiseSTOP;                                   // 0x26F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UWwiseEvent*>        ElementToHowlWwise;                                       // 0x2748(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_SkagBadass.BPChar_SkagBadass_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Skag_SetBadassBombProjectile();
	void Skag_Howl_Start();
	void Skag_Howl_Stop();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagBadass(class AActor* DamageReceiver, class AActor* DamageCauser);
	void Skag_How_Interrupted();
	void Wwise_Aura_Loop_START();
	void Wwise_Aura_Lp_STOP();
	void ExecuteUbergraph_BPChar_SkagBadass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
