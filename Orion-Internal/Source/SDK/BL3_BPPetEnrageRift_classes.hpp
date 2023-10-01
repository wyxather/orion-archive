#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPPetEnrageRift_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPPetEnrageRift.BPPetEnrageRift_C
// 0x0026 (0x04DE - 0x04B8)
class ABPPetEnrageRift_C : public APetEnrageRift
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B8(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxAction*                                  HulkCE;                                                   // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Mod3Kills;                                                // 0x04D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRemoveMod2;                                              // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRemoveMod3;                                              // 0x04DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPPetEnrageRift.BPPetEnrageRift_C");
		return ptr;
	}


	void OnRep_Mod3Kills();
	void RemoveMod3();
	void OnCausedDeath(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* Details);
	void TrySetupMod3(class UOakActionAbility_HulkOut* ActionAbility);
	void RemoveMod2();
	void TrySetupMod2(class UOakActionAbility_HulkOut* ActionAbility);
	void TrySetupMod1(class UOakActionAbility_HulkOut* ActionAbility);
	void SetupPlayerMods();
	void CreateActionRegisters(TArray<struct FGbxActionRegister>* res);
	void SetPetResourceLocks(bool bLocked);
	void PreparePetPostTeleport();
	void Cleanup();
	void PreparePetPreTeleport();
	void CauseDamageToPet();
	bool TeleportPetToCurrentLocation();
	void UserConstructionScript();
	void OnPetResurrected();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void NotifyPetTeleported();
	void OnShutdownRequested(bool* bForced);
	void ExecuteUbergraph_BPPetEnrageRift(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
