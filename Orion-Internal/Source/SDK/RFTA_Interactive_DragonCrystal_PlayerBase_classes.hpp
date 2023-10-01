#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_DragonCrystal_PlayerBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C
// 0x0008 (0x04C8 - 0x04C0)
class AInteractive_DragonCrystal_PlayerBase_C : public AInteractive_DragonCrystal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C");
		return ptr;
	}


	void IsIntroCrystal(bool* Out);
	void ReceiveBeginPlay();
	void ActivationCameraFinished();
	void TriggerFade();
	void ColorizeCrystal();
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature(struct FName* StateName, struct FName* PreviousStateName);
	void ExecuteUbergraph_Interactive_DragonCrystal_PlayerBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
