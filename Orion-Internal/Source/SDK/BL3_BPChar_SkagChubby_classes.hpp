#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagChubby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_SkagChubby.BPChar_SkagChubby_C
// 0x0008 (0x2608 - 0x2600)
class ABPChar_SkagChubby_C : public ABPChar_SkagShared_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2600(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_SkagChubby.BPChar_SkagChubby_C");
		return ptr;
	}


	void UserConstructionScript();
	void DE_LowHealth(const struct FDamageReactionEventSummary& DamageSummary);
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagChubby(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ExecuteUbergraph_BPChar_SkagChubby(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
