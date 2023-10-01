// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_WeaponMelee_PS_Success_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_WeaponMelee_PS_Success.Action_WeaponMelee_PS_Success_C.PlayScreenParticle
// (BlueprintCallable, BlueprintEvent)

void UAction_WeaponMelee_PS_Success_C::PlayScreenParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_WeaponMelee_PS_Success.Action_WeaponMelee_PS_Success_C.PlayScreenParticle");

	UAction_WeaponMelee_PS_Success_C_PlayScreenParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_WeaponMelee_PS_Success.Action_WeaponMelee_PS_Success_C.ExecuteUbergraph_Action_WeaponMelee_PS_Success
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_WeaponMelee_PS_Success_C::ExecuteUbergraph_Action_WeaponMelee_PS_Success(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_WeaponMelee_PS_Success.Action_WeaponMelee_PS_Success_C.ExecuteUbergraph_Action_WeaponMelee_PS_Success");

	UAction_WeaponMelee_PS_Success_C_ExecuteUbergraph_Action_WeaponMelee_PS_Success_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
