// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Loading_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Loading.Widget_Loading_C.SetTipImageAndPlayAnimation
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Loading_C::SetTipImageAndPlayAnimation(class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Loading.Widget_Loading_C.SetTipImageAndPlayAnimation");

	UWidget_Loading_C_SetTipImageAndPlayAnimation_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Loading.Widget_Loading_C.UpdateTip
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Loading_C::UpdateTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Loading.Widget_Loading_C.UpdateTip");

	UWidget_Loading_C_UpdateTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Loading.Widget_Loading_C.InitTips
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Loading_C::InitTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Loading.Widget_Loading_C.InitTips");

	UWidget_Loading_C_InitTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Loading.Widget_Loading_C.IsFinishedTransitioning
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Loading_C::IsFinishedTransitioning(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Loading.Widget_Loading_C.IsFinishedTransitioning");

	UWidget_Loading_C_IsFinishedTransitioning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Widget_Loading.Widget_Loading_C.HideLoadingScreen
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Loading_C::HideLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Loading.Widget_Loading_C.HideLoadingScreen");

	UWidget_Loading_C_HideLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Loading.Widget_Loading_C.ShowLoadingScreen
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Loading_C::ShowLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Loading.Widget_Loading_C.ShowLoadingScreen");

	UWidget_Loading_C_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Loading.Widget_Loading_C.OnLoaded_A42900CD43617034973CE2A28642000E
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Loading_C::OnLoaded_A42900CD43617034973CE2A28642000E(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Loading.Widget_Loading_C.OnLoaded_A42900CD43617034973CE2A28642000E");

	UWidget_Loading_C_OnLoaded_A42900CD43617034973CE2A28642000E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Loading.Widget_Loading_C.PreConstruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Loading_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Loading.Widget_Loading_C.PreConstruct");

	UWidget_Loading_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Loading.Widget_Loading_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Loading_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Loading.Widget_Loading_C.Construct");

	UWidget_Loading_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Loading.Widget_Loading_C.PrecacheTipImage
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Loading_C::PrecacheTipImage(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Loading.Widget_Loading_C.PrecacheTipImage");

	UWidget_Loading_C_PrecacheTipImage_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Loading.Widget_Loading_C.ExecuteUbergraph_Widget_Loading
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Loading_C::ExecuteUbergraph_Widget_Loading(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Loading.Widget_Loading_C.ExecuteUbergraph_Widget_Loading");

	UWidget_Loading_C_ExecuteUbergraph_Widget_Loading_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
