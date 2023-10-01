// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_ShockOrb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C.AN_FireShockOrb
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_ShockOrb_C::AN_FireShockOrb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C.AN_FireShockOrb");

	UAction_PetLoader_ShockOrb_C_AN_FireShockOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C.AN_ChargeShockOrb
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_ShockOrb_C::AN_ChargeShockOrb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C.AN_ChargeShockOrb");

	UAction_PetLoader_ShockOrb_C_AN_ChargeShockOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C.ExecuteUbergraph_Action_PetLoader_ShockOrb
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_ShockOrb_C::ExecuteUbergraph_Action_PetLoader_ShockOrb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C.ExecuteUbergraph_Action_PetLoader_ShockOrb");

	UAction_PetLoader_ShockOrb_C_ExecuteUbergraph_Action_PetLoader_ShockOrb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
