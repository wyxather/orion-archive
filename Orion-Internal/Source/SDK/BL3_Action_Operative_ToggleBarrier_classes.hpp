#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_ToggleBarrier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C
// 0x0008 (0x0280 - 0x0278)
class UAction_Operative_ToggleBarrier_C : public UOakAction_Anim_ActionAbility_Barrier
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C");
		return ptr;
	}


	void AN_ButtonPressed();
	void AN_ShowDevice();
	void AN_HideDevice();
	void ExecuteUbergraph_Action_Operative_ToggleBarrier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
