#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_RakkScorpion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_RakkScorpion.BPChar_RakkScorpion_C
// 0x0010 (0x2488 - 0x2478)
class ABPChar_RakkScorpion_C : public ABPChar_Rakk_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2478(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    NormalContrails;                                          // 0x2480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_RakkScorpion.BPChar_RakkScorpion_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_RakkScorpion(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ExecuteUbergraph_BPChar_RakkScorpion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
