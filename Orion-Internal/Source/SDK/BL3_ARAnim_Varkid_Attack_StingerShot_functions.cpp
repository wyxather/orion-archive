// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Varkid_Attack_StingerShot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_Varkid_Attack_StingerShot.ARAnim_Varkid_Attack_StingerShot_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Varkid_Attack_StingerShot_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Varkid_Attack_StingerShot.ARAnim_Varkid_Attack_StingerShot_C.OnBegin");

	UARAnim_Varkid_Attack_StingerShot_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Varkid_Attack_StingerShot.ARAnim_Varkid_Attack_StingerShot_C.Notify_StingerShot
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Varkid_Attack_StingerShot_C::Notify_StingerShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Varkid_Attack_StingerShot.ARAnim_Varkid_Attack_StingerShot_C.Notify_StingerShot");

	UARAnim_Varkid_Attack_StingerShot_C_Notify_StingerShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Varkid_Attack_StingerShot.ARAnim_Varkid_Attack_StingerShot_C.ExecuteUbergraph_ARAnim_Varkid_Attack_StingerShot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Varkid_Attack_StingerShot_C::ExecuteUbergraph_ARAnim_Varkid_Attack_StingerShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Varkid_Attack_StingerShot.ARAnim_Varkid_Attack_StingerShot_C.ExecuteUbergraph_ARAnim_Varkid_Attack_StingerShot");

	UARAnim_Varkid_Attack_StingerShot_C_ExecuteUbergraph_ARAnim_Varkid_Attack_StingerShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
