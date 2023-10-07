#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibAbilityAcquisition.LibAbilityAcquisition_C
// (None)

class UClass* ULibAbilityAcquisition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibAbilityAcquisition_C");

	return Clss;
}


// LibAbilityAcquisition_C LibAbilityAcquisition.Default__LibAbilityAcquisition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibAbilityAcquisition_C* ULibAbilityAcquisition_C::GetDefaultObj()
{
	static class ULibAbilityAcquisition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibAbilityAcquisition_C*>(ULibAbilityAcquisition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibAbilityAcquisition.LibAbilityAcquisition_C.GetUnOpenedSupportDetailText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityDetail                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)

void ULibAbilityAcquisition_C::GetUnOpenedSupportDetailText(class FName AbilityName, class FName AbilityDetail, class UObject* __WorldContext, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAbilityAcquisition_C", "GetUnOpenedSupportDetailText");

	Params::ULibAbilityAcquisition_C_GetUnOpenedSupportDetailText_Params Parms{};

	Parms.AbilityName = AbilityName;
	Parms.AbilityDetail = AbilityDetail;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibAbilityAcquisition.LibAbilityAcquisition_C.GetNoRestrictWeaponHelpText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        AbilityDetail                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)

void ULibAbilityAcquisition_C::GetNoRestrictWeaponHelpText(class FText AbilityDetail, class FName ItemLabel, class UObject* __WorldContext, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAbilityAcquisition_C", "GetNoRestrictWeaponHelpText");

	Params::ULibAbilityAcquisition_C_GetNoRestrictWeaponHelpText_Params Parms{};

	Parms.AbilityDetail = AbilityDetail;
	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibAbilityAcquisition.LibAbilityAcquisition_C.GetAdvancedAbilityIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EABILITY_ICON_TYPE      AbilityIconType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* ULibAbilityAcquisition_C::GetAdvancedAbilityIcon(enum class EABILITY_ICON_TYPE AbilityIconType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAbilityAcquisition_C", "GetAdvancedAbilityIcon");

	Params::ULibAbilityAcquisition_C_GetAdvancedAbilityIcon_Params Parms{};

	Parms.AbilityIconType = AbilityIconType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibAbilityAcquisition.LibAbilityAcquisition_C.GetAbilityIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EABILITY_ICON_TYPE      AbilityIconType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* ULibAbilityAcquisition_C::GetAbilityIcon(enum class EABILITY_ICON_TYPE AbilityIconType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAbilityAcquisition_C", "GetAbilityIcon");

	Params::ULibAbilityAcquisition_C_GetAbilityIcon_Params Parms{};

	Parms.AbilityIconType = AbilityIconType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibAbilityAcquisition.LibAbilityAcquisition_C.GetAbilityDetail
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAbilityDataBase            ABILITY                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ULibAbilityAcquisition_C::GetAbilityDetail(struct FAbilityDataBase& ABILITY, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAbilityAcquisition_C", "GetAbilityDetail");

	Params::ULibAbilityAcquisition_C_GetAbilityDetail_Params Parms{};

	Parms.ABILITY = ABILITY;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibAbilityAcquisition.LibAbilityAcquisition_C.GetAcquisitionJPCost
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSavePlayerCharacterData    SaveCharacterData                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FJobData                    JobData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              JPCost                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAbilityAcquisition_C::GetAcquisitionJPCost(struct FSavePlayerCharacterData& SaveCharacterData, struct FJobData& JobData, class UObject* __WorldContext, int32* JPCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAbilityAcquisition_C", "GetAcquisitionJPCost");

	Params::ULibAbilityAcquisition_C_GetAcquisitionJPCost_Params Parms{};

	Parms.SaveCharacterData = SaveCharacterData;
	Parms.JobData = JobData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (JPCost != nullptr)
		*JPCost = Parms.JPCost;

}


// Function LibAbilityAcquisition.LibAbilityAcquisition_C.CreateAcquisitionListItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CategoryId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListWidgetJobAbilityWidget_C*ListWidgetJobAbilityWidget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMJListWidgetItemData>ListItem                                                         (Parm, OutParm)
// TArray<struct FJobLearnAbility>    JobLearnAbilityList                                              (Parm, OutParm)
// int32                              AcquisitionCost                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAbilityAcquisition_C::CreateAcquisitionListItem(int32 JobID, struct FSavePlayerCharacterData& CharacterData, int32 CategoryId, class UListWidgetJobAbilityWidget_C* ListWidgetJobAbilityWidget, class UObject* __WorldContext, TArray<struct FMJListWidgetItemData>* ListItem, TArray<struct FJobLearnAbility>* JobLearnAbilityList, int32* AcquisitionCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAbilityAcquisition_C", "CreateAcquisitionListItem");

	Params::ULibAbilityAcquisition_C_CreateAcquisitionListItem_Params Parms{};

	Parms.JobID = JobID;
	Parms.CharacterData = CharacterData;
	Parms.CategoryId = CategoryId;
	Parms.ListWidgetJobAbilityWidget = ListWidgetJobAbilityWidget;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ListItem != nullptr)
		*ListItem = std::move(Parms.ListItem);

	if (JobLearnAbilityList != nullptr)
		*JobLearnAbilityList = std::move(Parms.JobLearnAbilityList);

	if (AcquisitionCost != nullptr)
		*AcquisitionCost = Parms.AcquisitionCost;

}

}


