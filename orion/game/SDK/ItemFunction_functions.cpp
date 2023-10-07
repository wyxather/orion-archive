#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass ItemFunction.ItemFunction_C
// (None)

class UClass* UItemFunction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemFunction_C");

	return Clss;
}


// ItemFunction_C ItemFunction.Default__ItemFunction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemFunction_C* UItemFunction_C::GetDefaultObj()
{
	static class UItemFunction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemFunction_C*>(UItemFunction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemFunction.ItemFunction_C.GetEquippedItemData_ForGaldera
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FEquippedItemData>EquippedItemData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               RemoveFixedEquip                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::GetEquippedItemData_ForGaldera(TMap<class FName, struct FEquippedItemData>& EquippedItemData, bool RemoveFixedEquip, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetEquippedItemData_ForGaldera");

	Params::UItemFunction_C_GetEquippedItemData_ForGaldera_Params Parms{};

	Parms.EquippedItemData = EquippedItemData;
	Parms.RemoveFixedEquip = RemoveFixedEquip;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemFunction.ItemFunction_C.GetItemAilmentFromData_MenuOnly
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   ItemData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAilmentHandler>     ItemAilment                                                      (Parm, OutParm)

void UItemFunction_C::GetItemAilmentFromData_MenuOnly(struct FItemData& ItemData, class FName ItemLabel, class UObject* __WorldContext, TArray<struct FAilmentHandler>* ItemAilment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemAilmentFromData_MenuOnly");

	Params::UItemFunction_C_GetItemAilmentFromData_MenuOnly_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemAilment != nullptr)
		*ItemAilment = std::move(Parms.ItemAilment);

}


// Function ItemFunction.ItemFunction_C.Get Item Text Name Only
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        RetText                                                          (Parm, OutParm)

void UItemFunction_C::Get_Item_Text_Name_Only(TArray<class FName>& ItemLabel, class UObject* __WorldContext, class FText* RetText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "Get Item Text Name Only");

	Params::UItemFunction_C_Get_Item_Text_Name_Only_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (RetText != nullptr)
		*RetText = Parms.RetText;

}


// Function ItemFunction.ItemFunction_C.IsBackpackItemMax
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMax                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::IsBackpackItemMax(class FName ItemLabel, class UObject* __WorldContext, bool* IsMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "IsBackpackItemMax");

	Params::UItemFunction_C_IsBackpackItemMax_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMax != nullptr)
		*IsMax = Parms.IsMax;

}


// Function ItemFunction.ItemFunction_C.GetAllArmorEffectParamsByStructureToRemoveSelectPart
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvMinusAilment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEQUIPMENT_PART         Part                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             CharacterParam                                                   (Parm, OutParm, NoDestructor)

void UItemFunction_C::GetAllArmorEffectParamsByStructureToRemoveSelectPart(int32 CharacterID, bool InvMinusAilment, enum class EEQUIPMENT_PART Part, class UObject* __WorldContext, struct FCharacterParam* CharacterParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetAllArmorEffectParamsByStructureToRemoveSelectPart");

	Params::UItemFunction_C_GetAllArmorEffectParamsByStructureToRemoveSelectPart_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.InvMinusAilment = InvMinusAilment;
	Parms.Part = Part;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterParam != nullptr)
		*CharacterParam = std::move(Parms.CharacterParam);

}


// Function ItemFunction.ItemFunction_C.HasAilmentFromSelectedItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_TYPE           AilmentType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasAilment                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::HasAilmentFromSelectedItem(enum class EAILMENT_TYPE AilmentType, class FName ItemLabel, class UObject* __WorldContext, bool* HasAilment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "HasAilmentFromSelectedItem");

	Params::UItemFunction_C_HasAilmentFromSelectedItem_Params Parms{};

	Parms.AilmentType = AilmentType;
	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HasAilment != nullptr)
		*HasAilment = Parms.HasAilment;

}


// Function ItemFunction.ItemFunction_C.HasAilmentFromEquipItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_TYPE           AilmentType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasAilment                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::HasAilmentFromEquipItem(int32 CharaID, enum class EAILMENT_TYPE AilmentType, class UObject* __WorldContext, bool* HasAilment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "HasAilmentFromEquipItem");

	Params::UItemFunction_C_HasAilmentFromEquipItem_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.AilmentType = AilmentType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HasAilment != nullptr)
		*HasAilment = Parms.HasAilment;

}


