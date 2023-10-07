#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibCharacter.LibCharacter_C
class ULibCharacter_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibCharacter_C* GetDefaultObj();

	void ChangeFBImageAnimForJobPC(int32 CharacterID, enum class EPLAYER_JOB_FB_TYPE ActionType, enum class EJOB_TYPE Job_ID, class UFBImage*& FBImage, bool IsLoop, class UObject* __WorldContext, bool* Success);
	void IsEquipFromPart(int32 CharaID, class FName TargetItemLabel, enum class EEQUIPMENT_PART EquipmentPart, class UObject* __WorldContext, bool* IsEquip);
	void ClampMaxParameter(struct FCharacterParam& Param, class UObject* __WorldContext);
	void CanEquipmentCharacterArray(enum class EEQUIPMENT_PART EquipPart, class UObject* __WorldContext, TArray<bool>* CanEquip);
	void CanAcquisitionAbility(TArray<struct FSavePlayerCharacterData>& SaveCharacterData, class UObject* __WorldContext, bool* Return);
	void Calc_Equip_Param_Before_After(enum class EEQUIPMENT_PART EquipPart, class FName ChangeEquipLabel, TArray<struct FEquipParamBeforeAfter>& EquipParam, class UObject* __WorldContext);
	bool Is_Weapon_Equipment_Part(enum class EEQUIPMENT_PART Index, class UObject* __WorldContext);
	void UpdateEquipParam(class UPartyCharacterListBase* PartyListWidget, TArray<struct FEquipParamBeforeAfter>& EquipParam, enum class EEQUIPMENT_PART EquipmentPart, class FName EquipItemLabel, class UObject* __WorldContext);
	void IsEquipableMainCharacter(class FName ItemLabel, class UObject* __WorldContext, bool* Success);
	void GetUnOpendSupportDetailText(class FName AbilityName, class FName AbilityDetail, class UObject* __WorldContext, class FText* Result);
	void GetSupportDetailText(class FName SupportLabel, int32 CharaID, class UObject* __WorldContext, class FText* Text);
	void GetAllJobAcquisitionCommandNum(int32 CharacterID, class UObject* __WorldContext, int32* AcquisitionNum);
	void Calc_Player_Parameter(int32 CharaID, bool CalcSecondJob, class UObject* __WorldContext, struct FCharacterParam* CharacterParam);
	void GetEnemyFBSize(enum class ECHARACTER_SIZE EnemySize, class UObject* __WorldContext, struct FVector2D* OutData);
	void GetAcquisitionAbilityCount(int32 JobID, int32 AcquisitionIndex, class UObject* __WorldContext, int32* Count);
	void Get_Job_IDFrom_Ability(class FName AbilityName, class UObject* __WorldContext, int32* JobID, bool* Success, int32* PlayerSaveDataIndex);
	void Debug_GetPlayerParameterByCharaData(const struct FPartyCharacterData& CharaData, class UObject* __WorldContext, struct FCharacterParam* Result);
	void Is_Equip_Restric_Weapon_from_Ability(int32 CharaID, class FName AbilityLabel, class UObject* __WorldContext, bool* IsEquip);
	void IsEquip(int32 CharaID, class FName TargetItemLabel, class UObject* __WorldContext, bool* IsEquip);
	void GetCouplingPlayerIdFromExtraStoryCategory(enum class EEXTRA_STORY_CATEGORY Type, class UObject* __WorldContext, enum class EPlayableCharacterID* OnestCharaId, enum class EPlayableCharacterID* TwondCharaId);
	void Get_Character_Icon_by_Enum(enum class EPlayableCharacterID CharacterID, bool IsReflectAge, class UObject* __WorldContext, class UTexture2D** IconImage);
	void Get_Character_Icon_by_ID(int32 CharacterID, class UObject* __WorldContext, class UTexture2D** IconImage);
	void IsFixedEquipment(int32 CharaID, class UObject* __WorldContext, bool* Fixed);
	void RemoveNoFixedMainEquipment(int32 CharaID, class UObject* __WorldContext);
	void RemoveNoFixedEquipment(int32 CharaID, class UObject* __WorldContext);
	void SetFixedEquipment(int32 CharacterID, enum class EEQUIPMENT_PART EquipmentPart, bool IsFixed, class UObject* __WorldContext);
	void RemoveEquipmentMainItem(int32 CharaID, class UObject* __WorldContext);
	void GetCharacterMDEF_Calc(int32 CharacterID, class UObject* __WorldContext, int32* MDEF);
	void GetCharacterDEF_Calc(int32 CharacterID, class UObject* __WorldContext, int32* DEF);
	void Get_Character_POT_Calc(int32 CharacterID, class UObject* __WorldContext, int32* POT);
	void GetCharacterMP_Calc(int32 CharacterID, class UObject* __WorldContext, int32* MP);
	void GetCharacterHP_Calc(int32 CharacterID, class UObject* __WorldContext, int32* HP);
	void GetCharacterPOTMax(int32 CharacterID, class UObject* __WorldContext, int32* POTMax);
	void GetPlayerCharacterArea(class UObject* __WorldContext, enum class ELEVEL_AREA_TYPE* Area);
	void LeaveGuestCharacterInParty(enum class EPlayableCharacterID CharaID, class UObject* __WorldContext);
	void Get_Equipment_All_Effect_Before_After(int32 CharacterID, class FName SelectWeaponLabel, enum class EEQUIPMENT_PART ChanageEquipmentPart, class FName ChangeEquipment, struct FEquipParamBeforeAfter& OutParamsBeforeAfter, class UObject* __WorldContext);
	void GetEquipParamBeforeAfter(int32 CharacterID, class FName SelectWeaponLabel, enum class EEQUIPMENT_PART ChangeEquipmentPart, class FName ChangeEquipment, const struct FEquipParamBeforeAfter& OutParamsBeforAfter, class UObject* __WorldContext);
	void RefreshPartyAll(class UObject* __WorldContext);
	void SetupParty(TArray<int32>& MainCharacterID, TArray<int32>& SubCharacterID, class UObject* __WorldContext);
	void RefreshPartyAfterChangeMember(class UObject* __WorldContext);
	void RemoveEquipmentItemAndSetDefault(int32 CharacterID, enum class EEQUIPMENT_PART EquipmentPart, class UObject* __WorldContext);
	void RefreshWeaponEquipmentState(int32 CharacterID, class UObject* __WorldContext);
	void RemoveAllEquipmentItem(int32 CharacterID, class UObject* __WorldContext);
	void AddFirstEquipment_DEPRECATED(enum class EPlayableCharacterID CharacterID, class UObject* __WorldContext);
	void SetPlayerRoundingHPAndMP(int32 CharacterID, class UObject* __WorldContext);
	void SetReleaseStyleChange(enum class EPlayableCharacterID PlayerID, bool IsRelease, class UObject* __WorldContext);
	void IsReleaseStyleChange(enum class EPlayableCharacterID PlayerID, class UObject* __WorldContext, bool* IsRelease);
	void Get_Player_Character_Role(enum class EPlayableCharacterID CharaID, class UObject* __WorldContext, enum class ECharacterRole* Role);
	void GetJobCommandAbility(int32 JobID, class UObject* __WorldContext, TArray<struct FJobLearnAbility>* JobCommandAbility);
	void GetJobJobID(int32 JobID, class UObject* __WorldContext, int32* Data_JobID);
	void GetJobProperEquipment(int32 JobID, class UObject* __WorldContext, TArray<bool>* ProperEquipment);
	void GetJobMenuIcon(int32 JobID, class UObject* __WorldContext, class FName* MenuJobIcon);
	void GetJobJPCost(int32 JobID, class UObject* __WorldContext, TArray<int32>* JPCost);
	void GetJobPermissionFlagByRowName(class FName RowName, class UObject* __WorldContext, int32* PermissionFlag);
	void GetJobDisplayName(int32 JobID, class UObject* __WorldContext, class FName* DisplayName);
	void ChangePlayerTransportation(enum class ETRANSPORTATION_TYPE Type, class UObject* __WorldContext);
	void EquipItem(int32 CharacterID, enum class EEQUIPMENT_PART EquipPart, class FName ItemLabel, class UObject* __WorldContext);
	void SetMissonFlipbook(class UFBImage*& TargetFBImange, class FName FlipbookName, bool AnimationLoop, class UObject* __WorldContext);
	void GetSupportAbilityIcon(class FName AbilityName, class UObject* __WorldContext, class UTexture2D** AbilityIcon);
	void ChangeFBImageAnimForSaveLoad(int32 CharacterID, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir ActionDir, enum class EJOB_TYPE Job_ID, uint8 CharaForm, class UFBImage*& FBImage, class UObject* __WorldContext);
	void ChangeFBImageAnimForNPC(class FName CharacterLabel, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir ActionDir, class UFBImage*& FBImage, class UObject* __WorldContext);
	void ChangeFBImageAnimForPC(int32 CharacterID, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir ActionDir, enum class EJOB_TYPE Job_ID, uint8 CharaForm, class UFBImage*& FBImage, bool IsLoop, class UObject* __WorldContext, bool* Success);
	void SetFBImageAnimation(class FName CharacterLabel, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, class UFBImage*& FBImage, bool IsLoop, class UObject* __WorldContext, bool* Success);
	struct FAbilityDataBase GetNoBoostAbility(class FName RowName, class UObject* __WorldContext, bool* IsSuccess);
	void ChangePlayerSecondJobNone(int32 CharacterID, class UObject* __WorldContext);
	void SubCharacterParam(struct FCharacterParam& BaseParam, struct FCharacterParam& AddParam, class UObject* __WorldContext, struct FCharacterParam* ResultParam);
	void GetEquipmentRevisionParamSpecific(class FName EquipmentItemLabel, class UObject* __WorldContext, struct FCharacterParam* EquipRevision);
	void GetEquipmentRevisionParam(int32 CharacterID, class UObject* __WorldContext, struct FCharacterParam* EquipRevision);
	void RefreshEquipRevision(class UObject* __WorldContext);
	void CalcAddJobPoint(int32 CharacterID, int32 AddJobPoint, class UObject* __WorldContext, int32* AddFirstJobPoint, bool* FirstJobComplete, int32* RestFirstJP);
	void CheckJobAbilityComplete(int32 CharacterID, class UObject* __WorldContext, bool* Complete, int32* RestComplete);
	void GetAbilityAcquisitionList(int32 CharacterID, int32 JobID, class UObject* __WorldContext, TArray<bool>* AcquisitionList);
	void AcquisitionSupportAbility(int32 CharacterID, int32 JobID, class UObject* __WorldContext, TArray<struct FJobLearnAbility>* AcquisitionAbility);
	void GetJobAcquisitionCommandAbilityNum(int32 CharacterID, int32 JobID, class UObject* __WorldContext, int32* AcquisitionNum);
	void GetPartnerParameter(class UObject* __WorldContext, struct FCharacterParam* Result);
	void AddParameter(int32 Base, int32 Add, class UObject* __WorldContext, int32* Result);
	void GetCueSheetName(int32 CharacterID, bool IsJapanese, class UObject* __WorldContext, TArray<class FName>* VoiceCueSheet);
	void CheckEquipedSupportAbility(int32 CharacterID, int32 AbilityID, class UObject* __WorldContext, int32* EquipIndex);
	void GetSelectSupportAbilityCorrectionParam(TArray<int32>& SupportAbilityIDs, int32 CharaID, class UObject* __WorldContext, struct FCharacterParam* CorrectionParam);
	void GetSupportAbilityCorrectionParam(int32 CharaID, class UObject* __WorldContext, struct FCharacterParam* CorrectionParam);
	void SettingPartySupportAbility(class UObject* __WorldContext);
	void GetPartyTopCharacterID(class UObject* __WorldContext, enum class EPlayableCharacterID* CharacterID);
	void EquipmentSupportAbility(int32 CharacterID, int32 AbilityID, int32 Slot, class UObject* __WorldContext, bool* IsSuccess);
	void GetPlayerAcquisitionSupportAbilityList(int32 CharacterID, class UObject* __WorldContext, TArray<class FName>* SupportAbilitySetList);
	void AcquisitionAbility(int32 CharacterID, int32 JobID, class FName AbilityName, int32 UseJP, class UObject* __WorldContext, bool* IsSuccess);
	int32 EquipPartToProperEqpIndex(enum class EEQUIPMENT_PART Index, class UObject* __WorldContext);
	void ChangePlayerSecondJob(int32 CharacterID, int32 ChangeJobID, class UObject* __WorldContext);
	void Get_Now_Select_Job_ID(struct FSavePlayerCharacterData& SaveCharacterData, class UObject* __WorldContext, int32* JobID);
	void CalcParameterCorrectionOnly(int32 Base, int32 Revision, class UObject* __WorldContext, int32* Param);
	void GetPlayerBaseParameter(int32 Level, class UObject* __WorldContext, struct FCharacterParam* ResultParam);
	void Get_Player_Symbol_by_ID(enum class EPlayableCharacterID PlayerID, enum class ECHARACTER_SYMBOL_TYPE SymbolType, class UObject* __WorldContext, class UTexture2D** SymbolTexture);
	void CanCharacterEquipToPart(int32 CharacterID, enum class EEQUIPMENT_PART EquipmentPart, class UObject* __WorldContext, bool* Result);
	void GetParameterText(enum class EEQUIPMENT_ITEM_PARAM EquipItemParam, class UObject* __WorldContext, class FText* Text);
	class FName GetCharacterEquipmentSingle(int32 CharacterID, enum class EEQUIPMENT_PART EquipmentPart, class UObject* __WorldContext);
	void GetPlayerJobData(int32 CharacterID, class UObject* __WorldContext, struct FJobData* FirstJobData, struct FJobData* SecondJobData);
	void GetPlayerProperEquipment(int32 CharacterID, class UObject* __WorldContext, TArray<bool>* Result);
	void GetJobDataByRowName(class FName RowName, class UObject* __WorldContext, struct FJobData* JobData, bool* Success);
	void GetJobData(int32 JobID, class UObject* __WorldContext, struct FJobData* JobData, bool* Success);
	bool IsJobDataExistsByRowName(class FName RowName, class UObject* __WorldContext);
	bool IsJobDataExists(int32 JobID, class UObject* __WorldContext);
	void RemoveEquipmentItem(int32 CharacterID, enum class EEQUIPMENT_PART EquipmentPart, class UObject* __WorldContext);
	void IsPartyFullRecovery(class UObject* __WorldContext, bool* Result);
	void Calc_Player_Parameter_Internal(int32 Level, const struct FCharacterParam& DopingData, const struct FCharacterParam& ParamRevision, class UObject* __WorldContext, struct FCharacterParam* CharacterParam);
	void AddJobPoint(int32 CharacterID, int32 AddPoint, class UObject* __WorldContext);
	void FullRecoveryCharacter(int32 CharacterID, bool IsFullRecoveryPotentialiActionpoint, class UObject* __WorldContext);
	void AddCharacterExp(int32 CharacterID, int32 AddExp, class UObject* __WorldContext, bool* LevelUp);
	void CheckAlive(int32 CharacterID, class UObject* __WorldContext, bool* Alive);
	void CanRecoveryMP(int32 CharacterID, class UObject* __WorldContext, bool* Result);
	void Can_Recovery_POT(int32 CharacterID, class UObject* __WorldContext, bool* Result);
	void CanRevival(int32 CharacterID, class UObject* __WorldContext, bool* Result);
	void CanRecoveryHP(int32 CharacterID, class UObject* __WorldContext, bool* Result);
	void FullRecoveryParty(class UObject* __WorldContext);
	void GetPlayerJobIcon(int32 CharacterID, class UObject* __WorldContext, class UTexture2D** FirstJobIcon, class UTexture2D** SecondJobIcon);
	void GetPlayerJobName(int32 CharacterID, class UObject* __WorldContext, class FText* FirstJob, class FText* SecondJob);
	void CalcParameter(int32 Base, int32 Revision, class UObject* __WorldContext, int32* Param);
	void GetPlayerParameterByID(int32 CharaID, class UObject* __WorldContext, struct FCharacterParam* Result);
	void GetNeedExpForLevel(int32 Level, class UObject* __WorldContext, int32* NextExp, int32* TotalExp);
};

}


