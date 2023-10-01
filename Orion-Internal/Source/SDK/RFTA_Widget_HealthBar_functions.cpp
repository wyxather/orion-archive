// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_HealthBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_HealthBar.Widget_HealthBar_C.Init
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HealthBar_C::Init(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HealthBar.Widget_HealthBar_C.Init");

	UWidget_HealthBar_C_Init_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HealthBar.Widget_HealthBar_C.Get_Health_Percent_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_HealthBar_C::Get_Health_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HealthBar.Widget_HealthBar_C.Get_Health_Percent_1");

	UWidget_HealthBar_C_Get_Health_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HealthBar.Widget_HealthBar_C.OnTargetInvalid
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HealthBar_C::OnTargetInvalid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HealthBar.Widget_HealthBar_C.OnTargetInvalid");

	UWidget_HealthBar_C_OnTargetInvalid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HealthBar.Widget_HealthBar_C.ExecuteUbergraph_Widget_HealthBar
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HealthBar_C::ExecuteUbergraph_Widget_HealthBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HealthBar.Widget_HealthBar_C.ExecuteUbergraph_Widget_HealthBar");

	UWidget_HealthBar_C_ExecuteUbergraph_Widget_HealthBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
