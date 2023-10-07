#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass UIInputModeChangeInterface.UIInputModeChangeInterface_C
class IUIInputModeChangeInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUIInputModeChangeInterface_C* GetDefaultObj();

	void ChangeInputMode(enum class EKSUseInputType Type);
};

}


