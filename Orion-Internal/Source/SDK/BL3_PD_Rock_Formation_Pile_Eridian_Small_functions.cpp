// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Rock_Formation_Pile_Eridian_Small_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PD_Rock_Formation_Pile_Eridian_Small.PD_Rock_Formation_Pile_Eridian_Small_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APD_Rock_Formation_Pile_Eridian_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Small.PD_Rock_Formation_Pile_Eridian_Small_C.UserConstructionScript");

	APD_Rock_Formation_Pile_Eridian_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Small.PD_Rock_Formation_Pile_Eridian_Small_C.Damaged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                HitLocation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpulseDir                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APD_Rock_Formation_Pile_Eridian_Small_C::Damaged(struct FVector* HitLocation, struct FVector* ImpulseDir, class AController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Small.PD_Rock_Formation_Pile_Eridian_Small_C.Damaged");

	APD_Rock_Formation_Pile_Eridian_Small_C_Damaged_Params params;
	params.HitLocation = HitLocation;
	params.ImpulseDir = ImpulseDir;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Small.PD_Rock_Formation_Pile_Eridian_Small_C.ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APD_Rock_Formation_Pile_Eridian_Small_C::ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Small.PD_Rock_Formation_Pile_Eridian_Small_C.ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small");

	APD_Rock_Formation_Pile_Eridian_Small_C_ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
