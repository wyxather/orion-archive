#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagPup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_SkagPup.BPChar_SkagPup_C
// 0x0010 (0x2610 - 0x2600)
class ABPChar_SkagPup_C : public ABPChar_SkagShared_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2600(0x0008) (Transient, DuplicateTransient)
	class UAIStolenProjDetector_C*                     AIStolenProjDetector;                                     // 0x2608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_SkagPup.BPChar_SkagPup_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagPup(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ExecuteUbergraph_BPChar_SkagPup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
