#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_LevelManager_Others.BPI_LevelManager_Others_C
class IBPI_LevelManager_Others_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_LevelManager_Others_C* GetDefaultObj();

	void RequestBattleFinish(bool* Result);
	void RequestBattleStart(TArray<struct FPartyCharacterData>& Player, class FName EnemyGroupID, bool InvadeBattle, bool IsEventBGM, int32 BattleMapIndex, bool* Result);
};

}


