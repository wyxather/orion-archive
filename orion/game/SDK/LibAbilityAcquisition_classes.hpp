#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibAbilityAcquisition.LibAbilityAcquisition_C
class ULibAbilityAcquisition_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibAbilityAcquisition_C* GetDefaultObj();

	void GetUnOpenedSupportDetailText(class FName AbilityName, class FName AbilityDetail, class UObject* __WorldContext, class FText* Result);
	void GetNoRestrictWeaponHelpText(class FText AbilityDetail, class FName ItemLabel, class UObject* __WorldContext, class FText* Result);
	class UTexture2D* GetAdvancedAbilityIcon(enum class EABILITY_ICON_TYPE AbilityIconType, class UObject* __WorldContext);
	class UTexture2D* GetAbilityIcon(enum class EABILITY_ICON_TYPE AbilityIconType, class UObject* __WorldContext);
	class FText GetAbilityDetail(struct FAbilityDataBase& ABILITY, class UObject* __WorldContext);
	void GetAcquisitionJPCost(struct FSavePlayerCharacterData& SaveCharacterData, struct FJobData& JobData, class UObject* __WorldContext, int32* JPCost);
	void CreateAcquisitionListItem(int32 JobID, struct FSavePlayerCharacterData& CharacterData, int32 CategoryId, class UListWidgetJobAbilityWidget_C* ListWidgetJobAbilityWidget, class UObject* __WorldContext, TArray<struct FMJListWidgetItemData>* ListItem, TArray<struct FJobLearnAbility>* JobLearnAbilityList, int32* AcquisitionCost);
};

}


