// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_SG_SacrificialLamb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_SG_SacrificialLamb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C.UserConstructionScript");

	ATEDProjectile_SG_SacrificialLamb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_SG_SacrificialLamb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C.ReceiveBeginPlay");

	ATEDProjectile_SG_SacrificialLamb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C.ExecuteUbergraph_TEDProjectile_SG_SacrificialLamb
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_SG_SacrificialLamb_C::ExecuteUbergraph_TEDProjectile_SG_SacrificialLamb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C.ExecuteUbergraph_TEDProjectile_SG_SacrificialLamb");

	ATEDProjectile_SG_SacrificialLamb_C_ExecuteUbergraph_TEDProjectile_SG_SacrificialLamb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
