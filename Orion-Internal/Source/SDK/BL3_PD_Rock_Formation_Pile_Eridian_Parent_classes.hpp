#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Rock_Formation_Pile_Eridian_Parent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C
// 0x0080 (0x05C0 - 0x0540)
class APD_Rock_Formation_Pile_Eridian_Parent_C : public ABP_DestructibleGameplayAndNetworkRelevant_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (Transient, DuplicateTransient)
	class UOakLootableComponent*                       OakLootable;                                              // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            MeleeSocket;                                              // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        Targetable;                                               // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTagContainerComponent*              GameplayTagContainer;                                     // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            LootSocket;                                               // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDamageComponent*                         OakDamage;                                                // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Dissolve_DissolvePercent_B3805AAF4C24033A40688289FBDA7116;// 0x0580(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Dissolve__Direction_B3805AAF4C24033A40688289FBDA7116;     // 0x0584(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Dissolve;                                                 // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ResonatorHit_Max;                                         // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ResonatorHit_Count;                                       // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            EridianPile_dMaterialInst;                                // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    CrystalDestroyed;                                         // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UItemPoolListInterface*                      EridiumLoot;                                              // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PD_Rock_Formation_Pile_Eridian_Parent.PD_Rock_Formation_Pile_Eridian_Parent_C");
		return ptr;
	}


	void UserConstructionScript();
	void Dissolve__FinishedFunc();
	void Dissolve__UpdateFunc();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_PD_Rock_Formation_Pile_Eridian(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void Damaged(const struct FVector& HitLocation, const struct FVector& ImpulseDir, class AController* Controller);
	void ReceiveBeginPlay();
	void DestroyCrystal();
	void FractureCrystal(class UDestructibleComponent* Crystal);
	void ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Parent(int EntryPoint);
	void CrystalDestroyed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
