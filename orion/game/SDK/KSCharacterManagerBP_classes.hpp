#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7D (0x56D - 0x4F0)
// BlueprintGeneratedClass KSCharacterManagerBP.KSCharacterManagerBP_C
class AKSCharacterManagerBP_C : public AKSCharacterManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          RegistActionLabel;                                 // 0x500(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                       PlayerResource;                                    // 0x510(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsLoaded;                                          // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F15[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LoadActionLabels;                                  // 0x528(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        LoadStep;                                          // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LoadStepMax;                                       // 0x53C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LoadOneActionCount;                                // 0x540(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCallbackWait;                                    // 0x544(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPlayerResourceLoad;                              // 0x545(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F16[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AssetLoadStep;                                     // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TmpLocation;                                       // 0x54C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HunterIndex;                                       // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F17[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      HunterCharacter;                                   // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FollowerOffset;                                    // 0x568(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HunterIsLadder;                                    // 0x56C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AKSCharacterManagerBP_C* GetDefaultObj();

	void IsReady(bool* Result);
	void RefreshHunterPartnerVisibility();
	void SetVisibilityHunterPartner(class AKSCharacterBase* HunterChara, class AKSPartnerCharacter_C* PartnerChara, bool bPartnerCharaVisibility);
	void InitAfterLoadSaveData(class UMJSaveData* SaveData);
	void RefreshPartyAfterChangeMember();
	bool EquipItem(enum class EPlayableCharacterID CharacterID, class FName ItemLabel);
	bool RefreshEpilogueParty();
	void FullRecoveryCharacter(int32 CharacterID);
	void FullRecoveryAllPartyMember();
	bool RemoveAllEquipment(enum class EPlayableCharacterID CharacterID);
	bool RegisterNpcToFollowNPCList(enum class EMJFieldCommandType FCType);
	void UpdatePartnerEnable();
	void Debug_OutputFollowInfo();
	bool RefreshPartnerCharacters();
	class AKSCharacterBase* AddPartnerCharacter(class AKSCharacterBase* Follow);
	bool BeginPlayers();
	enum class ELEVEL_AREA_TYPE GetPlayerCurrentArea();
	void GetResidentResourceLabelList(TArray<class FName>* LabelList, bool ContainNpcResource);
	bool InitParams(const struct FVector& MovePoint, enum class EKSCharacterDir Dir);
	bool SetBarCharacterEnable(int32 Index, bool IsEnable);
	bool RemoveBarCharacterAll();
	void SetBarCharacterEnable_OLD(int32 Index, bool IsEnable);
	void LoadPlayerResource();
	class AKSCharacterBase* AddBarCharacter(class FName& ActionLabel, struct FVector& Location, enum class EKSCharacterDir Dir, int32 CharIndex);
	void SetupPlayableCharacterData(enum class EPlayableCharacterID PlayerID);
	class AKSCharacterBase* GetPartyCharacter(enum class EPlayableCharacterID CharacterID);
	bool RefreshFollowCharacters();
	bool RefreshFollowCharacter(class AKSCharacterBase* Target);
	bool SetPartyHouseIn(float Scale, float OffsetHeight, bool HouseOut, bool bNotPartyRefresh);
	bool RefreshPartyCharacter(bool bSkipLoadResource);
	class AKSCharacterBase* AddPartyCharacter(class AKSCharacterBase* Follow, int32 PartyIndex);
	class AKSCharacterBase* AddEventCharacter(class FName& ActionLabel, struct FVector& Location, enum class EKSCharacterDir Dir);
	void Callback_Player_Load_DEPRICATED(TArray<class UObject*>& Loaded);
	class AKSCharacterBase* AddFieldCharacter(class FName& ActionLabel, struct FVector& Location, enum class EKSCharacterDir Dir);
	class AKSCharacterBase* AddPlayerCharacter(enum class EPlayableCharacterID PlayerID, struct FVector& Location, enum class EKSCharacterDir Dir);
	void SpawnChara(enum class EKSCharacterCategory Category, class UClass* Class, const struct FVector& Location, class FName Animation, enum class EKSCharacterDir Dir, class AKSCharacterBase** Character);
	void GetPlayer(class AKSPlayerCharacter_C** Player);
	void ReceiveTick(float DeltaSeconds);
	void OnBeginPlay();
	void PostInitManager();
	void ExecuteUbergraph_KSCharacterManagerBP(int32 EntryPoint);
};

}


