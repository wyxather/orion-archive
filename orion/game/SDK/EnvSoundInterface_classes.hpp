#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass EnvSoundInterface.EnvSoundInterface_C
class IEnvSoundInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEnvSoundInterface_C* GetDefaultObj();

	void StopEnvSound(bool* Result);
	void GetAtomComponent(class UAtomComponent** AtomComponent);
	void InitSound(bool* Result);
	void SetVolume(float Volume, bool* Result);
	void Pause(bool bPause, bool* Result);
};

}


