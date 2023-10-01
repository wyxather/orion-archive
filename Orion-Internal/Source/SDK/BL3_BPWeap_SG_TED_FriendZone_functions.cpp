// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SG_TED_FriendZone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.TedioreThrowWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ThrownProjectile               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SG_TED_FriendZone_C::TedioreThrowWeapon(class AActor** ThrownProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.TedioreThrowWeapon");

	ABPWeap_SG_TED_FriendZone_C_TedioreThrowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ThrownProjectile != nullptr)
		*ThrownProjectile = params.ThrownProjectile;
}


// Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SG_TED_FriendZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.UserConstructionScript");

	ABPWeap_SG_TED_FriendZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.SpawnTurret
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_SG_TED_FriendZone_C::SpawnTurret()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.SpawnTurret");

	ABPWeap_SG_TED_FriendZone_C_SpawnTurret_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.ExecuteUbergraph_BPWeap_SG_TED_FriendZone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SG_TED_FriendZone_C::ExecuteUbergraph_BPWeap_SG_TED_FriendZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.ExecuteUbergraph_BPWeap_SG_TED_FriendZone");

	ABPWeap_SG_TED_FriendZone_C_ExecuteUbergraph_BPWeap_SG_TED_FriendZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
