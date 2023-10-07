#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibAccessor_CharacterManager.LibAccessor_CharacterManager_C
class ULibAccessor_CharacterManager_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibAccessor_CharacterManager_C* GetDefaultObj();

	void GetCharacterManager(class UObject* __WorldContext, class AKSCharacterManagerBP_C** CharacterManager);
};

}


