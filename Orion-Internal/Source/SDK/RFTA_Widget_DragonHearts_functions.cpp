// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_DragonHearts_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DragonHearts.Widget_DragonHearts_C.RefreshDragonHearts
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  DragonHearts                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_DragonHearts_C::RefreshDragonHearts(class AItem** DragonHearts)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DragonHearts.Widget_DragonHearts_C.RefreshDragonHearts");

	UWidget_DragonHearts_C_RefreshDragonHearts_Params params;
	params.DragonHearts = DragonHearts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DragonHearts.Widget_DragonHearts_C.RefreshCharacter
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_DragonHearts_C::RefreshCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DragonHearts.Widget_DragonHearts_C.RefreshCharacter");

	UWidget_DragonHearts_C_RefreshCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DragonHearts.Widget_DragonHearts_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DragonHearts_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DragonHearts.Widget_DragonHearts_C.Construct");

	UWidget_DragonHearts_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DragonHearts.Widget_DragonHearts_C.InitCharacter
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_DragonHearts_C::InitCharacter(class ACharacterGunfire** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DragonHearts.Widget_DragonHearts_C.InitCharacter");

	UWidget_DragonHearts_C_InitCharacter_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DragonHearts.Widget_DragonHearts_C.Destruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DragonHearts_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DragonHearts.Widget_DragonHearts_C.Destruct");

	UWidget_DragonHearts_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DragonHearts.Widget_DragonHearts_C.ExecuteUbergraph_Widget_DragonHearts
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_DragonHearts_C::ExecuteUbergraph_Widget_DragonHearts(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DragonHearts.Widget_DragonHearts_C.ExecuteUbergraph_Widget_DragonHearts");

	UWidget_DragonHearts_C_ExecuteUbergraph_Widget_DragonHearts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
