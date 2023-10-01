// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_TongueLash_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_Skag_Shared_TongueLash.ARAnim_Skag_Shared_TongueLash_C.Notify_TongueLashLtoR
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Skag_Shared_TongueLash_C::Notify_TongueLashLtoR()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_TongueLash.ARAnim_Skag_Shared_TongueLash_C.Notify_TongueLashLtoR");

	UARAnim_Skag_Shared_TongueLash_C_Notify_TongueLashLtoR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_TongueLash.ARAnim_Skag_Shared_TongueLash_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Skag_Shared_TongueLash_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_TongueLash.ARAnim_Skag_Shared_TongueLash_C.OnBegin");

	UARAnim_Skag_Shared_TongueLash_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_TongueLash.ARAnim_Skag_Shared_TongueLash_C.Notify_TongueLashRtoL
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Skag_Shared_TongueLash_C::Notify_TongueLashRtoL()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_TongueLash.ARAnim_Skag_Shared_TongueLash_C.Notify_TongueLashRtoL");

	UARAnim_Skag_Shared_TongueLash_C_Notify_TongueLashRtoL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_TongueLash.ARAnim_Skag_Shared_TongueLash_C.ExecuteUbergraph_ARAnim_Skag_Shared_TongueLash
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Skag_Shared_TongueLash_C::ExecuteUbergraph_ARAnim_Skag_Shared_TongueLash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_TongueLash.ARAnim_Skag_Shared_TongueLash_C.ExecuteUbergraph_ARAnim_Skag_Shared_TongueLash");

	UARAnim_Skag_Shared_TongueLash_C_ExecuteUbergraph_ARAnim_Skag_Shared_TongueLash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
