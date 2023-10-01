// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_PersistenceIO_Indicator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.PulseOpacity
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PersistenceIO_Indicator_C::PulseOpacity(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.PulseOpacity");

	UWidget_PersistenceIO_Indicator_C_PulseOpacity_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PersistenceIO_Indicator_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.Tick");

	UWidget_PersistenceIO_Indicator_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.OnShowIndicator
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PersistenceIO_Indicator_C::OnShowIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.OnShowIndicator");

	UWidget_PersistenceIO_Indicator_C_OnShowIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.OnHideIndicator
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PersistenceIO_Indicator_C::OnHideIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.OnHideIndicator");

	UWidget_PersistenceIO_Indicator_C_OnHideIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.OnInitialized
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_PersistenceIO_Indicator_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.OnInitialized");

	UWidget_PersistenceIO_Indicator_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.PulseCompleted
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PersistenceIO_Indicator_C::PulseCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.PulseCompleted");

	UWidget_PersistenceIO_Indicator_C_PulseCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.ExecuteUbergraph_Widget_PersistenceIO_Indicator
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PersistenceIO_Indicator_C::ExecuteUbergraph_Widget_PersistenceIO_Indicator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.ExecuteUbergraph_Widget_PersistenceIO_Indicator");

	UWidget_PersistenceIO_Indicator_C_ExecuteUbergraph_Widget_PersistenceIO_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
