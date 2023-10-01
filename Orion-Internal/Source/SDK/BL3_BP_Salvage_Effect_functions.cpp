// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Salvage_Effect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Salvage_Effect.BP_Salvage_Effect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Salvage_Effect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Effect.BP_Salvage_Effect_C.UserConstructionScript");

	ABP_Salvage_Effect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Effect.BP_Salvage_Effect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Salvage_Effect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Effect.BP_Salvage_Effect_C.ReceiveBeginPlay");

	ABP_Salvage_Effect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Effect.BP_Salvage_Effect_C.ChallengeCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChallengesComponent*    ChallengeComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  ChallengeClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_Effect_C::ChallengeCompleted(class UChallengesComponent* ChallengeComponent, class UClass* ChallengeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Effect.BP_Salvage_Effect_C.ChallengeCompleted");

	ABP_Salvage_Effect_C_ChallengeCompleted_Params params;
	params.ChallengeComponent = ChallengeComponent;
	params.ChallengeClass = ChallengeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Effect.BP_Salvage_Effect_C.EvaulateState
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_Effect_C::EvaulateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Effect.BP_Salvage_Effect_C.EvaulateState");

	ABP_Salvage_Effect_C_EvaulateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Effect.BP_Salvage_Effect_C.__UserState_ClaptrapState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_Effect_C::__UserState_ClaptrapState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Effect.BP_Salvage_Effect_C.__UserState_ClaptrapState_1");

	ABP_Salvage_Effect_C___UserState_ClaptrapState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Effect.BP_Salvage_Effect_C.__UserState_ClaptrapState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_Effect_C::__UserState_ClaptrapState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Effect.BP_Salvage_Effect_C.__UserState_ClaptrapState_2");

	ABP_Salvage_Effect_C___UserState_ClaptrapState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Effect.BP_Salvage_Effect_C.ExecuteUbergraph_BP_Salvage_Effect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_Effect_C::ExecuteUbergraph_BP_Salvage_Effect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Effect.BP_Salvage_Effect_C.ExecuteUbergraph_BP_Salvage_Effect");

	ABP_Salvage_Effect_C_ExecuteUbergraph_BP_Salvage_Effect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
