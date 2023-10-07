#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C
// (None)

class UClass* UEquipJobAbilityListHeaderWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquipJobAbilityListHeaderWidget_C");

	return Clss;
}


// EquipJobAbilityListHeaderWidget_C EquipJobAbilityListHeaderWidget.Default__EquipJobAbilityListHeaderWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEquipJobAbilityListHeaderWidget_C* UEquipJobAbilityListHeaderWidget_C::GetDefaultObj()
{
	static class UEquipJobAbilityListHeaderWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEquipJobAbilityListHeaderWidget_C*>(UEquipJobAbilityListHeaderWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.CanAcquisionAbiliyToWeaponMaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Acquisition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipJobAbilityListHeaderWidget_C::CanAcquisionAbiliyToWeaponMaster(bool Acquisition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipJobAbilityListHeaderWidget_C", "CanAcquisionAbiliyToWeaponMaster");

	Params::UEquipJobAbilityListHeaderWidget_C_CanAcquisionAbiliyToWeaponMaster_Params Parms{};

	Parms.Acquisition = Acquisition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetExtraJobAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJobData                    TargetJob                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipJobAbilityListHeaderWidget_C::SetExtraJobAbility(const struct FJobData& TargetJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipJobAbilityListHeaderWidget_C", "SetExtraJobAbility");

	Params::UEquipJobAbilityListHeaderWidget_C_SetExtraJobAbility_Params Parms{};

	Parms.TargetJob = TargetJob;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetCanAcquisitionAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Acquisition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipJobAbilityListHeaderWidget_C::SetCanAcquisitionAbility(bool Acquisition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipJobAbilityListHeaderWidget_C", "SetCanAcquisitionAbility");

	Params::UEquipJobAbilityListHeaderWidget_C_SetCanAcquisitionAbility_Params Parms{};

	Parms.Acquisition = Acquisition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetJobIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJobData                    JobData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipJobAbilityListHeaderWidget_C::SetJobIcon(struct FJobData& JobData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipJobAbilityListHeaderWidget_C", "SetJobIcon");

	Params::UEquipJobAbilityListHeaderWidget_C_SetJobIcon_Params Parms{};

	Parms.JobData = JobData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetCharacterName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipJobAbilityListHeaderWidget_C::SetCharacterName(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipJobAbilityListHeaderWidget_C", "SetCharacterName");

	Params::UEquipJobAbilityListHeaderWidget_C_SetCharacterName_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetHaveJP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HaveJP                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipJobAbilityListHeaderWidget_C::SetHaveJP(int32 HaveJP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipJobAbilityListHeaderWidget_C", "SetHaveJP");

	Params::UEquipJobAbilityListHeaderWidget_C_SetHaveJP_Params Parms{};

	Parms.HaveJP = HaveJP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetCharacterData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ShowSecondJob                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsGuestCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipJobAbilityListHeaderWidget_C::SetCharacterData(struct FSavePlayerCharacterData& CharacterData, bool ShowSecondJob, bool IsGuestCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipJobAbilityListHeaderWidget_C", "SetCharacterData");

	Params::UEquipJobAbilityListHeaderWidget_C_SetCharacterData_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.ShowSecondJob = ShowSecondJob;
	Parms.IsGuestCharacter = IsGuestCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetNextAcquisitionJP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AcquisitionJP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipJobAbilityListHeaderWidget_C::SetNextAcquisitionJP(int32 AcquisitionJP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipJobAbilityListHeaderWidget_C", "SetNextAcquisitionJP");

	Params::UEquipJobAbilityListHeaderWidget_C_SetNextAcquisitionJP_Params Parms{};

	Parms.AcquisitionJP = AcquisitionJP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipJobAbilityListHeaderWidget_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipJobAbilityListHeaderWidget_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEquipJobAbilityListHeaderWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipJobAbilityListHeaderWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipJobAbilityListHeaderWidget.EquipJobAbilityListHeaderWidget_C.ExecuteUbergraph_EquipJobAbilityListHeaderWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipJobAbilityListHeaderWidget_C::ExecuteUbergraph_EquipJobAbilityListHeaderWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipJobAbilityListHeaderWidget_C", "ExecuteUbergraph_EquipJobAbilityListHeaderWidget");

	Params::UEquipJobAbilityListHeaderWidget_C_ExecuteUbergraph_EquipJobAbilityListHeaderWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


