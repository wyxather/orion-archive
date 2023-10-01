#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PhaseLock_Paralysis_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C
// 0x0024 (0x0B08 - 0x0AE4)
class UControlledMove_PhaseLock_Paralysis_C : public UControlledMove_PhaseLock_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AE4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE8(0x0008) (Transient, DuplicateTransient)
	struct FDataTableValueHandle                       BubbleDuration;                                           // 0x0AF0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C");
		return ptr;
	}


	void CanStayInParalysis(bool* bRes);
	void OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator);
	void OnTakeDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void OnServerStop(bool* bInterrupted);
	void EndParalysisEarly();
	void UnbindFromAll();
	void OnDeath(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ExecuteUbergraph_ControlledMove_PhaseLock_Paralysis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
