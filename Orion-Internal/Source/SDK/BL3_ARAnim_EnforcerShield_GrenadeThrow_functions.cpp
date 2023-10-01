// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_EnforcerShield_GrenadeThrow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_EnforcerShield_GrenadeThrow.ARAnim_EnforcerShield_GrenadeThrow_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_EnforcerShield_GrenadeThrow_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_EnforcerShield_GrenadeThrow.ARAnim_EnforcerShield_GrenadeThrow_C.OnBegin");

	UARAnim_EnforcerShield_GrenadeThrow_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_EnforcerShield_GrenadeThrow.ARAnim_EnforcerShield_GrenadeThrow_C.Grenade_Begin
// (BlueprintCallable, BlueprintEvent)

void UARAnim_EnforcerShield_GrenadeThrow_C::Grenade_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_EnforcerShield_GrenadeThrow.ARAnim_EnforcerShield_GrenadeThrow_C.Grenade_Begin");

	UARAnim_EnforcerShield_GrenadeThrow_C_Grenade_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_EnforcerShield_GrenadeThrow.ARAnim_EnforcerShield_GrenadeThrow_C.Grenade_End
// (BlueprintCallable, BlueprintEvent)

void UARAnim_EnforcerShield_GrenadeThrow_C::Grenade_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_EnforcerShield_GrenadeThrow.ARAnim_EnforcerShield_GrenadeThrow_C.Grenade_End");

	UARAnim_EnforcerShield_GrenadeThrow_C_Grenade_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_EnforcerShield_GrenadeThrow.ARAnim_EnforcerShield_GrenadeThrow_C.Grenade_Abort
// (BlueprintCallable, BlueprintEvent)

void UARAnim_EnforcerShield_GrenadeThrow_C::Grenade_Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_EnforcerShield_GrenadeThrow.ARAnim_EnforcerShield_GrenadeThrow_C.Grenade_Abort");

	UARAnim_EnforcerShield_GrenadeThrow_C_Grenade_Abort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_EnforcerShield_GrenadeThrow.ARAnim_EnforcerShield_GrenadeThrow_C.ExecuteUbergraph_ARAnim_EnforcerShield_GrenadeThrow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_EnforcerShield_GrenadeThrow_C::ExecuteUbergraph_ARAnim_EnforcerShield_GrenadeThrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_EnforcerShield_GrenadeThrow.ARAnim_EnforcerShield_GrenadeThrow_C.ExecuteUbergraph_ARAnim_EnforcerShield_GrenadeThrow");

	UARAnim_EnforcerShield_GrenadeThrow_C_ExecuteUbergraph_ARAnim_EnforcerShield_GrenadeThrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
