#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xD0 - 0xC8)
// BlueprintGeneratedClass BP_MasqueradeComponent.BP_MasqueradeComponent_C
class UBP_MasqueradeComponent_C : public UMasqueradeComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_MasqueradeComponent_C* GetDefaultObj();

	void GetMasqueradeCharacterID(enum class EPlayableCharacterID* ECharaID);
	bool PlayMasqueradeBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition);
	class FName GetMasqueradeCommandNameSecondJob();
	class FName GetMasqueradeCommandNameFirstJob();
	class FName GetMasqueradeCommandDetailSecondJob();
	class FName GetMasqueradeCommandDetailFirstJob();
	TArray<class FName> GetMasqueradeCommandListSecondJob();
	TArray<class FName> GetMasqueradeCommandListFirstJob();
	TArray<enum class EWEAPON_CATEGORY> GetMasqueradeEquipWeaponList();
	bool ResumeMasquerade();
	bool ExecMasquerade(class ABattleCharacterBase* CTarget, int32 NInvocationTurn);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MasqueradeComponent(int32 EntryPoint);
};

}


