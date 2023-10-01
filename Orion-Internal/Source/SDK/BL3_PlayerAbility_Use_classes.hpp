#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Use_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerAbility_Use.PlayerAbility_Use_C
// 0x0008 (0x0138 - 0x0130)
class UPlayerAbility_Use_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAbility_Use.PlayerAbility_Use_C");
		return ptr;
	}


	void StopGiveUpInner();
	void StartGiveUpInner();
	void GetFFYLComponent(class UFightForYourLifeComponent** res);
	void FlushLatentUses();
	void GetUseComponent(class UUseComponent** res);
	void StopUseInner(EUsabilityType Type);
	void StartUseInner(EUsabilityType Type);
	void GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_14(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_13(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_12(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_11(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_10(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_9(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_ExitSeat_K2Node_GbxInputActionEvent_Discrete_8(class UGbxInputActionData_Discrete* Action);
	void OnPaused();
	void ExecuteUbergraph_PlayerAbility_Use(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
