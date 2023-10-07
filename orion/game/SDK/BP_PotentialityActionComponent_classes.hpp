#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x160 - 0x160)
// BlueprintGeneratedClass BP_PotentialityActionComponent.BP_PotentialityActionComponent_C
class UBP_PotentialityActionComponent_C : public UPotentialityActionComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_PotentialityActionComponent_C* GetDefaultObj();

	void CheckExecMasquerade(bool* Result);
	void AddPotentialityActionPoint(int32 NAddActionPoint, bool bIgnoreAddAbility);
	bool ResumeUnusedPotentialityAction();
	bool FinishPotentialityAction();
	bool OnPotentialityAction_Common();
	bool OffPotentialityAction_Common(bool bCancel);
	bool OffPotentialityAction(bool bCancel);
	bool ExecPotentialityAction();
	bool OnPotentialityAction();
	bool CheckEnablePotentialityAction(enum class EPOTENTIALITY_ACTION_TYPE EActionType);
};

}


