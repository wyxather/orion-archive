#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PunkShared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PunkShared.BPChar_PunkShared_C
// 0x002B (0x23AC - 0x2381)
class ABPChar_PunkShared_C : public ABPChar_Enemy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2381(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2388(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        DefaultAudioComponent;                                    // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         FoleyMain;                                                // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCoverUserComponent*                         CoverUser;                                                // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ChanceToUseCover;                                         // 0x23A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PunkShared.BPChar_PunkShared_C");
		return ptr;
	}


	void ApplyChanceToUseCover();
	void UserConstructionScript();
	void BPI_Punk_Snipe_Laser_On();
	void BPI_Punk_Snipe_Fire();
	void BPI_Punk_Snipe_Laser_Off();
	void BPI_Punk_Snipe_Laser_Green();
	void PunkBrewHag_PickPotion();
	void BPI_Punk_Anointed_Death();
	void BPI_Punk_Anointed_ADDHealth();
	void BPI_Punk_AnointedX2_Teleport();
	void BPI_Punk_Anointed_FakeDeath();
	void ReceiveBeginPlay();
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_PunkFemaleShared(class AActor* DamageReceiver, class AActor* DamageCauser);
	void Player_HealthDepleted(class AOakCharacter** Character);
	void CE_GoreTorso(const struct FGoreRegionEventSummary& GoreSummary);
	void ExecuteUbergraph_BPChar_PunkShared(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
