#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Crouch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerAbility_Crouch.PlayerAbility_Crouch_C
// 0x0008 (0x0138 - 0x0130)
class UPlayerAbility_Crouch_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAbility_Crouch.PlayerAbility_Crouch_C");
		return ptr;
	}


	void FlushCrouchInput();
	void IsCrouchToggle(bool* res);
	void GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_6(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_5(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_GroundPound_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action);
	void OnPaused();
	void ExecuteUbergraph_PlayerAbility_Crouch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
