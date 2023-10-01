// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Varkid_Attack_SpitAndStinger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_Varkid_Attack_SpitAndStinger.ARAnim_Varkid_Attack_SpitAndStinger_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Varkid_Attack_SpitAndStinger_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Varkid_Attack_SpitAndStinger.ARAnim_Varkid_Attack_SpitAndStinger_C.OnBegin");

	UARAnim_Varkid_Attack_SpitAndStinger_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Varkid_Attack_SpitAndStinger.ARAnim_Varkid_Attack_SpitAndStinger_C.Notify_StingerShot
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Varkid_Attack_SpitAndStinger_C::Notify_StingerShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Varkid_Attack_SpitAndStinger.ARAnim_Varkid_Attack_SpitAndStinger_C.Notify_StingerShot");

	UARAnim_Varkid_Attack_SpitAndStinger_C_Notify_StingerShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Varkid_Attack_SpitAndStinger.ARAnim_Varkid_Attack_SpitAndStinger_C.Notify_Spit
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Varkid_Attack_SpitAndStinger_C::Notify_Spit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Varkid_Attack_SpitAndStinger.ARAnim_Varkid_Attack_SpitAndStinger_C.Notify_Spit");

	UARAnim_Varkid_Attack_SpitAndStinger_C_Notify_Spit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Varkid_Attack_SpitAndStinger.ARAnim_Varkid_Attack_SpitAndStinger_C.ExecuteUbergraph_ARAnim_Varkid_Attack_SpitAndStinger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Varkid_Attack_SpitAndStinger_C::ExecuteUbergraph_ARAnim_Varkid_Attack_SpitAndStinger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Varkid_Attack_SpitAndStinger.ARAnim_Varkid_Attack_SpitAndStinger_C.ExecuteUbergraph_ARAnim_Varkid_Attack_SpitAndStinger");

	UARAnim_Varkid_Attack_SpitAndStinger_C_ExecuteUbergraph_ARAnim_Varkid_Attack_SpitAndStinger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
