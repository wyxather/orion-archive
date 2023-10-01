#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VendingMachine_Health_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VendingMachine_Health.BP_VendingMachine_Health_C
// 0x0008 (0x0710 - 0x0708)
class ABP_VendingMachine_Health_C : public ABP_VendingMachineBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0708(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VendingMachine_Health.BP_VendingMachine_Health_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Health(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void ExecuteUbergraph_BP_VendingMachine_Health(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