// Function ItemFunction.ItemFunction_C.GetItemTextFromArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                ItemLabelList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      NumList                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ShowBackpack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void UItemFunction_C::GetItemTextFromArray(TArray<class FName>& ItemLabelList, TArray<int32>& NumList, bool ShowBackpack, class UObject* __WorldContext, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemTextFromArray");

	Params::UItemFunction_C_GetItemTextFromArray_Params Parms{};

	Parms.ItemLabelList = ItemLabelList;
	Parms.NumList = NumList;
	Parms.ShowBackpack = ShowBackpack;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function ItemFunction.ItemFunction_C.Get Item Text
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowBackpack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void UItemFunction_C::Get_Item_Text(class FName ItemLabel, int32 Num, bool ShowBackpack, class UObject* __WorldContext, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "Get Item Text");

	Params::UItemFunction_C_Get_Item_Text_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.Num = Num;
	Parms.ShowBackpack = ShowBackpack;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function ItemFunction.ItemFunction_C.Get Money Text
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Money                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void UItemFunction_C::Get_Money_Text(int32 Money, class UObject* __WorldContext, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "Get Money Text");

	Params::UItemFunction_C_Get_Money_Text_Params Parms{};

	Parms.Money = Money;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function ItemFunction.ItemFunction_C.Is Item Money
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMoney                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::Is_Item_Money(class FName ItemLabel, class UObject* __WorldContext, bool* IsMoney)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "Is Item Money");

	Params::UItemFunction_C_Is_Item_Money_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMoney != nullptr)
		*IsMoney = Parms.IsMoney;

}


// Function ItemFunction.ItemFunction_C.Get Meet Num
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Num                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::Get_Meet_Num(class UObject* __WorldContext, int32* Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "Get Meet Num");

	Params::UItemFunction_C_Get_Meet_Num_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;

}


// Function ItemFunction.ItemFunction_C.SubMeetItem
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SubNum                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::SubMeetItem(int32 SubNum, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "SubMeetItem");

	Params::UItemFunction_C_SubMeetItem_Params Parms{};

	Parms.SubNum = SubNum;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemFunction.ItemFunction_C.Has Add Item
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AdditionNum                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AddItem                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::Has_Add_Item(class FName ItemLabel, int32 AdditionNum, class UObject* __WorldContext, bool* AddItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "Has Add Item");

	Params::UItemFunction_C_Has_Add_Item_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.AdditionNum = AdditionNum;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AddItem != nullptr)
		*AddItem = Parms.AddItem;

}


// Function ItemFunction.ItemFunction_C.GetEquipmentRevision
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvMinusParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             EquipmentRevision                                                (Parm, OutParm, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::GetEquipmentRevision(class FName ItemLabel, int32 CharacterID, bool InvMinusParam, class UObject* __WorldContext, struct FCharacterParam* EquipmentRevision, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetEquipmentRevision");

	Params::UItemFunction_C_GetEquipmentRevision_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.CharacterID = CharacterID;
	Parms.InvMinusParam = InvMinusParam;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipmentRevision != nullptr)
		*EquipmentRevision = std::move(Parms.EquipmentRevision);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ItemFunction.ItemFunction_C.GetEquipmentRevisionFromData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   ItemData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvMinusParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             EquipmentRevision                                                (Parm, OutParm, NoDestructor)

void UItemFunction_C::GetEquipmentRevisionFromData(struct FItemData& ItemData, int32 CharacterID, bool InvMinusParam, class UObject* __WorldContext, struct FCharacterParam* EquipmentRevision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetEquipmentRevisionFromData");

	Params::UItemFunction_C_GetEquipmentRevisionFromData_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CharacterID = CharacterID;
	Parms.InvMinusParam = InvMinusParam;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipmentRevision != nullptr)
		*EquipmentRevision = std::move(Parms.EquipmentRevision);

}


// Function ItemFunction.ItemFunction_C.GetItemTargetFromData
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   ItemData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_TARGET_TYPE     TargetType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::GetItemTargetFromData(struct FItemData& ItemData, class UObject* __WorldContext, enum class EBATTLE_TARGET_TYPE* TargetType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemTargetFromData");

	Params::UItemFunction_C_GetItemTargetFromData_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetType != nullptr)
		*TargetType = Parms.TargetType;

}


