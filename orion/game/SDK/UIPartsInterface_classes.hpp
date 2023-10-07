#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass UIPartsInterface.UIPartsInterface_C
class IUIPartsInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUIPartsInterface_C* GetDefaultObj();

	void InitWidgetData();
	void IsUIPartsRunning(bool* IsRunning);
	void IsPlayingAnim(bool* IsPlaying);
	void CloseWidget();
	void OpenWidget();
};

}


