#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass GuildPartInterface.GuildPartInterface_C
class IGuildPartInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGuildPartInterface_C* GetDefaultObj();

	void GetAcquisitionJobAbility(int32* JobID, int32* Index);
	void GetCurrentIndex(int32* Index);
	void MenuCancel();
	void MenuDecide();
	void OnCursorDown();
	void OnCursorUp();
};

}


