#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BattleManagerInterface.BattleManagerInterface_C
class IBattleManagerInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBattleManagerInterface_C* GetDefaultObj();

	void Debug_PlayAbilitty(const struct FAbilityDataBase& PlayAbilityData, int32 BoostLevel, bool EnforcePlayerSide, enum class EBATTLE_SEQUENCE_PATTERN_TYPE SequencePattern, int32 EnemyIndex, class FName UseActionLabel);
	void BattleReplayDestroy();
	void SuspendBattleReplay();
	void CheckBattleReplayFinish(bool* Finish);
	void PlayBattleReplay(enum class EEndRollSegmentSet ReplaySegment);
	void BattleReplayConstruction();
	void IsAllReady(bool* Result);
	void IsRequestUI(bool* Result);
	void CreateUI(bool* Result);
	void IsAliveEnemy(bool* Result);
	void IsReady(bool* Result);
	void StartBattleSequence(TArray<struct FPartyCharacterData>& Player, class FName EnemyGroupID, bool IsEventBGM, bool IsInvadeBattle);
	void ClearBattleResource();
};

}


