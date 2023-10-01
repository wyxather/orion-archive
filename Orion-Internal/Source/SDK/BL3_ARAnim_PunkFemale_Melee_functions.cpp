// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_PunkFemale_Melee_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_PunkFemale_Melee_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.OnBegin");

	UARAnim_PunkFemale_Melee_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.Notify_Melee
// (BlueprintCallable, BlueprintEvent)

void UARAnim_PunkFemale_Melee_C::Notify_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.Notify_Melee");

	UARAnim_PunkFemale_Melee_C_Notify_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.Notify_MeleePunch
// (BlueprintCallable, BlueprintEvent)

void UARAnim_PunkFemale_Melee_C::Notify_MeleePunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.Notify_MeleePunch");

	UARAnim_PunkFemale_Melee_C_Notify_MeleePunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.Notify_MeleeKick
// (BlueprintCallable, BlueprintEvent)

void UARAnim_PunkFemale_Melee_C::Notify_MeleeKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.Notify_MeleeKick");

	UARAnim_PunkFemale_Melee_C_Notify_MeleeKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.ExecuteUbergraph_ARAnim_PunkFemale_Melee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_PunkFemale_Melee_C::ExecuteUbergraph_ARAnim_PunkFemale_Melee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.ExecuteUbergraph_ARAnim_PunkFemale_Melee");

	UARAnim_PunkFemale_Melee_C_ExecuteUbergraph_ARAnim_PunkFemale_Melee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
