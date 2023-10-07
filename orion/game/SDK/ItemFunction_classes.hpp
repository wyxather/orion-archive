#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ItemFunction.ItemFunction_C
class UItemFunction_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UItemFunction_C* GetDefaultObj();

	void GetEquippedItemData_ForGaldera(TMap<class FName, struct FEquippedItemData>& EquippedItemData, bool RemoveFixedEquip, class UObject* __WorldContext);
	void GetItemAilmentFromData_MenuOnly(struct FItemData& ItemData, class FName ItemLabel, class UObject* __WorldContext, TArray<struct FAilmentHandler>* ItemAilment);
	void Get_Item_Text_Name_Only(TArray<class FName>& ItemLabel, class UObject* __WorldContext, class FText* RetText);
	void IsBackpackItemMax(class FName ItemLabel, class UObject* __WorldContext, bool* IsMax);
	void GetAllArmorEffectParamsByStructureToRemoveSelectPart(int32 CharacterID, bool InvMinusAilment, enum class EEQUIPMENT_PART Part, class UObject* __WorldContext, struct FCharacterParam* CharacterParam);
	void HasAilmentFromSelectedItem(enum class EAILMENT_TYPE AilmentType, class FName ItemLabel, class UObject* __WorldContext, bool* HasAilment);
	void HasAilmentFromEquipItem(int32 CharaID, enum class EAILMENT_TYPE AilmentType, class UObject* __WorldContext, bool* HasAilment);
	void GetItemTextFromArray(TArray<class FName>& ItemLabelList, TArray<int32>& NumList, bool ShowBackpack, class UObject* __WorldContext, class FText* Text);
	void Get_Item_Text(class FName ItemLabel, int32 Num, bool ShowBackpack, class UObject* __WorldContext, class FText* Text);
	void Get_Money_Text(int32 Money, class UObject* __WorldContext, class FText* Text);
	void Is_Item_Money(class FName ItemLabel, class UObject* __WorldContext, bool* IsMoney);
	void Get_Meet_Num(class UObject* __WorldContext, int32* Num);
	void SubMeetItem(int32 SubNum, class UObject* __WorldContext);
	void Has_Add_Item(class FName ItemLabel, int32 AdditionNum, class UObject* __WorldContext, bool* AddItem);
	void GetEquipmentRevision(class FName ItemLabel, int32 CharacterID, bool InvMinusParam, class UObject* __WorldContext, struct FCharacterParam* EquipmentRevision, bool* Result);
	void GetEquipmentRevisionFromData(struct FItemData& ItemData, int32 CharacterID, bool InvMinusParam, class UObject* __WorldContext, struct FCharacterParam* EquipmentRevision);
	void GetItemTargetFromData(struct FItemData& ItemData, class UObject* __WorldContext, enum class EBATTLE_TARGET_TYPE* TargetType);
	void GetItemAttributeFromData(struct FItemData& ItemData, class UObject* __WorldContext, enum class EATTRIBUTE_TYPE* Attribute);
	void GetItemAttribute(class FName ItemLabel, class UObject* __WorldContext, enum class EATTRIBUTE_TYPE* Attribute, bool* Result);
	void GetItemCommandEffecter(class FName ItemLabel, class UObject* __WorldContext, class UDataTable** CommandEffecter, bool* Result);
	void IsEquipmentItemByData(const struct FItemData& ItemData, class UObject* __WorldContext, bool* Result);
	void IsEquipmentItemByID(class FName ItemLabel, class UObject* __WorldContext, bool* Result);
	void MakeInvalidItemData(class UObject* __WorldContext, struct FItemData* ItemData);
	void GetItemAilmentFromData(struct FItemData& ItemData, class UObject* __WorldContext, TArray<struct FAilmentHandler>* ItemAilment);
	void GetItemAilment(class FName ItemLabel, class UObject* __WorldContext, bool* Result, TArray<struct FAilmentHandler>* ItemAilment);
	void GetItemEquipmentCategory(class FName ItemLabel, class UObject* __WorldContext, enum class EEquipmentCategory* EquipmentCategory, bool* Result);
	void GetItemID(class FName ItemLabel, class UObject* __WorldContext, int32* ItemId, bool* Result);
	void GetItemLabels(class UObject* __WorldContext, TArray<class FName>* ItemLabels);
	void GetItemName(class FName ItemLabel, class UObject* __WorldContext, class FName* ItemNameID, bool* Result);
	void GetItemDisplayType(class FName ItemLabel, class UObject* __WorldContext, enum class EITEM_DISPLAY_TYPE* DisplayType);
	void GetEquipEffectParamsByStructure(class FName ItemId, int32& CharacterID, class UObject* __WorldContext, struct FCharacterParam* CharacterParam);
	void GetFirstEquipmentID(enum class EEQUIPMENT_PART Index, class UObject* __WorldContext, int32* ItemId, class FName* ItemLabel);
	void AddWeaponEffectParamsByStructure(class FName ItemId, struct FCharacterParam& OutEquipEffectParam, int32 CharacterID, bool InvMinusAilment, class UObject* __WorldContext);
	void EquipmentCategoryToEquipmentPart(enum class EEquipmentCategory EquipmentCategory, class UObject* __WorldContext, enum class EEQUIPMENT_PART* EquipmentPart);
	void GetAllArmorAndWeaponParamByIntArray(int32 CharacterID, class FName SelectedWeaponLabel, bool InvMinusAilment, class UObject* __WorldContext, TArray<int32>* Params);
	void ConvertCharacterParamToEquipIntArray(struct FCharacterParam& CharacterParam, class UObject* __WorldContext, TArray<int32>* Params);
	void GetAllArmorEffectParamsByStructure(int32 CharacterID, bool InvMinusAilment, class UObject* __WorldContext, struct FCharacterParam* CharacterParam);
	void AddEquipEffectParamsByStructure(class FName ItemId, struct FCharacterParam& OutEquipEffectParam, int32& CharacterID, bool InvMinusParam, class UObject* __WorldContext);
	void GetIconTexture(enum class EItemCategoryData ItemCategory, enum class EEquipmentCategory EquipmentCategory, class UObject* __WorldContext, class UTexture2D** Icon);
	void IsWeapon(enum class EEquipmentCategory EquipmentCategory, class UObject* __WorldContext, bool* Weapon);
	void GetBackpackItemMax(class FName ItemLabel, class UObject* __WorldContext, int32* Max);
	int32 GetItemDataCount(class UObject* __WorldContext);
	void GetEquippedItemData(TMap<class FName, struct FEquippedItemData>& EquippedItemData, bool RemoveFixedEquip, class UObject* __WorldContext);
	void FindBackpackItem(class FName ItemLabel, class UObject* __WorldContext, bool* Find, int32* Num);
	void AddBackpackItem(class FName ItemId, int32 AddNum, class UObject* __WorldContext, bool* Success);
	void SubBackpackItem(class FName ItemId, int32 SubNum, class UObject* __WorldContext);
};

}


