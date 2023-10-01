#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_ActionSkill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C
// 0x0008 (0x0138 - 0x0130)
class UPlayerAbility_ActionSkill_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C");
		return ptr;
	}


	void GetPlayerCharacterComponent(class UPlayerCharacterComponent** res);
	void HandleStopActionSkillHold(class UOakActionAbility* ActionAbility);
	void HandleStartActionSkillHold(class UOakActionAbility* ActionAbility);
	void HandleStopActionSkill(class UOakActionAbility* ActionAbility);
	void HandleStartActionSkill(class UOakActionAbility* ActionAbility);
	void GetSecondaryActionSkill(class UOakActionAbility** res);
	void GetPrimaryActionSkill(class UOakActionAbility** res);
	void GbxInpActEvt_InputAction_Discrete_ActionSkill_K2Node_GbxInputActionEvent_Discrete_22(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_ActionSkill_K2Node_GbxInputActionEvent_Discrete_21(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_K2Node_GbxInputActionEvent_Discrete_20(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_K2Node_GbxInputActionEvent_Discrete_19(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_ActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_18(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_ActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_17(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_16(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_15(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_ActionSkillOverride_K2Node_GbxInputActionEvent_Discrete_14(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_ActionSkillOverride_K2Node_GbxInputActionEvent_Discrete_13(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_PreActionSkill_K2Node_GbxInputActionEvent_Discrete_12(class UGbxInputActionData_Discrete* Action);
	void ExecuteUbergraph_PlayerAbility_ActionSkill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
