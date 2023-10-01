// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Weapon_SwarmerMissile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_SwarmerMissile.BP_Weapon_SwarmerMissile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_SwarmerMissile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_SwarmerMissile.BP_Weapon_SwarmerMissile_C.UserConstructionScript");

	ABP_Weapon_SwarmerMissile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_SwarmerMissile.BP_Weapon_SwarmerMissile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_SwarmerMissile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_SwarmerMissile.BP_Weapon_SwarmerMissile_C.ReceiveBeginPlay");

	ABP_Weapon_SwarmerMissile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_SwarmerMissile.BP_Weapon_SwarmerMissile_C.EnableHoming
// (BlueprintCallable, BlueprintEvent)

void ABP_Weapon_SwarmerMissile_C::EnableHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_SwarmerMissile.BP_Weapon_SwarmerMissile_C.EnableHoming");

	ABP_Weapon_SwarmerMissile_C_EnableHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_SwarmerMissile.BP_Weapon_SwarmerMissile_C.DisableHoming
// (BlueprintCallable, BlueprintEvent)

void ABP_Weapon_SwarmerMissile_C::DisableHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_SwarmerMissile.BP_Weapon_SwarmerMissile_C.DisableHoming");

	ABP_Weapon_SwarmerMissile_C_DisableHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_SwarmerMissile.BP_Weapon_SwarmerMissile_C.ExecuteUbergraph_BP_Weapon_SwarmerMissile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_SwarmerMissile_C::ExecuteUbergraph_BP_Weapon_SwarmerMissile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_SwarmerMissile.BP_Weapon_SwarmerMissile_C.ExecuteUbergraph_BP_Weapon_SwarmerMissile");

	ABP_Weapon_SwarmerMissile_C_ExecuteUbergraph_BP_Weapon_SwarmerMissile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
