#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_M_PowerfulConnections_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C
// 0x0010 (0x0488 - 0x0478)
class APrologue_M_PowerfulConnections_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class AIO_MissionScripted_TrapDoorContainer_C*     IO_MissionScripted_TrapDoorContainer_839_ExecuteUbergraph_Prologue_M_PowerfulConnections_RefProperty;// 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C");
		return ptr;
	}


	void MRE_OpenMarcusTrapDoor();
	void BndEvt__IO_MissionScripted_BrokenVendingMachine_Weapon_2_K2Node_ActorBoundEvent_0_MissionGrant__DelegateSignature();
	void BndEvt__OakTriggerCapsule_M_PowerfulConnections_InstallSpine_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void ExecuteUbergraph_Prologue_M_PowerfulConnections(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
