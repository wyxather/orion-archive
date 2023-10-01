// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MapGenDebug_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MapGenDebug.Widget_MapGenDebug_C.GetText_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_MapGenDebug_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.GetText_1");

	UWidget_MapGenDebug_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateQuestInfo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_MapGenDebug_C::UpdateQuestInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateQuestInfo");

	UWidget_MapGenDebug_C_UpdateQuestInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateMapGenInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MapGenDebug_C::UpdateMapGenInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateMapGenInfo");

	UWidget_MapGenDebug_C_UpdateMapGenInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateTileInfo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_MapGenDebug_C::UpdateTileInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateTileInfo");

	UWidget_MapGenDebug_C_UpdateTileInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapGenDebug.Widget_MapGenDebug_C.SetZone
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZoneActor**             ZoneActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MapGenDebug_C::SetZone(class AZoneActor** ZoneActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.SetZone");

	UWidget_MapGenDebug_C_SetZone_Params params;
	params.ZoneActor = ZoneActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapGenDebug.Widget_MapGenDebug_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MapGenDebug_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.Tick");

	UWidget_MapGenDebug_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapGenDebug.Widget_MapGenDebug_C.ExecuteUbergraph_Widget_MapGenDebug
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MapGenDebug_C::ExecuteUbergraph_Widget_MapGenDebug(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapGenDebug.Widget_MapGenDebug_C.ExecuteUbergraph_Widget_MapGenDebug");

	UWidget_MapGenDebug_C_ExecuteUbergraph_Widget_MapGenDebug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
