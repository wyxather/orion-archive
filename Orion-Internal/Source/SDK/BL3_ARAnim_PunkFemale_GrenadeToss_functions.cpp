// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_PunkFemale_GrenadeToss_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_PunkFemale_GrenadeToss.ARAnim_PunkFemale_GrenadeToss_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_PunkFemale_GrenadeToss_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkFemale_GrenadeToss.ARAnim_PunkFemale_GrenadeToss_C.OnBegin");

	UARAnim_PunkFemale_GrenadeToss_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PunkFemale_GrenadeToss.ARAnim_PunkFemale_GrenadeToss_C.Notify_SpawnGrenade
// (BlueprintCallable, BlueprintEvent)

void UARAnim_PunkFemale_GrenadeToss_C::Notify_SpawnGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkFemale_GrenadeToss.ARAnim_PunkFemale_GrenadeToss_C.Notify_SpawnGrenade");

	UARAnim_PunkFemale_GrenadeToss_C_Notify_SpawnGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PunkFemale_GrenadeToss.ARAnim_PunkFemale_GrenadeToss_C.Notify_Throw
// (BlueprintCallable, BlueprintEvent)

void UARAnim_PunkFemale_GrenadeToss_C::Notify_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkFemale_GrenadeToss.ARAnim_PunkFemale_GrenadeToss_C.Notify_Throw");

	UARAnim_PunkFemale_GrenadeToss_C_Notify_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PunkFemale_GrenadeToss.ARAnim_PunkFemale_GrenadeToss_C.Notify_PrimeExplosive
// (BlueprintCallable, BlueprintEvent)

void UARAnim_PunkFemale_GrenadeToss_C::Notify_PrimeExplosive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkFemale_GrenadeToss.ARAnim_PunkFemale_GrenadeToss_C.Notify_PrimeExplosive");

	UARAnim_PunkFemale_GrenadeToss_C_Notify_PrimeExplosive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PunkFemale_GrenadeToss.ARAnim_PunkFemale_GrenadeToss_C.ExecuteUbergraph_ARAnim_PunkFemale_GrenadeToss
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_PunkFemale_GrenadeToss_C::ExecuteUbergraph_ARAnim_PunkFemale_GrenadeToss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkFemale_GrenadeToss.ARAnim_PunkFemale_GrenadeToss_C.ExecuteUbergraph_ARAnim_PunkFemale_GrenadeToss");

	UARAnim_PunkFemale_GrenadeToss_C_ExecuteUbergraph_ARAnim_PunkFemale_GrenadeToss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
