#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibShop.LibShop_C
// (None)

class UClass* ULibShop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibShop_C");

	return Clss;
}


// LibShop_C LibShop.Default__LibShop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibShop_C* ULibShop_C::GetDefaultObj()
{
	static class ULibShop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibShop_C*>(ULibShop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibShop.LibShop_C.Create Shop Sell Category_DEPLECATED
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FListWidgetCategory> OutListWidgetArray                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibShop_C::Create_Shop_Sell_Category_DEPLECATED(TArray<struct FListWidgetCategory>& OutListWidgetArray, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibShop_C", "Create Shop Sell Category_DEPLECATED");

	Params::ULibShop_C_Create_Shop_Sell_Category_DEPLECATED_Params Parms{};

	Parms.OutListWidgetArray = OutListWidgetArray;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibShop.LibShop_C.IsItemForSale
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EItemCategoryData       ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForSale                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibShop_C::IsItemForSale(enum class EItemCategoryData ItemCategory, class UObject* __WorldContext, bool* ForSale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibShop_C", "IsItemForSale");

	Params::ULibShop_C_IsItemForSale_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ForSale != nullptr)
		*ForSale = Parms.ForSale;

}


// Function LibShop.LibShop_C.GetBackpackItemNumForSale
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Num                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibShop_C::GetBackpackItemNumForSale(class UObject* __WorldContext, int32* Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibShop_C", "GetBackpackItemNumForSale");

	Params::ULibShop_C_GetBackpackItemNumForSale_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;

}


// Function LibShop.LibShop_C.GetShopCategoryTabIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESHOP_CATEGORY_TYPE     ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Image                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibShop_C::GetShopCategoryTabIcon(enum class ESHOP_CATEGORY_TYPE ItemCategory, class UObject* __WorldContext, class UTexture2D** Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibShop_C", "GetShopCategoryTabIcon");

	Params::ULibShop_C_GetShopCategoryTabIcon_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Image != nullptr)
		*Image = Parms.Image;

}


// Function LibShop.LibShop_C.GetShopCategoryTitleIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESHOP_CATEGORY_TYPE     ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Image                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibShop_C::GetShopCategoryTitleIcon(enum class ESHOP_CATEGORY_TYPE ItemCategory, class UObject* __WorldContext, class UTexture2D** Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibShop_C", "GetShopCategoryTitleIcon");

	Params::ULibShop_C_GetShopCategoryTitleIcon_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Image != nullptr)
		*Image = Parms.Image;

}


// Function LibShop.LibShop_C.EquipmentCategoryToShopCategory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEquipmentCategory      EquipmentCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESHOP_CATEGORY_TYPE     ShopCategory                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibShop_C::EquipmentCategoryToShopCategory(enum class EEquipmentCategory EquipmentCategory, class UObject* __WorldContext, enum class ESHOP_CATEGORY_TYPE* ShopCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibShop_C", "EquipmentCategoryToShopCategory");

	Params::ULibShop_C_EquipmentCategoryToShopCategory_Params Parms{};

	Parms.EquipmentCategory = EquipmentCategory;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ShopCategory != nullptr)
		*ShopCategory = Parms.ShopCategory;

}


// Function LibShop.LibShop_C.CreateShopCategoryCommon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FListWidgetCategory> OutListWidgetArray                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               UseNewTabInsteadOfAllTab                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibShop_C::CreateShopCategoryCommon(TArray<struct FListWidgetCategory>& OutListWidgetArray, bool UseNewTabInsteadOfAllTab, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibShop_C", "CreateShopCategoryCommon");

	Params::ULibShop_C_CreateShopCategoryCommon_Params Parms{};

	Parms.OutListWidgetArray = OutListWidgetArray;
	Parms.UseNewTabInsteadOfAllTab = UseNewTabInsteadOfAllTab;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibShop.LibShop_C.GetShopInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ShopLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FShopInfoData               ShopInfo                                                         (Parm, OutParm)

void ULibShop_C::GetShopInfo(class FName ShopLabel, class UObject* __WorldContext, struct FShopInfoData* ShopInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibShop_C", "GetShopInfo");

	Params::ULibShop_C_GetShopInfo_Params Parms{};

	Parms.ShopLabel = ShopLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ShopInfo != nullptr)
		*ShopInfo = std::move(Parms.ShopInfo);

}


// Function LibShop.LibShop_C.Create Backpack All Items
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>OutProductCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                OutItemList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<class FName, struct FEquippedItemData>EquippedItemList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibShop_C::Create_Backpack_All_Items(TArray<struct FMJListWidgetItemData>& OutProductCategory, TArray<class FName>& OutItemList, TMap<class FName, struct FEquippedItemData>& EquippedItemList, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibShop_C", "Create Backpack All Items");

	Params::ULibShop_C_Create_Backpack_All_Items_Params Parms{};

	Parms.OutProductCategory = OutProductCategory;
	Parms.OutItemList = OutItemList;
	Parms.EquippedItemList = EquippedItemList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibShop.LibShop_C.GetShopType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ShopLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESHOP_TYPE              ShopType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibShop_C::GetShopType(class FName ShopLabel, class UObject* __WorldContext, enum class ESHOP_TYPE* ShopType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibShop_C", "GetShopType");

	Params::ULibShop_C_GetShopType_Params Parms{};

	Parms.ShopLabel = ShopLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ShopType != nullptr)
		*ShopType = Parms.ShopType;

}


// Function LibShop.LibShop_C.GetPurchaseItemData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPurchaseItemInfoData       Out_Row                                                          (Parm, OutParm)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibShop_C::GetPurchaseItemData(class FName RowName, class UObject* __WorldContext, struct FPurchaseItemInfoData* Out_Row, bool* Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibShop_C", "GetPurchaseItemData");

	Params::ULibShop_C_GetPurchaseItemData_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);

	if (Found != nullptr)
		*Found = Parms.Found;

}

}


