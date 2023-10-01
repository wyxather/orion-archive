// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPPetEnrageRift_Basic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_Basic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.UserConstructionScript");

	ABPPetEnrageRift_Basic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.NotifyPetTeleported
// (BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_Basic_C::NotifyPetTeleported()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.NotifyPetTeleported");

	ABPPetEnrageRift_Basic_C_NotifyPetTeleported_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.OnPetSummonStarted
// (Event, Protected, BlueprintEvent)

void ABPPetEnrageRift_Basic_C::OnPetSummonStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.OnPetSummonStarted");

	ABPPetEnrageRift_Basic_C_OnPetSummonStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.ExecuteUbergraph_BPPetEnrageRift_Basic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_Basic_C::ExecuteUbergraph_BPPetEnrageRift_Basic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.ExecuteUbergraph_BPPetEnrageRift_Basic");

	ABPPetEnrageRift_Basic_C_ExecuteUbergraph_BPPetEnrageRift_Basic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
