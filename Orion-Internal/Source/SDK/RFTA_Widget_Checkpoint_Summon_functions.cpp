// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Checkpoint_Summon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.OnSummonStatusChanged
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSummoning                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Checkpoint_Summon_C::OnSummonStatusChanged(bool* IsSummoning)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.OnSummonStatusChanged");

	UWidget_Checkpoint_Summon_C_OnSummonStatusChanged_Params params;
	params.IsSummoning = IsSummoning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.HideNotification
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Checkpoint_Summon_C::HideNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.HideNotification");

	UWidget_Checkpoint_Summon_C_HideNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.ShowNotification
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  SummonerName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Checkpoint_Summon_C::ShowNotification(struct FName* SummonerName, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.ShowNotification");

	UWidget_Checkpoint_Summon_C_ShowNotification_Params params;
	params.SummonerName = SummonerName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Checkpoint_Summon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.Construct");

	UWidget_Checkpoint_Summon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Checkpoint_Summon_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.Tick");

	UWidget_Checkpoint_Summon_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.ExecuteUbergraph_Widget_Checkpoint_Summon
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Checkpoint_Summon_C::ExecuteUbergraph_Widget_Checkpoint_Summon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C.ExecuteUbergraph_Widget_Checkpoint_Summon");

	UWidget_Checkpoint_Summon_C_ExecuteUbergraph_Widget_Checkpoint_Summon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