// Function ItemFunction.ItemFunction_C.GetItemAttributeFromData
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   ItemData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::GetItemAttributeFromData(struct FItemData& ItemData, class UObject* __WorldContext, enum class EATTRIBUTE_TYPE* Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemAttributeFromData");

	Params::UItemFunction_C_GetItemAttributeFromData_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Attribute != nullptr)
		*Attribute = Parms.Attribute;

}


// Function ItemFunction.ItemFunction_C.GetItemAttribute
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::GetItemAttribute(class FName ItemLabel, class UObject* __WorldContext, enum class EATTRIBUTE_TYPE* Attribute, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemAttribute");

	Params::UItemFunction_C_GetItemAttribute_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Attribute != nullptr)
		*Attribute = Parms.Attribute;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ItemFunction.ItemFunction_C.GetItemCommandEffecter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CommandEffecter                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::GetItemCommandEffecter(class FName ItemLabel, class UObject* __WorldContext, class UDataTable** CommandEffecter, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemCommandEffecter");

	Params::UItemFunction_C_GetItemCommandEffecter_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CommandEffecter != nullptr)
		*CommandEffecter = Parms.CommandEffecter;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ItemFunction.ItemFunction_C.IsEquipmentItemByData
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::IsEquipmentItemByData(const struct FItemData& ItemData, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "IsEquipmentItemByData");

	Params::UItemFunction_C_IsEquipmentItemByData_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ItemFunction.ItemFunction_C.IsEquipmentItemByID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::IsEquipmentItemByID(class FName ItemLabel, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "IsEquipmentItemByID");

	Params::UItemFunction_C_IsEquipmentItemByID_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ItemFunction.ItemFunction_C.MakeInvalidItemData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemData                                                         (Parm, OutParm)

void UItemFunction_C::MakeInvalidItemData(class UObject* __WorldContext, struct FItemData* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "MakeInvalidItemData");

	Params::UItemFunction_C_MakeInvalidItemData_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemData != nullptr)
		*ItemData = std::move(Parms.ItemData);

}


// Function ItemFunction.ItemFunction_C.GetItemAilmentFromData
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   ItemData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAilmentHandler>     ItemAilment                                                      (Parm, OutParm)

void UItemFunction_C::GetItemAilmentFromData(struct FItemData& ItemData, class UObject* __WorldContext, TArray<struct FAilmentHandler>* ItemAilment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemAilmentFromData");

	Params::UItemFunction_C_GetItemAilmentFromData_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemAilment != nullptr)
		*ItemAilment = std::move(Parms.ItemAilment);

}


// Function ItemFunction.ItemFunction_C.GetItemAilment
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAilmentHandler>     ItemAilment                                                      (Parm, OutParm)

void UItemFunction_C::GetItemAilment(class FName ItemLabel, class UObject* __WorldContext, bool* Result, TArray<struct FAilmentHandler>* ItemAilment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemAilment");

	Params::UItemFunction_C_GetItemAilment_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ItemAilment != nullptr)
		*ItemAilment = std::move(Parms.ItemAilment);

}


// Function ItemFunction.ItemFunction_C.GetItemEquipmentCategory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquipmentCategory      EquipmentCategory                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::GetItemEquipmentCategory(class FName ItemLabel, class UObject* __WorldContext, enum class EEquipmentCategory* EquipmentCategory, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemEquipmentCategory");

	Params::UItemFunction_C_GetItemEquipmentCategory_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipmentCategory != nullptr)
		*EquipmentCategory = Parms.EquipmentCategory;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ItemFunction.ItemFunction_C.GetItemID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemId                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::GetItemID(class FName ItemLabel, class UObject* __WorldContext, int32* ItemId, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemID");

	Params::UItemFunction_C_GetItemID_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = Parms.ItemId;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ItemFunction.ItemFunction_C.GetItemLabels
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                ItemLabels                                                       (Parm, OutParm)

void UItemFunction_C::GetItemLabels(class UObject* __WorldContext, TArray<class FName>* ItemLabels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemLabels");

	Params::UItemFunction_C_GetItemLabels_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLabels != nullptr)
		*ItemLabels = std::move(Parms.ItemLabels);

}


