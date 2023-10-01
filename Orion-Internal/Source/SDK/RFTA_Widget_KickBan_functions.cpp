// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_KickBan_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_KickBan.Widget_KickBan_C.GetPopulatedVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_KickBan_C::GetPopulatedVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.GetPopulatedVisibility_1");

	UWidget_KickBan_C_GetPopulatedVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_KickBan.Widget_KickBan_C.UpdatePlayerList
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_KickBan_C::UpdatePlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.UpdatePlayerList");

	UWidget_KickBan_C_UpdatePlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KickBan.Widget_KickBan_C.NavigateToPlayer
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KickBan_C::NavigateToPlayer(bool* Forward, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.NavigateToPlayer");

	UWidget_KickBan_C_NavigateToPlayer_Params params;
	params.Forward = Forward;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KickBan.Widget_KickBan_C.GetEmptyVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_KickBan_C::GetEmptyVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.GetEmptyVisibility_1");

	UWidget_KickBan_C_GetEmptyVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_KickBan.Widget_KickBan_C.CanPress
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_KickBan_C::CanPress(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.CanPress");

	UWidget_KickBan_C_CanPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_KickBan.Widget_KickBan_C.BuildPlayerList
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_KickBan_C::BuildPlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.BuildPlayerList");

	UWidget_KickBan_C_BuildPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KickBan.Widget_KickBan_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KickBan_C::BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_KickBan_C_BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KickBan.Widget_KickBan_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KickBan_C::BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_KickBan_C_BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KickBan.Widget_KickBan_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_KickBan_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.Construct");

	UWidget_KickBan_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KickBan.Widget_KickBan_C.BndEvt__Ban_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KickBan_C::BndEvt__Ban_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.BndEvt__Ban_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_KickBan_C_BndEvt__Ban_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KickBan.Widget_KickBan_C.FocusList
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_KickBan_C::FocusList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.FocusList");

	UWidget_KickBan_C_FocusList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KickBan.Widget_KickBan_C.OnSelected
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerStateGunfire**    PlayerStateGunfire             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KickBan_C::OnSelected(class APlayerStateGunfire** PlayerStateGunfire, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.OnSelected");

	UWidget_KickBan_C_OnSelected_Params params;
	params.PlayerStateGunfire = PlayerStateGunfire;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KickBan.Widget_KickBan_C.OnCooldown
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_KickBan_C::OnCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.OnCooldown");

	UWidget_KickBan_C_OnCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KickBan.Widget_KickBan_C.OnNavigate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation*                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KickBan_C::OnNavigate(EUINavigation* Direction, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.OnNavigate");

	UWidget_KickBan_C_OnNavigate_Params params;
	params.Direction = Direction;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KickBan.Widget_KickBan_C.OnKick
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_KickBan_C::OnKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.OnKick");

	UWidget_KickBan_C_OnKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KickBan.Widget_KickBan_C.ExecuteUbergraph_Widget_KickBan
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KickBan_C::ExecuteUbergraph_Widget_KickBan(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KickBan.Widget_KickBan_C.ExecuteUbergraph_Widget_KickBan");

	UWidget_KickBan_C_ExecuteUbergraph_Widget_KickBan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
