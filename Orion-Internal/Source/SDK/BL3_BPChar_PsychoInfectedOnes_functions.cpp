// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PsychoInfectedOnes_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PsychoInfectedOnes_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.UserConstructionScript");

	ABPChar_PsychoInfectedOnes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.BloodSplats
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PsychoInfectedOnes_C::BloodSplats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.BloodSplats");

	ABPChar_PsychoInfectedOnes_C_BloodSplats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_PsychoInfectedOnes_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.ReceiveBeginPlay");

	ABPChar_PsychoInfectedOnes_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.PsychoShared_TargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PsychoInfectedOnes_C::PsychoShared_TargetChanged(class AActor** TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.PsychoShared_TargetChanged");

	ABPChar_PsychoInfectedOnes_C_PsychoShared_TargetChanged_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.CleaverFacePlant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_PsychoInfectedOnes_C::CleaverFacePlant(const struct FDamageReactionEventSummary& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.CleaverFacePlant");

	ABPChar_PsychoInfectedOnes_C_CleaverFacePlant_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.ExecuteUbergraph_BPChar_PsychoInfectedOnes
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PsychoInfectedOnes_C::ExecuteUbergraph_BPChar_PsychoInfectedOnes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C.ExecuteUbergraph_BPChar_PsychoInfectedOnes");

	ABPChar_PsychoInfectedOnes_C_ExecuteUbergraph_BPChar_PsychoInfectedOnes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
