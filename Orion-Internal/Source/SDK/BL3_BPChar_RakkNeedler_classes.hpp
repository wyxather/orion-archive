#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_RakkNeedler_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_RakkNeedler.BPChar_RakkNeedler_C
// 0x0010 (0x2488 - 0x2478)
class ABPChar_RakkNeedler_C : public ABPChar_Rakk_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2478(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Normal_Contrails;                                         // 0x2480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_RakkNeedler.BPChar_RakkNeedler_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_RakkNeedler(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ExecuteUbergraph_BPChar_RakkNeedler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
