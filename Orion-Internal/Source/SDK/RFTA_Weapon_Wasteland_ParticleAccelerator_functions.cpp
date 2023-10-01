// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Wasteland_ParticleAccelerator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Wasteland_ParticleAccelerator.Weapon_Wasteland_ParticleAccelerator_C.OnActivated
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Wasteland_ParticleAccelerator_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_ParticleAccelerator.Weapon_Wasteland_ParticleAccelerator_C.OnActivated");

	AWeapon_Wasteland_ParticleAccelerator_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Wasteland_ParticleAccelerator.Weapon_Wasteland_ParticleAccelerator_C.ExecuteUbergraph_Weapon_Wasteland_ParticleAccelerator
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Wasteland_ParticleAccelerator_C::ExecuteUbergraph_Weapon_Wasteland_ParticleAccelerator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_ParticleAccelerator.Weapon_Wasteland_ParticleAccelerator_C.ExecuteUbergraph_Weapon_Wasteland_ParticleAccelerator");

	AWeapon_Wasteland_ParticleAccelerator_C_ExecuteUbergraph_Weapon_Wasteland_ParticleAccelerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
