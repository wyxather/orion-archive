#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibActionCommand.LibActionCommand_C
// (None)

class UClass* ULibActionCommand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibActionCommand_C");

	return Clss;
}


// LibActionCommand_C LibActionCommand.Default__LibActionCommand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibActionCommand_C* ULibActionCommand_C::GetDefaultObj()
{
	static class ULibActionCommand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibActionCommand_C*>(ULibActionCommand_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibActionCommand.LibActionCommand_C.GetConfusionAttackAbilityByWeapon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWEAPON_CATEGORY        WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibActionCommand_C::GetConfusionAttackAbilityByWeapon(enum class EWEAPON_CATEGORY WeaponType, class UObject* __WorldContext, class FName* AbilityName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibActionCommand_C", "GetConfusionAttackAbilityByWeapon");

	Params::ULibActionCommand_C_GetConfusionAttackAbilityByWeapon_Params Parms{};

	Parms.WeaponType = WeaponType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityName != nullptr)
		*AbilityName = Parms.AbilityName;

}


// Function LibActionCommand.LibActionCommand_C.GetChaseAttackAbilityByWeapon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWEAPON_CATEGORY        WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibActionCommand_C::GetChaseAttackAbilityByWeapon(enum class EWEAPON_CATEGORY WeaponType, class UObject* __WorldContext, class FName* AbilityName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibActionCommand_C", "GetChaseAttackAbilityByWeapon");

	Params::ULibActionCommand_C_GetChaseAttackAbilityByWeapon_Params Parms{};

	Parms.WeaponType = WeaponType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityName != nullptr)
		*AbilityName = Parms.AbilityName;

}


// Function LibActionCommand.LibActionCommand_C.GetEnchantAbilityByAttribute
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EATTRIBUTE_TYPE         AttributeType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnemy                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibActionCommand_C::GetEnchantAbilityByAttribute(enum class EATTRIBUTE_TYPE AttributeType, bool IsEnemy, class UObject* __WorldContext, class FName* AbilityName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibActionCommand_C", "GetEnchantAbilityByAttribute");

	Params::ULibActionCommand_C_GetEnchantAbilityByAttribute_Params Parms{};

	Parms.AttributeType = AttributeType;
	Parms.IsEnemy = IsEnemy;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityName != nullptr)
		*AbilityName = Parms.AbilityName;

}


// Function LibActionCommand.LibActionCommand_C.GetActionCommandForInventor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCommandMenuItem            CommandMenuItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (Parm, OutParm)

void ULibActionCommand_C::GetActionCommandForInventor(const struct FCommandMenuItem& CommandMenuItem, class UObject* __WorldContext, struct FAbilityDataBase* Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibActionCommand_C", "GetActionCommandForInventor");

	Params::ULibActionCommand_C_GetActionCommandForInventor_Params Parms{};

	Parms.CommandMenuItem = CommandMenuItem;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

}


// Function LibActionCommand.LibActionCommand_C.GetActionCommandForInvade
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCommandMenuItem            CommandMenuItem                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (Parm, OutParm)

void ULibActionCommand_C::GetActionCommandForInvade(struct FCommandMenuItem& CommandMenuItem, class UObject* __WorldContext, struct FAbilityDataBase* Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibActionCommand_C", "GetActionCommandForInvade");

	Params::ULibActionCommand_C_GetActionCommandForInvade_Params Parms{};

	Parms.CommandMenuItem = CommandMenuItem;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

}


// Function LibActionCommand.LibActionCommand_C.GetActionCommandForSupporter
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Display_Name                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommandMenuItem            CommandMenuItem                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (Parm, OutParm)

void ULibActionCommand_C::GetActionCommandForSupporter(class FName Display_Name, struct FCommandMenuItem& CommandMenuItem, class UObject* __WorldContext, struct FAbilityDataBase* Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibActionCommand_C", "GetActionCommandForSupporter");

	Params::ULibActionCommand_C_GetActionCommandForSupporter_Params Parms{};

	Parms.Display_Name = Display_Name;
	Parms.CommandMenuItem = CommandMenuItem;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

}


// Function LibActionCommand.LibActionCommand_C.GetActionCommandForItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (Parm, OutParm)

void ULibActionCommand_C::GetActionCommandForItem(class FName ItemId, class UObject* __WorldContext, struct FAbilityDataBase* Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibActionCommand_C", "GetActionCommandForItem");

	Params::ULibActionCommand_C_GetActionCommandForItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

}


// Function LibActionCommand.LibActionCommand_C.GetActionCommandForPreparation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAbilitySetDataBase         CommandSet                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              BoostLv                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PreparationAttack                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (Parm, OutParm)
// class FName                        Label                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibActionCommand_C::GetActionCommandForPreparation(const struct FAbilitySetDataBase& CommandSet, int32 BoostLv, bool PreparationAttack, class UObject* __WorldContext, struct FAbilityDataBase* Command, class FName* Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibActionCommand_C", "GetActionCommandForPreparation");

	Params::ULibActionCommand_C_GetActionCommandForPreparation_Params Parms{};

	Parms.CommandSet = CommandSet;
	Parms.BoostLv = BoostLv;
	Parms.PreparationAttack = PreparationAttack;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

	if (Label != nullptr)
		*Label = Parms.Label;

}


// Function LibActionCommand.LibActionCommand_C.GetNormalAttackCommand
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BoostLv                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (Parm, OutParm)
// class FName                        Label                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibActionCommand_C::GetNormalAttackCommand(class ABattleCharacterBase* Player, int32 BoostLv, class UObject* __WorldContext, struct FAbilityDataBase* Command, class FName* Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibActionCommand_C", "GetNormalAttackCommand");

	Params::ULibActionCommand_C_GetNormalAttackCommand_Params Parms{};

	Parms.Player = Player;
	Parms.BoostLv = BoostLv;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

	if (Label != nullptr)
		*Label = Parms.Label;

}


// Function LibActionCommand.LibActionCommand_C.GetActionCommandFromSet
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAbilitySetDataBase         CommandSet                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              BoostLv                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (Parm, OutParm)
// class FName                        Label                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibActionCommand_C::GetActionCommandFromSet(const struct FAbilitySetDataBase& CommandSet, int32 BoostLv, class UObject* __WorldContext, struct FAbilityDataBase* Command, class FName* Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibActionCommand_C", "GetActionCommandFromSet");

	Params::ULibActionCommand_C_GetActionCommandFromSet_Params Parms{};

	Parms.CommandSet = CommandSet;
	Parms.BoostLv = BoostLv;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

	if (Label != nullptr)
		*Label = Parms.Label;

}


// Function LibActionCommand.LibActionCommand_C.GetActionCommand
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        CommandName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (Parm, OutParm)

void ULibActionCommand_C::GetActionCommand(class FName CommandName, class UObject* __WorldContext, struct FAbilityDataBase* Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibActionCommand_C", "GetActionCommand");

	Params::ULibActionCommand_C_GetActionCommand_Params Parms{};

	Parms.CommandName = CommandName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

}

}


