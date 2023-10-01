// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_EnrageAirAnim_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.GetRiftActorFromRegisters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABPPetEnrageRift_C*      res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UA_Pet_EnrageAirAnim_C::GetRiftActorFromRegisters(class ABPPetEnrageRift_C** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.GetRiftActorFromRegisters");

	UA_Pet_EnrageAirAnim_C_GetRiftActorFromRegisters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.GetLocationFromRegisters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 res                            (Parm, OutParm, IsPlainOldData)

void UA_Pet_EnrageAirAnim_C::GetLocationFromRegisters(struct FVector* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.GetLocationFromRegisters");

	UA_Pet_EnrageAirAnim_C_GetLocationFromRegisters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Pet_EnrageAirAnim_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.OnBegin");

	UA_Pet_EnrageAirAnim_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.ExecuteUbergraph_A_Pet_EnrageAirAnim
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Pet_EnrageAirAnim_C::ExecuteUbergraph_A_Pet_EnrageAirAnim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.ExecuteUbergraph_A_Pet_EnrageAirAnim");

	UA_Pet_EnrageAirAnim_C_ExecuteUbergraph_A_Pet_EnrageAirAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
