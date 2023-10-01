// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPPetEnrageRift_Mod4_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.PlayFeedback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InLinkedTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_Mod4_C::PlayFeedback(class AActor* InLinkedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.PlayFeedback");

	ABPPetEnrageRift_Mod4_C_PlayFeedback_Params params;
	params.InLinkedTarget = InLinkedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.GetOverlapComponent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* ABPPetEnrageRift_Mod4_C::GetOverlapComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.GetOverlapComponent");

	ABPPetEnrageRift_Mod4_C_GetOverlapComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPPetEnrageRift_Mod4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.UserConstructionScript");

	ABPPetEnrageRift_Mod4_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnShutdownRequested
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bForced                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_Mod4_C::OnShutdownRequested(bool* bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnShutdownRequested");

	ABPPetEnrageRift_Mod4_C_OnShutdownRequested_Params params;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnLinkedTargetAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AOakCharacter**          InLinkedTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_Mod4_C::OnLinkedTargetAdded(class AOakCharacter** InLinkedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnLinkedTargetAdded");

	ABPPetEnrageRift_Mod4_C_OnLinkedTargetAdded_Params params;
	params.InLinkedTarget = InLinkedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnLinkedTargetRemoved
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AOakCharacter**          InLinkedTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_Mod4_C::OnLinkedTargetRemoved(class AOakCharacter** InLinkedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnLinkedTargetRemoved");

	ABPPetEnrageRift_Mod4_C_OnLinkedTargetRemoved_Params params;
	params.InLinkedTarget = InLinkedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.ExecuteUbergraph_BPPetEnrageRift_Mod4
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPPetEnrageRift_Mod4_C::ExecuteUbergraph_BPPetEnrageRift_Mod4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.ExecuteUbergraph_BPPetEnrageRift_Mod4");

	ABPPetEnrageRift_Mod4_C_ExecuteUbergraph_BPPetEnrageRift_Mod4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
