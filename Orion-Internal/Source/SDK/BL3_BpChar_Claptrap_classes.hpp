#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BpChar_Claptrap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BpChar_Claptrap.BPChar_Claptrap_C
// 0x00AC (0x263C - 0x2590)
class ABPChar_Claptrap_C : public ABPChar_NonPlayerCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2590(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x2598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AntennaChoice;                                            // 0x25A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPNPCFightForYourLifeComponent_C*           BPNPCFightForYourLifeComponent;                           // 0x25A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Claptrap_Green_Blinky_Light;                           // 0x25B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CurrentAntenna;                                           // 0x25B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x25BC(0x0004) MISSED OFFSET
	TArray<class UStaticMesh*>                         AntennaChoices;                                           // 0x25C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Time_ClaptrapCommentsOnAntenna;                           // 0x25D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x25D4(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerClaptrapCommentsAntenna;                             // 0x25D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOakCharacter*                               Claptrap_OakCharacter;                                    // 0x25E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                AntennaVOLineValue;                                       // 0x25E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CoatHangerVOLineValue;                                    // 0x25EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ForkVOLineValue;                                          // 0x25F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UmbrellaVOLineValue;                                      // 0x25F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CapVOLineValue;                                           // 0x25F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClapNoAntennaActive;                                      // 0x25FC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x25FD(0x0003) MISSED OFFSET
	int                                                AntennaChoiceIndex;                                       // 0x2600(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2604(0x0004) MISSED OFFSET
	class UGbxCondition*                               MissionAvailableBadReception;                             // 0x2608(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               MissionAvailableBitterPillsToSwallow;                     // 0x2610(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               MissionAvailableRockOnPandora;                            // 0x2618(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               MissionAvailableECHONetNeutrality;                        // 0x2620(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               MissionAvailableBabyDancer;                               // 0x2628(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               MissionAvailableTooManyKevins;                            // 0x2630(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                LocalAntennaVar;                                          // 0x2638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BpChar_Claptrap.BPChar_Claptrap_C");
		return ptr;
	}


	void OnRep_AntennaChoiceIndex();
	void OnRep_ClapNoAntennaActive();
	void ClaptrapComments(int AntennaChoice);
	void UserConstructionScript();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Claptrap(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void CE_TimerToSwitchAntenna();
	void ForceClaptrapDownstate();
	void DisableClaptrapAntenna();
	void EnableClaptrapAntenna();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700(class AController** UserController, class UPrimitiveComponent** UsedComponent);
	void BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Claptrap();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Claptrap();
	void ExecuteUbergraph_BPChar_Claptrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
