#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass KSCharacterNpc.KSCharacterNpc_C
class IKSCharacterNpc_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IKSCharacterNpc_C* GetDefaultObj();

	void GetNpcLabel(class FName* Label);
	void SetNpcLabel(class FName Label);
};

}


