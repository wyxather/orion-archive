#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB8 - 0xB0)
// BlueprintGeneratedClass ActionController_Impl.ActionController_Impl_C
class UActionController_Impl_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UActionController_Impl_C* GetDefaultObj();

	void OnPlayerInput();
	bool EqaulZero(float X, float Y);
	void Move(class AKSCharacterBase* Character, float DeltaTime, const struct FVector2D& Axis);
	void OnActionMenuCancel_Released();
	void OnActionMenuRB();
	void OnTick(float DeltaTime, float InputAxisX, float InputAxisY);
	void OnActionMenuCancel_Pressed();
	void OnActionMainMenuOpenClose();
	void OnActionFieldCommand();
	void OnActionMenuPlusButton();
	void OnActionMenuMinusButton();
	void OnPlayerAction();
	void OnActionDash(bool Press);
	void OnActionChangeTimeButton();
	void OnActionBattleSpeedUpButton();
	void OnActionEventSpeedUpDownButton(bool Input);
	void ExecuteUbergraph_ActionController_Impl(int32 EntryPoint);
};

}