// Function ItemFunction.ItemFunction_C.GetItemName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemNameID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::GetItemName(class FName ItemLabel, class UObject* __WorldContext, class FName* ItemNameID, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemName");

	Params::UItemFunction_C_GetItemName_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemNameID != nullptr)
		*ItemNameID = Parms.ItemNameID;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ItemFunction.ItemFunction_C.GetItemDisplayType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EITEM_DISPLAY_TYPE      DisplayType                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::GetItemDisplayType(class FName ItemLabel, class UObject* __WorldContext, enum class EITEM_DISPLAY_TYPE* DisplayType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemDisplayType");

	Params::UItemFunction_C_GetItemDisplayType_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayType != nullptr)
		*DisplayType = Parms.DisplayType;

}


// Function ItemFunction.ItemFunction_C.GetEquipEffectParamsByStructure
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             CharacterParam                                                   (Parm, OutParm, NoDestructor)

void UItemFunction_C::GetEquipEffectParamsByStructure(class FName ItemId, int32& CharacterID, class UObject* __WorldContext, struct FCharacterParam* CharacterParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetEquipEffectParamsByStructure");

	Params::UItemFunction_C_GetEquipEffectParamsByStructure_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterParam != nullptr)
		*CharacterParam = std::move(Parms.CharacterParam);

}


// Function ItemFunction.ItemFunction_C.GetFirstEquipmentID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEQUIPMENT_PART         Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemId                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::GetFirstEquipmentID(enum class EEQUIPMENT_PART Index, class UObject* __WorldContext, int32* ItemId, class FName* ItemLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetFirstEquipmentID");

	Params::UItemFunction_C_GetFirstEquipmentID_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = Parms.ItemId;

	if (ItemLabel != nullptr)
		*ItemLabel = Parms.ItemLabel;

}


// Function ItemFunction.ItemFunction_C.AddWeaponEffectParamsByStructure
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             OutEquipEffectParam                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvMinusAilment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::AddWeaponEffectParamsByStructure(class FName ItemId, struct FCharacterParam& OutEquipEffectParam, int32 CharacterID, bool InvMinusAilment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "AddWeaponEffectParamsByStructure");

	Params::UItemFunction_C_AddWeaponEffectParamsByStructure_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.OutEquipEffectParam = OutEquipEffectParam;
	Parms.CharacterID = CharacterID;
	Parms.InvMinusAilment = InvMinusAilment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemFunction.ItemFunction_C.EquipmentCategoryToEquipmentPart
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEquipmentCategory      EquipmentCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         EquipmentPart                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::EquipmentCategoryToEquipmentPart(enum class EEquipmentCategory EquipmentCategory, class UObject* __WorldContext, enum class EEQUIPMENT_PART* EquipmentPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "EquipmentCategoryToEquipmentPart");

	Params::UItemFunction_C_EquipmentCategoryToEquipmentPart_Params Parms{};

	Parms.EquipmentCategory = EquipmentCategory;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipmentPart != nullptr)
		*EquipmentPart = Parms.EquipmentPart;

}


// Function ItemFunction.ItemFunction_C.GetAllArmorAndWeaponParamByIntArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SelectedWeaponLabel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvMinusAilment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Params                                                           (Parm, OutParm)

void UItemFunction_C::GetAllArmorAndWeaponParamByIntArray(int32 CharacterID, class FName SelectedWeaponLabel, bool InvMinusAilment, class UObject* __WorldContext, TArray<int32>* Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetAllArmorAndWeaponParamByIntArray");

	Params::UItemFunction_C_GetAllArmorAndWeaponParamByIntArray_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.SelectedWeaponLabel = SelectedWeaponLabel;
	Parms.InvMinusAilment = InvMinusAilment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Params != nullptr)
		*Params = std::move(Parms.Params);

}


// Function ItemFunction.ItemFunction_C.ConvertCharacterParamToEquipIntArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCharacterParam             CharacterParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Params                                                           (Parm, OutParm)

void UItemFunction_C::ConvertCharacterParamToEquipIntArray(struct FCharacterParam& CharacterParam, class UObject* __WorldContext, TArray<int32>* Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "ConvertCharacterParamToEquipIntArray");

	Params::UItemFunction_C_ConvertCharacterParamToEquipIntArray_Params Parms{};

	Parms.CharacterParam = CharacterParam;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Params != nullptr)
		*Params = std::move(Parms.Params);

}


