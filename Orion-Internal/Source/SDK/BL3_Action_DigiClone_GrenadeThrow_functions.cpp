// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_DigiClone_GrenadeThrow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_DigiClone_GrenadeThrow.Action_DigiClone_GrenadeThrow_C.AnimNotify_ThrowProjectile
// (BlueprintCallable, BlueprintEvent)

void UAction_DigiClone_GrenadeThrow_C::AnimNotify_ThrowProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DigiClone_GrenadeThrow.Action_DigiClone_GrenadeThrow_C.AnimNotify_ThrowProjectile");

	UAction_DigiClone_GrenadeThrow_C_AnimNotify_ThrowProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DigiClone_GrenadeThrow.Action_DigiClone_GrenadeThrow_C.ExecuteUbergraph_Action_DigiClone_GrenadeThrow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_DigiClone_GrenadeThrow_C::ExecuteUbergraph_Action_DigiClone_GrenadeThrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DigiClone_GrenadeThrow.Action_DigiClone_GrenadeThrow_C.ExecuteUbergraph_Action_DigiClone_GrenadeThrow");

	UAction_DigiClone_GrenadeThrow_C_ExecuteUbergraph_Action_DigiClone_GrenadeThrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
