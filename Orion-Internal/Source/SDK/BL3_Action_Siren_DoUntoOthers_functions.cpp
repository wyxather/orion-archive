// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Siren_DoUntoOthers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Siren_DoUntoOthers.Action_Siren_DoUntoOthers_C.AN_FireProjectile
// (BlueprintCallable, BlueprintEvent)

void UAction_Siren_DoUntoOthers_C::AN_FireProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Siren_DoUntoOthers.Action_Siren_DoUntoOthers_C.AN_FireProjectile");

	UAction_Siren_DoUntoOthers_C_AN_FireProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Siren_DoUntoOthers.Action_Siren_DoUntoOthers_C.ExecuteUbergraph_Action_Siren_DoUntoOthers
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Siren_DoUntoOthers_C::ExecuteUbergraph_Action_Siren_DoUntoOthers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Siren_DoUntoOthers.Action_Siren_DoUntoOthers_C.ExecuteUbergraph_Action_Siren_DoUntoOthers");

	UAction_Siren_DoUntoOthers_C_ExecuteUbergraph_Action_Siren_DoUntoOthers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