// Function ItemFunction.ItemFunction_C.GetAllArmorEffectParamsByStructure
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvMinusAilment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             CharacterParam                                                   (Parm, OutParm, NoDestructor)

void UItemFunction_C::GetAllArmorEffectParamsByStructure(int32 CharacterID, bool InvMinusAilment, class UObject* __WorldContext, struct FCharacterParam* CharacterParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetAllArmorEffectParamsByStructure");

	Params::UItemFunction_C_GetAllArmorEffectParamsByStructure_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.InvMinusAilment = InvMinusAilment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterParam != nullptr)
		*CharacterParam = std::move(Parms.CharacterParam);

}


// Function ItemFunction.ItemFunction_C.AddEquipEffectParamsByStructure
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             OutEquipEffectParam                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvMinusParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::AddEquipEffectParamsByStructure(class FName ItemId, struct FCharacterParam& OutEquipEffectParam, int32& CharacterID, bool InvMinusParam, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "AddEquipEffectParamsByStructure");

	Params::UItemFunction_C_AddEquipEffectParamsByStructure_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.OutEquipEffectParam = OutEquipEffectParam;
	Parms.CharacterID = CharacterID;
	Parms.InvMinusParam = InvMinusParam;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemFunction.ItemFunction_C.GetIconTexture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemCategoryData       ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquipmentCategory      EquipmentCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::GetIconTexture(enum class EItemCategoryData ItemCategory, enum class EEquipmentCategory EquipmentCategory, class UObject* __WorldContext, class UTexture2D** Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetIconTexture");

	Params::UItemFunction_C_GetIconTexture_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.EquipmentCategory = EquipmentCategory;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function ItemFunction.ItemFunction_C.IsWeapon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEquipmentCategory      EquipmentCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Weapon                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::IsWeapon(enum class EEquipmentCategory EquipmentCategory, class UObject* __WorldContext, bool* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "IsWeapon");

	Params::UItemFunction_C_IsWeapon_Params Parms{};

	Parms.EquipmentCategory = EquipmentCategory;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Weapon != nullptr)
		*Weapon = Parms.Weapon;

}


// Function ItemFunction.ItemFunction_C.GetBackpackItemMax
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::GetBackpackItemMax(class FName ItemLabel, class UObject* __WorldContext, int32* Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetBackpackItemMax");

	Params::UItemFunction_C_GetBackpackItemMax_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Max != nullptr)
		*Max = Parms.Max;

}


// Function ItemFunction.ItemFunction_C.GetItemDataCount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UItemFunction_C::GetItemDataCount(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetItemDataCount");

	Params::UItemFunction_C_GetItemDataCount_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemFunction.ItemFunction_C.GetEquippedItemData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FEquippedItemData>EquippedItemData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               RemoveFixedEquip                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::GetEquippedItemData(TMap<class FName, struct FEquippedItemData>& EquippedItemData, bool RemoveFixedEquip, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "GetEquippedItemData");

	Params::UItemFunction_C_GetEquippedItemData_Params Parms{};

	Parms.EquippedItemData = EquippedItemData;
	Parms.RemoveFixedEquip = RemoveFixedEquip;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemFunction.ItemFunction_C.FindBackpackItem
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Num                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::FindBackpackItem(class FName ItemLabel, class UObject* __WorldContext, bool* Find, int32* Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "FindBackpackItem");

	Params::UItemFunction_C_FindBackpackItem_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Find != nullptr)
		*Find = Parms.Find;

	if (Num != nullptr)
		*Num = Parms.Num;

}


// Function ItemFunction.ItemFunction_C.AddBackpackItem
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddNum                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemFunction_C::AddBackpackItem(class FName ItemId, int32 AddNum, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "AddBackpackItem");

	Params::UItemFunction_C_AddBackpackItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.AddNum = AddNum;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ItemFunction.ItemFunction_C.SubBackpackItem
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SubNum                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemFunction_C::SubBackpackItem(class FName ItemId, int32 SubNum, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ItemFunction_C", "SubBackpackItem");

	Params::UItemFunction_C_SubBackpackItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.SubNum = SubNum;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}

}


