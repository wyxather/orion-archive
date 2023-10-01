// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ActionIcon_Simple_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.SetBarStyle
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ActionIcon_Simple_C::SetBarStyle(class UObject** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.SetBarStyle");

	UWidget_ActionIcon_Simple_C_SetBarStyle_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.SetStacks
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Stacks                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ActionIcon_Simple_C::SetStacks(int* Stacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.SetStacks");

	UWidget_ActionIcon_Simple_C_SetStacks_Params params;
	params.Stacks = Stacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.DrawStacks
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_ActionIcon_Simple_C::DrawStacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.DrawStacks");

	UWidget_ActionIcon_Simple_C_DrawStacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ActionIcon_Simple_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.Construct");

	UWidget_ActionIcon_Simple_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ActionIcon_Simple_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.Tick");

	UWidget_ActionIcon_Simple_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.ExecuteUbergraph_Widget_ActionIcon_Simple
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ActionIcon_Simple_C::ExecuteUbergraph_Widget_ActionIcon_Simple(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C.ExecuteUbergraph_Widget_ActionIcon_Simple");

	UWidget_ActionIcon_Simple_C_ExecuteUbergraph_Widget_ActionIcon_Simple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
