#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibShop.LibShop_C
class ULibShop_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibShop_C* GetDefaultObj();

	void Create_Shop_Sell_Category_DEPLECATED(TArray<struct FListWidgetCategory>& OutListWidgetArray, class UObject* __WorldContext);
	void IsItemForSale(enum class EItemCategoryData ItemCategory, class UObject* __WorldContext, bool* ForSale);
	void GetBackpackItemNumForSale(class UObject* __WorldContext, int32* Num);
	void GetShopCategoryTabIcon(enum class ESHOP_CATEGORY_TYPE ItemCategory, class UObject* __WorldContext, class UTexture2D** Image);
	void GetShopCategoryTitleIcon(enum class ESHOP_CATEGORY_TYPE ItemCategory, class UObject* __WorldContext, class UTexture2D** Image);
	void EquipmentCategoryToShopCategory(enum class EEquipmentCategory EquipmentCategory, class UObject* __WorldContext, enum class ESHOP_CATEGORY_TYPE* ShopCategory);
	void CreateShopCategoryCommon(TArray<struct FListWidgetCategory>& OutListWidgetArray, bool UseNewTabInsteadOfAllTab, class UObject* __WorldContext);
	void GetShopInfo(class FName ShopLabel, class UObject* __WorldContext, struct FShopInfoData* ShopInfo);
	void Create_Backpack_All_Items(TArray<struct FMJListWidgetItemData>& OutProductCategory, TArray<class FName>& OutItemList, TMap<class FName, struct FEquippedItemData>& EquippedItemList, class UObject* __WorldContext);
	void GetShopType(class FName ShopLabel, class UObject* __WorldContext, enum class ESHOP_TYPE* ShopType);
	void GetPurchaseItemData(class FName RowName, class UObject* __WorldContext, struct FPurchaseItemInfoData* Out_Row, bool* Found);
};

}


