#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass SwitchWeaponAttackCommand.SwitchWeaponAttackCommand_C
// (Actor)

class UClass* ASwitchWeaponAttackCommand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwitchWeaponAttackCommand_C");

	return Clss;
}


// SwitchWeaponAttackCommand_C SwitchWeaponAttackCommand.Default__SwitchWeaponAttackCommand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASwitchWeaponAttackCommand_C* ASwitchWeaponAttackCommand_C::GetDefaultObj()
{
	static class ASwitchWeaponAttackCommand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASwitchWeaponAttackCommand_C*>(ASwitchWeaponAttackCommand_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SwitchWeaponAttackCommand.SwitchWeaponAttackCommand_C.ExecAilmentCommand
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllAilment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASwitchWeaponAttackCommand_C::ExecAilmentCommand(int32 Index, bool AllAilment, bool LastHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchWeaponAttackCommand_C", "ExecAilmentCommand");

	Params::ASwitchWeaponAttackCommand_C_ExecAilmentCommand_Params Parms{};

	Parms.Index = Index;
	Parms.AllAilment = AllAilment;
	Parms.LastHit = LastHit;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SwitchWeaponAttackCommand.SwitchWeaponAttackCommand_C.Setup Action Command
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBaseBP_C*>Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAbilityDataBase            NewCommand                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASwitchWeaponAttackCommand_C::Setup_Action_Command(class ABattleCharacterBaseBP_C* Enforcer, TArray<class ABattleCharacterBaseBP_C*>& Target, const struct FAbilityDataBase& NewCommand, int32 BoostLevel, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchWeaponAttackCommand_C", "Setup Action Command");

	Params::ASwitchWeaponAttackCommand_C_Setup_Action_Command_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.Target = Target;
	Parms.NewCommand = NewCommand;
	Parms.BoostLevel = BoostLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function SwitchWeaponAttackCommand.SwitchWeaponAttackCommand_C.CheckEnableCommandWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        Weapon                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASwitchWeaponAttackCommand_C::CheckEnableCommandWeapon(enum class EWEAPON_CATEGORY* Weapon, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchWeaponAttackCommand_C", "CheckEnableCommandWeapon");

	Params::ASwitchWeaponAttackCommand_C_CheckEnableCommandWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Weapon != nullptr)
		*Weapon = Parms.Weapon;

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}

}


