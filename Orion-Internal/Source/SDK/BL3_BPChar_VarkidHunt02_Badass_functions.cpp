// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_VarkidHunt02_Badass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidHunt02_Badass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.UserConstructionScript");

	ABPChar_VarkidHunt02_Badass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_VarkidHunt02_Badass_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.ReceiveBeginPlay");

	ABPChar_VarkidHunt02_Badass_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.DetermineNaturalEvolutionElligibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidHunt02_Badass_C::DetermineNaturalEvolutionElligibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.DetermineNaturalEvolutionElligibility");

	ABPChar_VarkidHunt02_Badass_C_DetermineNaturalEvolutionElligibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.CE_TimeToPodUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary DamageSummary                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_VarkidHunt02_Badass_C::CE_TimeToPodUp(const struct FDamageReactionEventSummary& DamageSummary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.CE_TimeToPodUp");

	ABPChar_VarkidHunt02_Badass_C_CE_TimeToPodUp_Params params;
	params.DamageSummary = DamageSummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.CE_VarkidNaturalPodDeath
// (BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidHunt02_Badass_C::CE_VarkidNaturalPodDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.CE_VarkidNaturalPodDeath");

	ABPChar_VarkidHunt02_Badass_C_CE_VarkidNaturalPodDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.VarkidPod_HideBody
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidHunt02_Badass_C::VarkidPod_HideBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.VarkidPod_HideBody");

	ABPChar_VarkidHunt02_Badass_C_VarkidPod_HideBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.ExecuteUbergraph_BPChar_VarkidHunt02_Badass
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidHunt02_Badass_C::ExecuteUbergraph_BPChar_VarkidHunt02_Badass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C.ExecuteUbergraph_BPChar_VarkidHunt02_Badass");

	ABPChar_VarkidHunt02_Badass_C_ExecuteUbergraph_BPChar_VarkidHunt02_Badass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
