#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_PetLoader_Charge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C
// 0x0028 (0x0168 - 0x0140)
class UACharge_PetLoader_Charge_C : public UGbxAction_AICharge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0008) (Transient, DuplicateTransient)
	struct FDataTableValueHandle                       ChargeDamage;                                             // 0x0148(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBPEventHub_Beastmaster_C*                   EventHubOwner;                                            // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C");
		return ptr;
	}


	void OnLoop(class AActor** Actor);
	void AttackCommandUsed();
	void StrikeDamage();
	void OnStrike(class AActor** Actor);
	void OnHitWall(class AActor** Actor);
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnServerBegin(class AActor** Actor);
	void CallAttackCommandUsed();
	void ExecuteUbergraph_ACharge_PetLoader_Charge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
