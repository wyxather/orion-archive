#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagButtmunch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_SkagButtmunch.BPChar_SkagButtmunch_C
// 0x0020 (0x27B8 - 0x2798)
class ABPChar_SkagButtmunch_C : public ABPChar_SkagBadass_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2798(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Psycho_Male_Mask;                                      // 0x27A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   Switch_Mask;                                              // 0x27A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Rakkman_TailHook;                                      // 0x27B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_SkagButtmunch.BPChar_SkagButtmunch_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagButtmunch(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ExecuteUbergraph_BPChar_SkagButtmunch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
