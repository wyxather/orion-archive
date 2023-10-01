// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Salamander_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Salamander.BPWeaponFireProjectile_Salamander_C.SetReadyForSplat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bReadyForSplat                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Salamander_C::SetReadyForSplat(bool bReadyForSplat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Salamander.BPWeaponFireProjectile_Salamander_C.SetReadyForSplat");

	UBPWeaponFireProjectile_Salamander_C_SetReadyForSplat_Params params;
	params.bReadyForSplat = bReadyForSplat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Salamander.BPWeaponFireProjectile_Salamander_C.GetShotLightProjectileData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPWeaponFireProjectile_Salamander_C::GetShotLightProjectileData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Salamander.BPWeaponFireProjectile_Salamander_C.GetShotLightProjectileData");

	UBPWeaponFireProjectile_Salamander_C_GetShotLightProjectileData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
