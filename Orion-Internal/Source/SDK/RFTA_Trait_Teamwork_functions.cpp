// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_Teamwork_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trait_Teamwork.Trait_Teamwork_C.QueryNearbyPlayers
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UTrait_Teamwork_C::QueryNearbyPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Teamwork.Trait_Teamwork_C.QueryNearbyPlayers");

	UTrait_Teamwork_C_QueryNearbyPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trait_Teamwork.Trait_Teamwork_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTrait_Teamwork_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Teamwork.Trait_Teamwork_C.FilterIncomingDamage");

	UTrait_Teamwork_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Trait_Teamwork.Trait_Teamwork_C.GetDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_Teamwork_C::GetDamageMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Teamwork.Trait_Teamwork_C.GetDamageMod");

	UTrait_Teamwork_C_GetDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Trait_Teamwork.Trait_Teamwork_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           InspectLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTrait_Teamwork_C::ModifyInspectInfo(class AActor** Actor, int* InspectLevel, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Teamwork.Trait_Teamwork_C.ModifyInspectInfo");

	UTrait_Teamwork_C_ModifyInspectInfo_Params params;
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


// Function Trait_Teamwork.Trait_Teamwork_C.SetNumNearbyPlayers
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_Teamwork_C::SetNumNearbyPlayers(int* NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Teamwork.Trait_Teamwork_C.SetNumNearbyPlayers");

	UTrait_Teamwork_C_SetNumNearbyPlayers_Params params;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trait_Teamwork.Trait_Teamwork_C.GetTeamworkRange
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_Teamwork_C::GetTeamworkRange(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Teamwork.Trait_Teamwork_C.GetTeamworkRange");

	UTrait_Teamwork_C_GetTeamworkRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Trait_Teamwork.Trait_Teamwork_C.OnEquipped
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UTrait_Teamwork_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Teamwork.Trait_Teamwork_C.OnEquipped");

	UTrait_Teamwork_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trait_Teamwork.Trait_Teamwork_C.OnUnequipped
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UTrait_Teamwork_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Teamwork.Trait_Teamwork_C.OnUnequipped");

	UTrait_Teamwork_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trait_Teamwork.Trait_Teamwork_C.ExecuteUbergraph_Trait_Teamwork
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_Teamwork_C::ExecuteUbergraph_Trait_Teamwork(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Teamwork.Trait_Teamwork_C.ExecuteUbergraph_Trait_Teamwork");

	UTrait_Teamwork_C_ExecuteUbergraph_Trait_Teamwork_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
