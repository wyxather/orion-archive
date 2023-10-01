#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPSirenCharacterComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPSirenCharacterComponent.BPSirenCharacterComponent_C
// 0x002C (0x03F4 - 0x03C8)
class UBPSirenCharacterComponent_C : public USirenCharacterComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAttributeFloat                          RushBonus;                                                // 0x03D0(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class UBPEventHub_Siren_C*                         SirenEventHub;                                            // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FlareSpawnLocation;                                       // 0x03E8(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPSirenCharacterComponent.BPSirenCharacterComponent_C");
		return ptr;
	}


	void GetPhaseFlareSpawnLocation(struct FVector* res);
	void SetPhaseFlareSpawnLocation(const struct FVector& Loc, bool* res);
	void Start3rdPersonArmFade(bool* bVisible, bool* bInstant);
	void StartTattoFade(bool* bVisible);
	void SetArmElement(EPhaseTranceElementalType* NewElement);
	void StartArmMaterialInstanceFade(class UMaterialInstance** NewInstance);
	void ReceiveBeginPlay();
	void OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void OnRushEventHappened();
	void SetPhaseCastMeshActive(bool* bActive);
	void ExecuteUbergraph_BPSirenCharacterComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
