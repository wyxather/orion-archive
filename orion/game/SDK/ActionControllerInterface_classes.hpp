#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ActionControllerInterface.ActionControllerInterface_C
class IActionControllerInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IActionControllerInterface_C* GetDefaultObj();

	void OnActionEventSpeedUpDownButton(bool Input);
	void OnActionBattleSpeedUpButton();
	void OnActionChangeTimeButton();
	void OnActionMenuMinusButton();
	void OnActionMenuPlusButton();
	void OnTick(float DeltaTime, float InputAxisX, float InputAxisY);
	void OnPlayerAction();
	void OnActionDash(bool Press);
	void OnActionMenuRB();
	void OnActionMenuCancel_Released();
	void OnActionMenuCancel_Pressed();
	void OnActionFieldCommand();
	void OnActionMainMenuOpenClose();
};

}


