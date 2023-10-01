// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Enforcer_Shield_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Enforcer_Shield.Proj_Enforcer_Shield_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Enforcer_Shield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Enforcer_Shield.Proj_Enforcer_Shield_C.UserConstructionScript");

	AProj_Enforcer_Shield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Enforcer_Shield.Proj_Enforcer_Shield_C.AIMelee_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          RequestNewMeleeWeapon          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Enforcer_Shield_C::AIMelee_Drop(bool* RequestNewMeleeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Enforcer_Shield.Proj_Enforcer_Shield_C.AIMelee_Drop");

	AProj_Enforcer_Shield_C_AIMelee_Drop_Params params;
	params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Enforcer_Shield.Proj_Enforcer_Shield_C.ExecuteUbergraph_Proj_Enforcer_Shield
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Enforcer_Shield_C::ExecuteUbergraph_Proj_Enforcer_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Enforcer_Shield.Proj_Enforcer_Shield_C.ExecuteUbergraph_Proj_Enforcer_Shield");

	AProj_Enforcer_Shield_C_ExecuteUbergraph_Proj_Enforcer_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
