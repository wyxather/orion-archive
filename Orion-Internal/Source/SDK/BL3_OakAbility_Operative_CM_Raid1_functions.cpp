// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_CM_Raid1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Operative_CM_Raid1_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnActivated");

	UOakAbility_Operative_CM_Raid1_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnStartSliding
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Operative_CM_Raid1_C::OnStartSliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnStartSliding");

	UOakAbility_Operative_CM_Raid1_C_OnStartSliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnStopSliding
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlideEndedDetails      Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOakAbility_Operative_CM_Raid1_C::OnStopSliding(const struct FSlideEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnStopSliding");

	UOakAbility_Operative_CM_Raid1_C_OnStopSliding_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.StartClassModBonus
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Operative_CM_Raid1_C::StartClassModBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.StartClassModBonus");

	UOakAbility_Operative_CM_Raid1_C_StartClassModBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.StopClassModBonus
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Operative_CM_Raid1_C::StopClassModBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.StopClassModBonus");

	UOakAbility_Operative_CM_Raid1_C_StopClassModBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.ExecuteUbergraph_OakAbility_Operative_CM_Raid1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Operative_CM_Raid1_C::ExecuteUbergraph_OakAbility_Operative_CM_Raid1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.ExecuteUbergraph_OakAbility_Operative_CM_Raid1");

	UOakAbility_Operative_CM_Raid1_C_ExecuteUbergraph_OakAbility_Operative_CM_Raid1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
