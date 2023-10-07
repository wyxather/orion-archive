#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xC8 - 0xC8)
// BlueprintGeneratedClass BP_SupporterAndEnemyToNpcTableMaker.BP_SupporterAndEnemyToNpcTableMaker_C
class UBP_SupporterAndEnemyToNpcTableMaker_C : public USupporterAndEnemyToNpcTableMaker
{
public:

	static class UClass* StaticClass();
	static class UBP_SupporterAndEnemyToNpcTableMaker_C* GetDefaultObj();

	bool GetEnemyLabelsByEnemyGroup(TArray<class FName>* OutEnemeyLabels, class FName EnemyGroupLabel);
};

}


