#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass NPCStatusPartsWidget.NPCStatusPartsWidget_C
// (None)

class UClass* UNPCStatusPartsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPCStatusPartsWidget_C");

	return Clss;
}


// NPCStatusPartsWidget_C NPCStatusPartsWidget.Default__NPCStatusPartsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNPCStatusPartsWidget_C* UNPCStatusPartsWidget_C::GetDefaultObj()
{
	static class UNPCStatusPartsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNPCStatusPartsWidget_C*>(UNPCStatusPartsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.InitializeAttributeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCStatusPartsWidget_C::InitializeAttributeIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "InitializeAttributeIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetCharaTextureFromCharacterResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   TargetTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UNPCStatusPartsWidget_C::SetCharaTextureFromCharacterResource(TSoftObjectPtr<class UTexture2D> TargetTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "SetCharaTextureFromCharacterResource");

	Params::UNPCStatusPartsWidget_C_SetCharaTextureFromCharacterResource_Params Parms{};

	Parms.TargetTexture = TargetTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetSessionSkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SupporterLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusPartsWidget_C::SetSessionSkill(class FName SupporterLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "SetSessionSkill");

	Params::UNPCStatusPartsWidget_C_SetSessionSkill_Params Parms{};

	Parms.SupporterLabel = SupporterLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetSubTargetIcon
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                AdditionalTargetNpcLabels                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         ActionDir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusPartsWidget_C::SetSubTargetIcon(TArray<class FName>& AdditionalTargetNpcLabels, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir ActionDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "SetSubTargetIcon");

	Params::UNPCStatusPartsWidget_C_SetSubTargetIcon_Params Parms{};

	Parms.AdditionalTargetNpcLabels = AdditionalTargetNpcLabels;
	Parms.ActionType = ActionType;
	Parms.ActionDir = ActionDir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.HideAdditionalSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCStatusPartsWidget_C::HideAdditionalSkill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "HideAdditionalSkill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetBusinessSkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NPCID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusPartsWidget_C::SetBusinessSkill(int32 NPCID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "SetBusinessSkill");

	Params::UNPCStatusPartsWidget_C_SetBusinessSkill_Params Parms{};

	Parms.NPCID = NPCID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetRankText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusPartsWidget_C::SetRankText(class FName TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "SetRankText");

	Params::UNPCStatusPartsWidget_C_SetRankText_Params Parms{};

	Parms.TextLabel = TextLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.HideRows
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HideRank                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideAbility                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideAbilityDetail                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideLimit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideAdditionalSkill                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNPCStatusPartsWidget_C::HideRows(bool HideRank, bool HideAbility, bool HideAbilityDetail, bool HideLimit, bool HideAdditionalSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "HideRows");

	Params::UNPCStatusPartsWidget_C_HideRows_Params Parms{};

	Parms.HideRank = HideRank;
	Parms.HideAbility = HideAbility;
	Parms.HideAbilityDetail = HideAbilityDetail;
	Parms.HideLimit = HideLimit;
	Parms.HideAdditionalSkill = HideAdditionalSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.HideRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCStatusPartsWidget_C::HideRank()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "HideRank");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.HideAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCStatusPartsWidget_C::HideAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "HideAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.HideAbilityDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCStatusPartsWidget_C::HideAbilityDetail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "HideAbilityDetail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.HideLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCStatusPartsWidget_C::HideLimit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "HideLimit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetAbilityDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowAbilityDetail                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAbilityDataBase            ABILITY                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UNPCStatusPartsWidget_C::SetAbilityDetail(bool ShowAbilityDetail, const struct FAbilityDataBase& ABILITY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "SetAbilityDetail");

	Params::UNPCStatusPartsWidget_C_SetAbilityDetail_Params Parms{};

	Parms.ShowAbilityDetail = ShowAbilityDetail;
	Parms.ABILITY = ABILITY;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetSupportLimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowLimit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              SupportLimit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusPartsWidget_C::SetSupportLimit(bool ShowLimit, int32 SupportLimit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "SetSupportLimit");

	Params::UNPCStatusPartsWidget_C_SetSupportLimit_Params Parms{};

	Parms.ShowLimit = ShowLimit;
	Parms.SupportLimit = SupportLimit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCStatusPartsWidget_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.Set Ability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LearnAbility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAbilityDataBase            ABILITY                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EWEAPON_CATEGORY        EnforcerWeapon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NameAbilityTextLabel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowSp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ConsumeSp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowAbilityDetail                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNPCStatusPartsWidget_C::Set_Ability(bool LearnAbility, const struct FAbilityDataBase& ABILITY, enum class EWEAPON_CATEGORY EnforcerWeapon, class FName NameAbilityTextLabel, bool ShowSp, int32 ConsumeSp, bool ShowAbilityDetail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "Set Ability");

	Params::UNPCStatusPartsWidget_C_Set_Ability_Params Parms{};

	Parms.LearnAbility = LearnAbility;
	Parms.ABILITY = ABILITY;
	Parms.EnforcerWeapon = EnforcerWeapon;
	Parms.NameAbilityTextLabel = NameAbilityTextLabel;
	Parms.ShowSp = ShowSp;
	Parms.ConsumeSp = ConsumeSp;
	Parms.ShowAbilityDetail = ShowAbilityDetail;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowRank                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusPartsWidget_C::SetRank(bool ShowRank, int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "SetRank");

	Params::UNPCStatusPartsWidget_C_SetRank_Params Parms{};

	Parms.ShowRank = ShowRank;
	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UNPCStatusPartsWidget_C::SetName(class FText Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "SetName");

	Params::UNPCStatusPartsWidget_C_SetName_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.SetIconWithAdditionalTargetNpcLables
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                AdditionalTargetNpcLabels                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         ActionDir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusPartsWidget_C::SetIconWithAdditionalTargetNpcLables(class FName NPCLabel, TArray<class FName>& AdditionalTargetNpcLabels, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir ActionDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "SetIconWithAdditionalTargetNpcLables");

	Params::UNPCStatusPartsWidget_C_SetIconWithAdditionalTargetNpcLables_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.AdditionalTargetNpcLabels = AdditionalTargetNpcLabels;
	Parms.ActionType = ActionType;
	Parms.ActionDir = ActionDir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.Set Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         ActionDir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusPartsWidget_C::Set_Icon(class FName NPCLabel, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir ActionDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "Set Icon");

	Params::UNPCStatusPartsWidget_C_Set_Icon_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.ActionType = ActionType;
	Parms.ActionDir = ActionDir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNPCStatusPartsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusPartsWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "Tick");

	Params::UNPCStatusPartsWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusPartsWidget.NPCStatusPartsWidget_C.ExecuteUbergraph_NPCStatusPartsWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusPartsWidget_C::ExecuteUbergraph_NPCStatusPartsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCStatusPartsWidget_C", "ExecuteUbergraph_NPCStatusPartsWidget");

	Params::UNPCStatusPartsWidget_C_ExecuteUbergraph_NPCStatusPartsWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


