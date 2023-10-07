#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_WeaponMasterUtil.BP_WeaponMasterUtil_C
// (None)

class UClass* UBP_WeaponMasterUtil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponMasterUtil_C");

	return Clss;
}


// BP_WeaponMasterUtil_C BP_WeaponMasterUtil.Default__BP_WeaponMasterUtil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WeaponMasterUtil_C* UBP_WeaponMasterUtil_C::GetDefaultObj()
{
	static class UBP_WeaponMasterUtil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WeaponMasterUtil_C*>(UBP_WeaponMasterUtil_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.AcquisitionAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LegendWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLearned                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        AbilityLabel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponMasterUtil_C::AcquisitionAbility(class FName LegendWeapon, class UObject* __WorldContext, bool* IsLearned, class FName* AbilityLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "AcquisitionAbility");

	Params::UBP_WeaponMasterUtil_C_AcquisitionAbility_Params Parms{};

	Parms.LegendWeapon = LegendWeapon;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLearned != nullptr)
		*IsLearned = Parms.IsLearned;

	if (AbilityLabel != nullptr)
		*AbilityLabel = Parms.AbilityLabel;

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.TryAcquisitionSupportAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLearned                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        AbilityLabel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponMasterUtil_C::TryAcquisitionSupportAbility(class UObject* __WorldContext, bool* IsLearned, class FName* AbilityLabel, int32* AbilityIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "TryAcquisitionSupportAbility");

	Params::UBP_WeaponMasterUtil_C_TryAcquisitionSupportAbility_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLearned != nullptr)
		*IsLearned = Parms.IsLearned;

	if (AbilityLabel != nullptr)
		*AbilityLabel = Parms.AbilityLabel;

	if (AbilityIndex != nullptr)
		*AbilityIndex = Parms.AbilityIndex;

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.GetWeaponMasterJobLicenseItemLabel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponMasterUtil_C::GetWeaponMasterJobLicenseItemLabel(class UObject* __WorldContext, class FName* ItemLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "GetWeaponMasterJobLicenseItemLabel");

	Params::UBP_WeaponMasterUtil_C_GetWeaponMasterJobLicenseItemLabel_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLabel != nullptr)
		*ItemLabel = Parms.ItemLabel;

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.AcquisitionWeaponMasterJob
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponMasterUtil_C::AcquisitionWeaponMasterJob(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "AcquisitionWeaponMasterJob");

	Params::UBP_WeaponMasterUtil_C_AcquisitionWeaponMasterJob_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.BuyLegendWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Weapons                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponMasterUtil_C::BuyLegendWeapon(TArray<class FName>& Weapons, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "BuyLegendWeapon");

	Params::UBP_WeaponMasterUtil_C_BuyLegendWeapon_Params Parms{};

	Parms.Weapons = Weapons;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.IsFirstSoldLegendWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeaponMasterUtil_C::IsFirstSoldLegendWeapon(class UObject* __WorldContext, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "IsFirstSoldLegendWeapon");

	Params::UBP_WeaponMasterUtil_C_IsFirstSoldLegendWeapon_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.HaveWeaponMasterJob
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeaponMasterUtil_C::HaveWeaponMasterJob(class UObject* __WorldContext, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "HaveWeaponMasterJob");

	Params::UBP_WeaponMasterUtil_C_HaveWeaponMasterJob_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.IsFirstTalk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeaponMasterUtil_C::IsFirstTalk(class UObject* __WorldContext, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "IsFirstTalk");

	Params::UBP_WeaponMasterUtil_C_IsFirstTalk_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.MakeWeaponListTextForDialog
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                Weapons                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void UBP_WeaponMasterUtil_C::MakeWeaponListTextForDialog(TArray<class FName>& Weapons, class UObject* __WorldContext, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "MakeWeaponListTextForDialog");

	Params::UBP_WeaponMasterUtil_C_MakeWeaponListTextForDialog_Params Parms{};

	Parms.Weapons = Weapons;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.GetLegendWeaponsInBackpack
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                WeaponLabels                                                     (Parm, OutParm)

void UBP_WeaponMasterUtil_C::GetLegendWeaponsInBackpack(class UObject* __WorldContext, TArray<class FName>* WeaponLabels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "GetLegendWeaponsInBackpack");

	Params::UBP_WeaponMasterUtil_C_GetLegendWeaponsInBackpack_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponLabels != nullptr)
		*WeaponLabels = std::move(Parms.WeaponLabels);

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.ConvertRustWeaponToLegendWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RustedWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LegendWeapon                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponMasterUtil_C::ConvertRustWeaponToLegendWeapon(class FName RustedWeapon, class UObject* __WorldContext, class FName* LegendWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "ConvertRustWeaponToLegendWeapon");

	Params::UBP_WeaponMasterUtil_C_ConvertRustWeaponToLegendWeapon_Params Parms{};

	Parms.RustedWeapon = RustedWeapon;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (LegendWeapon != nullptr)
		*LegendWeapon = Parms.LegendWeapon;

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.GetSoldLegentWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSold                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                SoldWeapons                                                      (Parm, OutParm)
// int32                              TotalPrice                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponMasterUtil_C::GetSoldLegentWeapon(class UObject* __WorldContext, bool* IsSold, TArray<class FName>* SoldWeapons, int32* TotalPrice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "GetSoldLegentWeapon");

	Params::UBP_WeaponMasterUtil_C_GetSoldLegentWeapon_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSold != nullptr)
		*IsSold = Parms.IsSold;

	if (SoldWeapons != nullptr)
		*SoldWeapons = std::move(Parms.SoldWeapons);

	if (TotalPrice != nullptr)
		*TotalPrice = Parms.TotalPrice;

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.GetLegendWeaponFlagList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, class FName>     FlagList                                                         (Parm, OutParm)

void UBP_WeaponMasterUtil_C::GetLegendWeaponFlagList(class UObject* __WorldContext, TMap<class FName, class FName>* FlagList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "GetLegendWeaponFlagList");

	Params::UBP_WeaponMasterUtil_C_GetLegendWeaponFlagList_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FlagList != nullptr)
		*FlagList = Parms.FlagList;

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.IsAllActiveLegendWeaponFlag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeaponMasterUtil_C::IsAllActiveLegendWeaponFlag(class UObject* __WorldContext, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "IsAllActiveLegendWeaponFlag");

	Params::UBP_WeaponMasterUtil_C_IsAllActiveLegendWeaponFlag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.IsHaveRustedWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeaponMasterUtil_C::IsHaveRustedWeapon(class UObject* __WorldContext, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "IsHaveRustedWeapon");

	Params::UBP_WeaponMasterUtil_C_IsHaveRustedWeapon_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_WeaponMasterUtil.BP_WeaponMasterUtil_C.GetRustedWeaponsInBackpack
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                WeaponLabels                                                     (Parm, OutParm)

void UBP_WeaponMasterUtil_C::GetRustedWeaponsInBackpack(class UObject* __WorldContext, TArray<class FName>* WeaponLabels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WeaponMasterUtil_C", "GetRustedWeaponsInBackpack");

	Params::UBP_WeaponMasterUtil_C_GetRustedWeaponsInBackpack_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponLabels != nullptr)
		*WeaponLabels = std::move(Parms.WeaponLabels);

}

}


