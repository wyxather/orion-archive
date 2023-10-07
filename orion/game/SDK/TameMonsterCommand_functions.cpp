#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass TameMonsterCommand.TameMonsterCommand_C
// (Actor)

class UClass* ATameMonsterCommand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TameMonsterCommand_C");

	return Clss;
}


// TameMonsterCommand_C TameMonsterCommand.Default__TameMonsterCommand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATameMonsterCommand_C* ATameMonsterCommand_C::GetDefaultObj()
{
	static class ATameMonsterCommand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATameMonsterCommand_C*>(ATameMonsterCommand_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TameMonsterCommand.TameMonsterCommand_C.Setup Action Command
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBaseBP_C*>Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAbilityDataBase            NewCommand                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATameMonsterCommand_C::Setup_Action_Command(class ABattleCharacterBaseBP_C* Enforcer, TArray<class ABattleCharacterBaseBP_C*>& Target, const struct FAbilityDataBase& NewCommand, int32 BoostLevel, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TameMonsterCommand_C", "Setup Action Command");

	Params::ATameMonsterCommand_C_Setup_Action_Command_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.Target = Target;
	Parms.NewCommand = NewCommand;
	Parms.BoostLevel = BoostLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function TameMonsterCommand.TameMonsterCommand_C.ExecSpecialAilmentCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ATameMonsterCommand_C::ExecSpecialAilmentCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TameMonsterCommand_C", "ExecSpecialAilmentCommand");

	Params::ATameMonsterCommand_C_ExecSpecialAilmentCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TameMonsterCommand.TameMonsterCommand_C.SaveTameMonster
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATameMonsterCommand_C::SaveTameMonster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TameMonsterCommand_C", "SaveTameMonster");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TameMonsterCommand.TameMonsterCommand_C.CheckExecCommand
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Exec                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATameMonsterCommand_C::CheckExecCommand(bool* Exec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TameMonsterCommand_C", "CheckExecCommand");

	Params::ATameMonsterCommand_C_CheckExecCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Exec != nullptr)
		*Exec = Parms.Exec;

}


// Function TameMonsterCommand.TameMonsterCommand_C.CheckBackPackOver
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Over                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATameMonsterCommand_C::CheckBackPackOver(bool* Over)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TameMonsterCommand_C", "CheckBackPackOver");

	Params::ATameMonsterCommand_C_CheckBackPackOver_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Over != nullptr)
		*Over = Parms.Over;

}


// Function TameMonsterCommand.TameMonsterCommand_C.JudgeTameMonster
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATameMonsterCommand_C::JudgeTameMonster(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TameMonsterCommand_C", "JudgeTameMonster");

	Params::ATameMonsterCommand_C_JudgeTameMonster_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function TameMonsterCommand.TameMonsterCommand_C.TameDialogPermit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATameMonsterCommand_C::TameDialogPermit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TameMonsterCommand_C", "TameDialogPermit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TameMonsterCommand.TameMonsterCommand_C.TameDialogCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATameMonsterCommand_C::TameDialogCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TameMonsterCommand_C", "TameDialogCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TameMonsterCommand.TameMonsterCommand_C.TameReleaseComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATameMonsterCommand_C::TameReleaseComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TameMonsterCommand_C", "TameReleaseComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TameMonsterCommand.TameMonsterCommand_C.ExecTameMonsterFlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATameMonsterCommand_C::ExecTameMonsterFlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TameMonsterCommand_C", "ExecTameMonsterFlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TameMonsterCommand.TameMonsterCommand_C.ExecuteUbergraph_TameMonsterCommand
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATameMonsterCommand_C::ExecuteUbergraph_TameMonsterCommand(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TameMonsterCommand_C", "ExecuteUbergraph_TameMonsterCommand");

	Params::ATameMonsterCommand_C_ExecuteUbergraph_TameMonsterCommand_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


