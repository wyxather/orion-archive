#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_FoilHatPsycho_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_FoilHatPsycho.BPChar_FoilHatPsycho_C
// 0x0040 (0x2420 - 0x23E0)
class ABPChar_FoilHatPsycho_C : public ABPChar_PsychoShared_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x23E0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Psycho_Male_Tinfoil_Hat;                               // 0x23E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   SceneBodySwitch;                                          // 0x23F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x23F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMissionDirectorComponent*                OakMissionDirector;                                       // 0x2400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMissionIconComponent*                    OakMissionIcon;                                           // 0x2408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMissionObserverComponent*                   MissionObserver;                                          // 0x2410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AController*                                 User;                                                     // 0x2418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_FoilHatPsycho.BPChar_FoilHatPsycho_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_FoilHatPsycho(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ExecuteUbergraph_BPChar_FoilHatPsycho(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
