#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ActionCharacterPanel.ActionCharacterPanel_C
// (None)

class UClass* UActionCharacterPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionCharacterPanel_C");

	return Clss;
}


// ActionCharacterPanel_C ActionCharacterPanel.Default__ActionCharacterPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionCharacterPanel_C* UActionCharacterPanel_C::GetDefaultObj()
{
	static class UActionCharacterPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionCharacterPanel_C*>(UActionCharacterPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionCharacterPanel.ActionCharacterPanel_C.SetSubSelecterVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionCharacterPanel_C::SetSubSelecterVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "SetSubSelecterVisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.SetSelecterVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionCharacterPanel_C::SetSelecterVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "SetSelecterVisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.PlayCloseSubIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionCharacterPanel_C::PlayCloseSubIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "PlayCloseSubIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.PlayOpenSubIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionCharacterPanel_C::PlayOpenSubIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "PlayOpenSubIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionCharacterPanel_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.ResetSubActiveCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionCharacterPanel_C::ResetSubActiveCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "ResetSubActiveCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.SetSubActiveCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionCharacterPanel_C::SetSubActiveCharacter(class ABattleCharacterBaseBP_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "SetSubActiveCharacter");

	Params::UActionCharacterPanel_C_SetSubActiveCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.Debug_UpdateParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  OrderIcon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  FrontIcon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IconUV_X                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IconUV_Y                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ScaleX                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ScaleY                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CharaScale                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InvertX                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  WeaponIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   FootPivot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnemy                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionCharacterPanel_C::Debug_UpdateParam(class UTexture2D* OrderIcon, class UTexture2D* FrontIcon, float IconUV_X, float IconUV_Y, float ScaleX, float ScaleY, const struct FVector2D& CharaOffset, float CharaScale, float InvertX, class UTexture2D* WeaponIcon, const struct FVector2D& FootPivot, bool IsEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "Debug_UpdateParam");

	Params::UActionCharacterPanel_C_Debug_UpdateParam_Params Parms{};

	Parms.OrderIcon = OrderIcon;
	Parms.FrontIcon = FrontIcon;
	Parms.IconUV_X = IconUV_X;
	Parms.IconUV_Y = IconUV_Y;
	Parms.ScaleX = ScaleX;
	Parms.ScaleY = ScaleY;
	Parms.CharaOffset = CharaOffset;
	Parms.CharaScale = CharaScale;
	Parms.InvertX = InvertX;
	Parms.WeaponIcon = WeaponIcon;
	Parms.FootPivot = FootPivot;
	Parms.IsEnemy = IsEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.CheckSpecial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Special                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionCharacterPanel_C::CheckSpecial(bool* Special)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "CheckSpecial");

	Params::UActionCharacterPanel_C_CheckSpecial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Special != nullptr)
		*Special = Parms.Special;

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.SetQuestionMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionCharacterPanel_C::SetQuestionMode(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "SetQuestionMode");

	Params::UActionCharacterPanel_C_SetQuestionMode_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.SetRainMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionCharacterPanel_C::SetRainMode(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "SetRainMode");

	Params::UActionCharacterPanel_C_SetRainMode_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.GetSelecterEffectVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UActionCharacterPanel_C::GetSelecterEffectVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "GetSelecterEffectVisibility");

	Params::UActionCharacterPanel_C_GetSelecterEffectVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.ResetActiveCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionCharacterPanel_C::ResetActiveCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "ResetActiveCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.SetActiveCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionCharacterPanel_C::SetActiveCharacter(class ABattleCharacterBaseBP_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "SetActiveCharacter");

	Params::UActionCharacterPanel_C_SetActiveCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActionCharacterPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCharacterPanel.ActionCharacterPanel_C.ExecuteUbergraph_ActionCharacterPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionCharacterPanel_C::ExecuteUbergraph_ActionCharacterPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionCharacterPanel_C", "ExecuteUbergraph_ActionCharacterPanel");

	Params::UActionCharacterPanel_C_ExecuteUbergraph_ActionCharacterPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


