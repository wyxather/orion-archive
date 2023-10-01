// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_StatusBar.Widget_StatusBar_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_StatusBar_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar.Widget_StatusBar_C.GetVisibility_1");

	UWidget_StatusBar_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_StatusBar.Widget_StatusBar_C.ProgressionBar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_StatusBar_C::ProgressionBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar.Widget_StatusBar_C.ProgressionBar");

	UWidget_StatusBar_C_ProgressionBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_StatusBar.Widget_StatusBar_C.OnHealthChanged
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusBar_C::OnHealthChanged(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar.Widget_StatusBar_C.OnHealthChanged");

	UWidget_StatusBar_C_OnHealthChanged_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusBar.Widget_StatusBar_C.InitHealth
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusBar_C::InitHealth(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar.Widget_StatusBar_C.InitHealth");

	UWidget_StatusBar_C_InitHealth_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusBar.Widget_StatusBar_C.Flash
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_StatusBar_C::Flash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar.Widget_StatusBar_C.Flash");

	UWidget_StatusBar_C_Flash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusBar.Widget_StatusBar_C.SetPercentage
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Ease_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_StatusBar_C::SetPercentage(float* Percentage, bool* Ease_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar.Widget_StatusBar_C.SetPercentage");

	UWidget_StatusBar_C_SetPercentage_Params params;
	params.Percentage = Percentage;
	params.Ease_ = Ease_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusBar.Widget_StatusBar_C.PreConstruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_StatusBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar.Widget_StatusBar_C.PreConstruct");

	UWidget_StatusBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusBar.Widget_StatusBar_C.DelayedSetPercentage
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusBar_C::DelayedSetPercentage(float* Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar.Widget_StatusBar_C.DelayedSetPercentage");

	UWidget_StatusBar_C_DelayedSetPercentage_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusBar.Widget_StatusBar_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar.Widget_StatusBar_C.Tick");

	UWidget_StatusBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusBar.Widget_StatusBar_C.ExecuteUbergraph_Widget_StatusBar
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusBar_C::ExecuteUbergraph_Widget_StatusBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar.Widget_StatusBar_C.ExecuteUbergraph_Widget_StatusBar");

	UWidget_StatusBar_C_ExecuteUbergraph_Widget_StatusBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
