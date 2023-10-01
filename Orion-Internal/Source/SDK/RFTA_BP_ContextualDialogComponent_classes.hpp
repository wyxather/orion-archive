#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_ContextualDialogComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ContextualDialogComponent.BP_ContextualDialogComponent_C
// 0x0011 (0x0179 - 0x0168)
class UBP_ContextualDialogComponent_C : public UContextualDialogComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0168(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               InCombat;                                                 // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	float                                              CombatStartTime;                                          // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PendingCombat;                                            // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ContextualDialogComponent.BP_ContextualDialogComponent_C");
		return ptr;
	}


	void CheckPendingCombat();
	void UpdateCombatState();
	void ReceiveBeginPlay();
	void OnNotifyHitTarget_Event_1(struct FDamageInfo* DamageInfo);
	void ReceiveTick(float* DeltaSeconds);
	void DelayedExitCombat();
	void DelayedExitCombat30();
	void ExecuteUbergraph_BP_ContextualDialogComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
