#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass DialogPartInterface.DialogPartInterface_C
class IDialogPartInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDialogPartInterface_C* GetDefaultObj();

	void Reset();
	void SetPlayerID(int32 PlayerID);
	void Setup();
	void PlayOutFocus(bool Fast);
	void PlayFocus(bool Fast);
};

}


