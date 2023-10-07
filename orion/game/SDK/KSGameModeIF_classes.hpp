#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass KSGameModeIF.KSGameModeIF_C
class IKSGameModeIF_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IKSGameModeIF_C* GetDefaultObj();

	void ShowTitle();
	void RemoveTitlePawn();
	void IsLoadReady(bool* Result);
	void IsManagerReady_DEPRICATED(bool* Result);
	void SetLoadReady(bool Ready, bool* Result);
	void SetManagerReady_DEPRICATED(bool Ready, bool* Result);
	void SetAllManagerReady(bool Ready, bool* Result);
	void IsAllManagerReady(bool* Result);
	void SetBalloonManager(class UObject* BalloonManager, bool* Result);
	void GetLoader(class AKSSimpleLevelLoader** Loader);
};

}


