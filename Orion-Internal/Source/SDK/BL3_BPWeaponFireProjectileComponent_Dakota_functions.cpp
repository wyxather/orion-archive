// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Dakota_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_Dakota.BPWeaponFireProjectileComponent_Dakota_C.GetShotLightProjectileData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPWeaponFireProjectileComponent_Dakota_C::GetShotLightProjectileData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Dakota.BPWeaponFireProjectileComponent_Dakota_C.GetShotLightProjectileData");

	UBPWeaponFireProjectileComponent_Dakota_C_GetShotLightProjectileData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
