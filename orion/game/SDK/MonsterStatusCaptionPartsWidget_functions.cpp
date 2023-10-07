#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C
// (None)

class UClass* UMonsterStatusCaptionPartsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonsterStatusCaptionPartsWidget_C");

	return Clss;
}


// MonsterStatusCaptionPartsWidget_C MonsterStatusCaptionPartsWidget.Default__MonsterStatusCaptionPartsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonsterStatusCaptionPartsWidget_C* UMonsterStatusCaptionPartsWidget_C::GetDefaultObj()
{
	static class UMonsterStatusCaptionPartsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonsterStatusCaptionPartsWidget_C*>(UMonsterStatusCaptionPartsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.SetMonsterFlipbook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MonsterLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonsterStatusCaptionPartsWidget_C::SetMonsterFlipbook(class FName MonsterLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterStatusCaptionPartsWidget_C", "SetMonsterFlipbook");

	Params::UMonsterStatusCaptionPartsWidget_C_SetMonsterFlipbook_Params Parms{};

	Parms.MonsterLabel = MonsterLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.SetProcessItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CantProcess                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              ItemNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonsterStatusCaptionPartsWidget_C::SetProcessItemData(bool CantProcess, class FName ItemLabel, class FText ItemName, int32 ItemNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterStatusCaptionPartsWidget_C", "SetProcessItemData");

	Params::UMonsterStatusCaptionPartsWidget_C_SetProcessItemData_Params Parms{};

	Parms.CantProcess = CantProcess;
	Parms.ItemLabel = ItemLabel;
	Parms.ItemName = ItemName;
	Parms.ItemNum = ItemNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.SetCountVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visiblity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMonsterStatusCaptionPartsWidget_C::SetCountVisiblity(bool Visiblity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterStatusCaptionPartsWidget_C", "SetCountVisiblity");

	Params::UMonsterStatusCaptionPartsWidget_C_SetCountVisiblity_Params Parms{};

	Parms.Visiblity = Visiblity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.SetSkillData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSTextBlock*                TextBlock                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttributeIconPlate_C*       AttributeIconPlane                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AttributeName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonsterStatusCaptionPartsWidget_C::SetSkillData(class UKSTextBlock* TextBlock, class UAttributeIconPlate_C* AttributeIconPlane, class FName AttributeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterStatusCaptionPartsWidget_C", "SetSkillData");

	Params::UMonsterStatusCaptionPartsWidget_C_SetSkillData_Params Parms{};

	Parms.TextBlock = TextBlock;
	Parms.AttributeIconPlane = AttributeIconPlane;
	Parms.AttributeName = AttributeName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.SetInformation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                AbilityLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector2D                   FlipbookOffset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   FlipbookSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonsterStatusCaptionPartsWidget_C::SetInformation(class FName Name, int32 Rank, TArray<class FName>& AbilityLabel, const struct FVector2D& FlipbookOffset, const struct FVector2D& FlipbookSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterStatusCaptionPartsWidget_C", "SetInformation");

	Params::UMonsterStatusCaptionPartsWidget_C_SetInformation_Params Parms{};

	Parms.Name = Name;
	Parms.Rank = Rank;
	Parms.AbilityLabel = AbilityLabel;
	Parms.FlipbookOffset = FlipbookOffset;
	Parms.FlipbookSize = FlipbookSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMonsterStatusCaptionPartsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterStatusCaptionPartsWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonsterStatusCaptionPartsWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterStatusCaptionPartsWidget_C", "Tick");

	Params::UMonsterStatusCaptionPartsWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MonsterStatusCaptionPartsWidget.MonsterStatusCaptionPartsWidget_C.ExecuteUbergraph_MonsterStatusCaptionPartsWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonsterStatusCaptionPartsWidget_C::ExecuteUbergraph_MonsterStatusCaptionPartsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MonsterStatusCaptionPartsWidget_C", "ExecuteUbergraph_MonsterStatusCaptionPartsWidget");

	Params::UMonsterStatusCaptionPartsWidget_C_ExecuteUbergraph_MonsterStatusCaptionPartsWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


