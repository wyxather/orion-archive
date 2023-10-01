// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Rural_FusionRifle_Beam_Endpoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Rural_FusionRifle_Beam_Endpoint.Weapon_Rural_FusionRifle_Beam_Endpoint_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AWeapon_Rural_FusionRifle_Beam_Endpoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle_Beam_Endpoint.Weapon_Rural_FusionRifle_Beam_Endpoint_C.ReceiveBeginPlay");

	AWeapon_Rural_FusionRifle_Beam_Endpoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle_Beam_Endpoint.Weapon_Rural_FusionRifle_Beam_Endpoint_C.ExecuteUbergraph_Weapon_Rural_FusionRifle_Beam_Endpoint
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Rural_FusionRifle_Beam_Endpoint_C::ExecuteUbergraph_Weapon_Rural_FusionRifle_Beam_Endpoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle_Beam_Endpoint.Weapon_Rural_FusionRifle_Beam_Endpoint_C.ExecuteUbergraph_Weapon_Rural_FusionRifle_Beam_Endpoint");

	AWeapon_Rural_FusionRifle_Beam_Endpoint_C_ExecuteUbergraph_Weapon_Rural_FusionRifle_Beam_Endpoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
