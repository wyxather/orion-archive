#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x93 (0xBE4 - 0xB51)
// BlueprintGeneratedClass KSPartyCharacter.KSPartyCharacter_C
class AKSPartyCharacter_C : public AKSFieldCharacter_C
{
public:
	uint8                                        Pad_11C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHunterPartnerFbComponent*             HunterPartnerFb;                                   // 0xB60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPartyCharaPropertyComponent*          PartyCharaProperty;                                // 0xB68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              CharacterID;                                       // 0xB70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoveElapseTime;                                    // 0xB74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveEndTime;                                       // 0xB78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocationHistoryIdx;                                // 0xB7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0xB80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      FollowCharacter;                                   // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TeleportDistance;                                  // 0xB90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StopDistance;                                      // 0xB94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NextPointDistance;                                 // 0xB98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpdateTime;                                        // 0xB9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WalkTimer;                                         // 0xBA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FormationNumber;                                   // 0xBA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   NewDir;                                            // 0xBA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PartyIndex;                                        // 0xBAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PrevCharaLocation;                                 // 0xBB0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FollowStep;                                        // 0xBBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FollowStepTimer;                                   // 0xBC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerMoveHistory                    CurrentLocation;                                   // 0xBC4(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        TmpDeltaTime;                                      // 0xBDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WaitHistoryIndex;                                  // 0xBE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AKSPartyCharacter_C* GetDefaultObj();

	bool IsFollowNpcCharacter();
	bool IsPartyCharacter();
	void SetWaitHistoryIndex(int32 Index);
	void RefreshCurrentLocation();
	class UHunterPartnerFbComponent* GetHunterPartnerFbComponent();
	void RefreshLocationHistoryIndex();
	void GetFormationNumber(int32* FormationNumber);
	void GetFollowIndex(int32* FollowIndex);
	class FString Debug_GetDebugFollowInfo();
	class FString Debug_GetDebugInfo();
	class UPartyCharaPropertyComponent* GetPartyCharaPropertyComponent();
	void UpdateMode();
	void UpdateFollow(float DeltaTime);
	void UpdateFollowMove(float DeltaTime);
	void SetFollowEnable(bool Enable);
	void GetFollowTarget(int32* Index);
	void SetFollowTarget(int32 Index, class AKSCharacterBase* FollowTarget, bool IsPartner);
	void UpdateMove(float DeltaTime);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetCharacterLocation(struct FVector& InLocation, enum class EKSCharacterDir InDir);
	void SetCharacterEnable(bool Enable);
	void ExecuteUbergraph_KSPartyCharacter(int32 EntryPoint);
};

}


