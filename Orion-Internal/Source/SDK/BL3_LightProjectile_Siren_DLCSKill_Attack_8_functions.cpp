// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Siren_DLCSKill_Attack_8_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_Siren_DLCSKill_Attack_8.LightProjectile_Siren_DLCSKill_Attack_7_C.EnableHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Siren_DLCSKill_Attack_7_C::EnableHoming(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Siren_DLCSKill_Attack_8.LightProjectile_Siren_DLCSKill_Attack_7_C.EnableHoming");

	ULightProjectile_Siren_DLCSKill_Attack_7_C_EnableHoming_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_Siren_DLCSKill_Attack_8.LightProjectile_Siren_DLCSKill_Attack_7_C.TryEnableHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Siren_DLCSKill_Attack_7_C::TryEnableHoming(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Siren_DLCSKill_Attack_8.LightProjectile_Siren_DLCSKill_Attack_7_C.TryEnableHoming");

	ULightProjectile_Siren_DLCSKill_Attack_7_C_TryEnableHoming_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
