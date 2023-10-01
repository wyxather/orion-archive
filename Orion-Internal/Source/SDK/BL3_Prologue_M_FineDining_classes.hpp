#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_M_FineDining_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prologue_M_FineDining.Prologue_M_FineDining_C
// 0x0020 (0x0498 - 0x0478)
class APrologue_M_FineDining_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	struct FRandomStream                               RandStream_DiceSpawnChance;                               // 0x0480(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOakTriggerVolume*                           OakTriggerVolume_1_ExecuteUbergraph_Prologue_M_FineDining_RefProperty;// 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor_1_ExecuteUbergraph_Prologue_M_FineDining_RefProperty;// 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_M_FineDining.Prologue_M_FineDining_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnTakeAnyDamage_SpatulaDecal(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void ExecuteUbergraph_Prologue_M_FineDining(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
