#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BusinessWithNPC.BusinessWithNPC_C
// (None)

class UClass* UBusinessWithNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BusinessWithNPC_C");

	return Clss;
}


// BusinessWithNPC_C BusinessWithNPC.Default__BusinessWithNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBusinessWithNPC_C* UBusinessWithNPC_C::GetDefaultObj()
{
	static class UBusinessWithNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBusinessWithNPC_C*>(UBusinessWithNPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BusinessWithNPC.BusinessWithNPC_C.OpenNotificationAnimal
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSpActMerchantResult        SpActMerchantResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsFast                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBusinessWithNPC_C::OpenNotificationAnimal(struct FSpActMerchantResult& SpActMerchantResult, bool bIsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BusinessWithNPC_C", "OpenNotificationAnimal");

	Params::UBusinessWithNPC_C_OpenNotificationAnimal_Params Parms{};

	Parms.SpActMerchantResult = SpActMerchantResult;
	Parms.bIsFast = bIsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BusinessWithNPC.BusinessWithNPC_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBusinessWithNPC_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BusinessWithNPC_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BusinessWithNPC.BusinessWithNPC_C.OnResetHiddenFlag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBusinessWithNPC_C::OnResetHiddenFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BusinessWithNPC_C", "OnResetHiddenFlag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BusinessWithNPC.BusinessWithNPC_C.HideTemporaryInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWIDGET_TEMPORARY_HIDE_USERHideUser                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBusinessWithNPC_C::HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BusinessWithNPC_C", "HideTemporaryInternal");

	Params::UBusinessWithNPC_C_HideTemporaryInternal_Params Parms{};

	Parms.IsHidden = IsHidden;
	Parms.HideUser = HideUser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BusinessWithNPC.BusinessWithNPC_C.StartFlipbookAnimation
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBusinessWithNPC_C::StartFlipbookAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BusinessWithNPC_C", "StartFlipbookAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BusinessWithNPC.BusinessWithNPC_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBusinessWithNPC_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BusinessWithNPC_C", "Tick");

	Params::UBusinessWithNPC_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BusinessWithNPC.BusinessWithNPC_C.SetupNotificationBody
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSpActMerchantResult        SpActMerchantResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBusinessWithNPC_C::SetupNotificationBody(struct FSpActMerchantResult& SpActMerchantResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BusinessWithNPC_C", "SetupNotificationBody");

	Params::UBusinessWithNPC_C_SetupNotificationBody_Params Parms{};

	Parms.SpActMerchantResult = SpActMerchantResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BusinessWithNPC.BusinessWithNPC_C.OnFinishedCloseAnimation
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBusinessWithNPC_C::OnFinishedCloseAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BusinessWithNPC_C", "OnFinishedCloseAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BusinessWithNPC.BusinessWithNPC_C.OnTimerEnd
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBusinessWithNPC_C::OnTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BusinessWithNPC_C", "OnTimerEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BusinessWithNPC.BusinessWithNPC_C.CloseNotification
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFast                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBusinessWithNPC_C::CloseNotification(bool bIsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BusinessWithNPC_C", "CloseNotification");

	Params::UBusinessWithNPC_C_CloseNotification_Params Parms{};

	Parms.bIsFast = bIsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BusinessWithNPC.BusinessWithNPC_C.OpenNotification
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSpActMerchantResult        SpActMerchantResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsFast                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBusinessWithNPC_C::OpenNotification(struct FSpActMerchantResult& SpActMerchantResult, bool bIsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BusinessWithNPC_C", "OpenNotification");

	Params::UBusinessWithNPC_C_OpenNotification_Params Parms{};

	Parms.SpActMerchantResult = SpActMerchantResult;
	Parms.bIsFast = bIsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BusinessWithNPC.BusinessWithNPC_C.ExecuteUbergraph_BusinessWithNPC
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBusinessWithNPC_C::ExecuteUbergraph_BusinessWithNPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BusinessWithNPC_C", "ExecuteUbergraph_BusinessWithNPC");

	Params::UBusinessWithNPC_C_ExecuteUbergraph_BusinessWithNPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


