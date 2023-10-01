// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Tediore_Interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tediore_Interface.Tediore_Interface_C.Tediore_WeaponData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageRadius                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageTypeClass                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumMirvProjectiles             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FireRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LoadedAmmo                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ThrowType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTediore_Interface_C::Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int* NumMirvProjectiles, float* FireRate, float* LoadedAmmo, int* ThrowType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tediore_Interface.Tediore_Interface_C.Tediore_WeaponData");

	UTediore_Interface_C_Tediore_WeaponData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageRadius != nullptr)
		*DamageRadius = params.DamageRadius;
	if (DamageTypeClass != nullptr)
		*DamageTypeClass = params.DamageTypeClass;
	if (NumMirvProjectiles != nullptr)
		*NumMirvProjectiles = params.NumMirvProjectiles;
	if (FireRate != nullptr)
		*FireRate = params.FireRate;
	if (LoadedAmmo != nullptr)
		*LoadedAmmo = params.LoadedAmmo;
	if (ThrowType != nullptr)
		*ThrowType = params.ThrowType;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
