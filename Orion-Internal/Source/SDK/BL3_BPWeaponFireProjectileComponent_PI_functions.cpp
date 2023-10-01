// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_PI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C.QueryBuiltStacks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberOfInstances              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_PI_C::QueryBuiltStacks(unsigned char Index, int* NumberOfInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C.QueryBuiltStacks");

	UBPWeaponFireProjectileComponent_PI_C_QueryBuiltStacks_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberOfInstances != nullptr)
		*NumberOfInstances = params.NumberOfInstances;
}


// Function BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C.QueryActiveBonus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumberOfInstances              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_PI_C::QueryActiveBonus(int* NumberOfInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C.QueryActiveBonus");

	UBPWeaponFireProjectileComponent_PI_C_QueryActiveBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberOfInstances != nullptr)
		*NumberOfInstances = params.NumberOfInstances;
}


// Function BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C.GetShotLightProjectileData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPWeaponFireProjectileComponent_PI_C::GetShotLightProjectileData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_PI.BPWeaponFireProjectileComponent_PI_C.GetShotLightProjectileData");

	UBPWeaponFireProjectileComponent_PI_C_GetShotLightProjectileData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
