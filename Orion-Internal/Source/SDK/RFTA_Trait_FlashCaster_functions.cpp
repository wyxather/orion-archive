// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_FlashCaster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trait_FlashCaster.Trait_FlashCaster_C.GetModCastingSpeedAnimPlayRate
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_FlashCaster_C::GetModCastingSpeedAnimPlayRate(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_FlashCaster.Trait_FlashCaster_C.GetModCastingSpeedAnimPlayRate");

	UTrait_FlashCaster_C_GetModCastingSpeedAnimPlayRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Trait_FlashCaster.Trait_FlashCaster_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           InspectLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTrait_FlashCaster_C::ModifyInspectInfo(class AActor** Actor, int* InspectLevel, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_FlashCaster.Trait_FlashCaster_C.ModifyInspectInfo");

	UTrait_FlashCaster_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InspectLevel = InspectLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Trait_FlashCaster.Trait_FlashCaster_C.GetModCastingSpeedMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_FlashCaster_C::GetModCastingSpeedMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_FlashCaster.Trait_FlashCaster_C.GetModCastingSpeedMod");

	UTrait_FlashCaster_C_GetModCastingSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Trait_FlashCaster.Trait_FlashCaster_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UTrait_FlashCaster_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_FlashCaster.Trait_FlashCaster_C.OnComputeStats");

	UTrait_FlashCaster_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trait_FlashCaster.Trait_FlashCaster_C.OnPostComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UTrait_FlashCaster_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_FlashCaster.Trait_FlashCaster_C.OnPostComputeStats");

	UTrait_FlashCaster_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trait_FlashCaster.Trait_FlashCaster_C.ExecuteUbergraph_Trait_FlashCaster
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_FlashCaster_C::ExecuteUbergraph_Trait_FlashCaster(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_FlashCaster.Trait_FlashCaster_C.ExecuteUbergraph_Trait_FlashCaster");

	UTrait_FlashCaster_C_ExecuteUbergraph_Trait_FlashCaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
