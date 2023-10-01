#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_RakkQueen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_RakkQueen.BPChar_RakkQueen_C
// 0x001C (0x2494 - 0x2478)
class ABPChar_RakkQueen_C : public ABPChar_Rakk_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2478(0x0008) (Transient, DuplicateTransient)
	float                                              CashDropDelay_Trickle;                                    // 0x2480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CashDropDelay_OnHit;                                      // 0x2484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x2488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CashToDropTarget;                                         // 0x248C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CashToDropCount;                                          // 0x2490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_RakkQueen.BPChar_RakkQueen_C");
		return ptr;
	}


	void DropCash(bool Lots);
	void UserConstructionScript();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkBloated(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void ResetCashDrop();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPChar_RakkQueen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
