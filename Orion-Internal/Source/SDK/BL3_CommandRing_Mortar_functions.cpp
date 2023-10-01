// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CommandRing_Mortar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CommandRing_Mortar.CommandRing_Mortar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACommandRing_Mortar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommandRing_Mortar.CommandRing_Mortar_C.UserConstructionScript");

	ACommandRing_Mortar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommandRing_Mortar.CommandRing_Mortar_C.BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACommandRing_Mortar_C::BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommandRing_Mortar.CommandRing_Mortar_C.BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar");

	ACommandRing_Mortar_C_BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommandRing_Mortar.CommandRing_Mortar_C.ExecuteUbergraph_CommandRing_Mortar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACommandRing_Mortar_C::ExecuteUbergraph_CommandRing_Mortar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommandRing_Mortar.CommandRing_Mortar_C.ExecuteUbergraph_CommandRing_Mortar");

	ACommandRing_Mortar_C_ExecuteUbergraph_CommandRing_Mortar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
