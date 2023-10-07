#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass TreasureBoxBP.TreasureBoxBP_C
// (Actor)

class UClass* ATreasureBoxBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TreasureBoxBP_C");

	return Clss;
}


// TreasureBoxBP_C TreasureBoxBP.Default__TreasureBoxBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATreasureBoxBP_C* ATreasureBoxBP_C::GetDefaultObj()
{
	static class ATreasureBoxBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATreasureBoxBP_C*>(ATreasureBoxBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TreasureBoxBP.TreasureBoxBP_C.SetInputModeToChara
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATreasureBoxBP_C::SetInputModeToChara()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "SetInputModeToChara");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TreasureBoxBP.TreasureBoxBP_C.SpawnSecretPointEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOpen                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATreasureBoxBP_C::SpawnSecretPointEffect(bool IsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "SpawnSecretPointEffect");

	Params::ATreasureBoxBP_C_SpawnSecretPointEffect_Params Parms{};

	Parms.IsOpen = IsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TreasureBoxBP.TreasureBoxBP_C.SetObjectData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSObjectData               ObjectData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ATreasureBoxBP_C::SetObjectData(const struct FKSObjectData& ObjectData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "SetObjectData");

	Params::ATreasureBoxBP_C_SetObjectData_Params Parms{};

	Parms.ObjectData = ObjectData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TreasureBoxBP.TreasureBoxBP_C.OpenMaxItemNumDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATreasureBoxBP_C::OpenMaxItemNumDialog(class FName ItemLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "OpenMaxItemNumDialog");

	Params::ATreasureBoxBP_C_OpenMaxItemNumDialog_Params Parms{};

	Parms.ItemLabel = ItemLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TreasureBoxBP.TreasureBoxBP_C.LotteryItem
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Item_Label                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Item_Num                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATreasureBoxBP_C::LotteryItem(class FName* Item_Label, int32* Item_Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "LotteryItem");

	Params::ATreasureBoxBP_C_LotteryItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Item_Label != nullptr)
		*Item_Label = Parms.Item_Label;

	if (Item_Num != nullptr)
		*Item_Num = Parms.Item_Num;

}


// Function TreasureBoxBP.TreasureBoxBP_C.IsRandomItem
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATreasureBoxBP_C::IsRandomItem(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "IsRandomItem");

	Params::ATreasureBoxBP_C_IsRandomItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function TreasureBoxBP.TreasureBoxBP_C.PickItem
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemCount                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATreasureBoxBP_C::PickItem(class FName* ItemLabel, int32* ItemCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "PickItem");

	Params::ATreasureBoxBP_C_PickItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemLabel != nullptr)
		*ItemLabel = Parms.ItemLabel;

	if (ItemCount != nullptr)
		*ItemCount = Parms.ItemCount;

}


// Function TreasureBoxBP.TreasureBoxBP_C.MaxItemNumDialogCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATreasureBoxBP_C::MaxItemNumDialogCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "MaxItemNumDialogCallback");

	Params::ATreasureBoxBP_C_MaxItemNumDialogCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TreasureBoxBP.TreasureBoxBP_C.PlayEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATreasureBoxBP_C::PlayEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "PlayEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TreasureBoxBP.TreasureBoxBP_C.SequenceRequestCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATreasureBoxBP_C::SequenceRequestCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "SequenceRequestCallback");

	Params::ATreasureBoxBP_C_SequenceRequestCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TreasureBoxBP.TreasureBoxBP_C.GetOpenText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ATreasureBoxBP_C::GetOpenText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "GetOpenText");

	Params::ATreasureBoxBP_C_GetOpenText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TreasureBoxBP.TreasureBoxBP_C.IsOpenedTreasureBox
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ATreasureBoxBP_C::IsOpenedTreasureBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "IsOpenedTreasureBox");

	Params::ATreasureBoxBP_C_IsOpenedTreasureBox_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TreasureBoxBP.TreasureBoxBP_C.DialogFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATreasureBoxBP_C::DialogFinishCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "DialogFinishCallback");

	Params::ATreasureBoxBP_C_DialogFinishCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TreasureBoxBP.TreasureBoxBP_C.CheckAccessPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATreasureBoxBP_C::CheckAccessPoint(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "CheckAccessPoint");

	Params::ATreasureBoxBP_C_CheckAccessPoint_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TreasureBoxBP.TreasureBoxBP_C.SetupTreasureBoxVisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOpen                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATreasureBoxBP_C::SetupTreasureBoxVisible(bool IsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "SetupTreasureBoxVisible");

	Params::ATreasureBoxBP_C_SetupTreasureBoxVisible_Params Parms{};

	Parms.IsOpen = IsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TreasureBoxBP.TreasureBoxBP_C.IsCanOpenBox
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsComplete                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATreasureBoxBP_C::IsCanOpenBox(bool* IsComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "IsCanOpenBox");

	Params::ATreasureBoxBP_C_IsCanOpenBox_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsComplete != nullptr)
		*IsComplete = Parms.IsComplete;

}


// Function TreasureBoxBP.TreasureBoxBP_C.AlreadyOpenCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TreasureIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATreasureBoxBP_C::AlreadyOpenCheck(int32 TreasureIndex, const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "AlreadyOpenCheck");

	Params::ATreasureBoxBP_C_AlreadyOpenCheck_Params Parms{};

	Parms.TreasureIndex = TreasureIndex;
	Parms.Position = Position;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TreasureBoxBP.TreasureBoxBP_C.OpenDialog
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATreasureBoxBP_C::OpenDialog(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "OpenDialog");

	Params::ATreasureBoxBP_C_OpenDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function TreasureBoxBP.TreasureBoxBP_C.Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATreasureBoxBP_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TreasureBoxBP.TreasureBoxBP_C.SetObjectEnable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATreasureBoxBP_C::SetObjectEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "SetObjectEnable");

	Params::ATreasureBoxBP_C_SetObjectEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TreasureBoxBP.TreasureBoxBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ATreasureBoxBP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TreasureBoxBP.TreasureBoxBP_C.ActionEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void ATreasureBoxBP_C::ActionEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "ActionEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TreasureBoxBP.TreasureBoxBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATreasureBoxBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "ReceiveTick");

	Params::ATreasureBoxBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TreasureBoxBP.TreasureBoxBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATreasureBoxBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TreasureBoxBP.TreasureBoxBP_C.ExecuteUbergraph_TreasureBoxBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATreasureBoxBP_C::ExecuteUbergraph_TreasureBoxBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TreasureBoxBP_C", "ExecuteUbergraph_TreasureBoxBP");

	Params::ATreasureBoxBP_C_ExecuteUbergraph_TreasureBoxBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


