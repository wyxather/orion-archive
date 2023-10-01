// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CrewChallengeComponent_Salvage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CrewChallengeComponent_Salvage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C.ReceiveBeginPlay");

	UBP_CrewChallengeComponent_Salvage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C.Setup_Challenge
// (BlueprintCallable, BlueprintEvent)

void UBP_CrewChallengeComponent_Salvage_C::Setup_Challenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C.Setup_Challenge");

	UBP_CrewChallengeComponent_Salvage_C_Setup_Challenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C.ClaptrapPart_Found
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUseEvent               UseEvent                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_CrewChallengeComponent_Salvage_C::ClaptrapPart_Found(const struct FUseEvent& UseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C.ClaptrapPart_Found");

	UBP_CrewChallengeComponent_Salvage_C_ClaptrapPart_Found_Params params;
	params.UseEvent = UseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C.ExecuteUbergraph_BP_CrewChallengeComponent_Salvage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrewChallengeComponent_Salvage_C::ExecuteUbergraph_BP_CrewChallengeComponent_Salvage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C.ExecuteUbergraph_BP_CrewChallengeComponent_Salvage");

	UBP_CrewChallengeComponent_Salvage_C_ExecuteUbergraph_BP_CrewChallengeComponent_Salvage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
